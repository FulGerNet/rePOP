/**
 * XAudio2 Audio Output Backend
 *
 * Provides low-latency audio output via XAudio2 (Win7+).
 * Called from the APU monitor frame to submit mixed samples.
 * Falls back gracefully if XAudio2 is unavailable.
 */

#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "apu_xaudio2.h"

/* The XAudio2 backend is Windows-only. On Linux all xa2_* functions are
 * stubbed to report inactive; real audio output via SDL2 comes later. */
#if defined(_WIN32)

#define COBJMACROS
#include <windows.h>
#include <xaudio2.h>

#pragma comment(lib, "xaudio2.lib")
#pragma comment(lib, "ole32.lib")

#define XA2_SAMPLE_RATE   48000
#define XA2_CHANNELS      2
/* RE-SoT: one buffer is one APU monitor frame (256 samples, 5.33 ms), which
 * is what the frame thread produces per tick of its own clock. The queue is
 * the only slack between that clock and the sound card's: it is primed with
 * silence when it runs dry and a frame is dropped when it grows past
 * XA2_QUEUE_MAX, so latency stays between about 20 and 85 ms.
 * RE-SoT: each of those is an audible click, and drift between the two clocks
 * made them periodic. The source voice's frequency ratio now follows the queue
 * depth by at most 0.8% (inaudible), holding it near XA2_QUEUE_TARGET; the
 * prime and the drop are left for real stalls. Same control as the Android
 * output (port/android/src/audio_android.c). Both targets. */
#define XA2_BUF_SAMPLES   256
#define XA2_NUM_BUFS      32
#define XA2_QUEUE_PRIME   4
#define XA2_QUEUE_TARGET  8
#define XA2_QUEUE_MAX     24

static IXAudio2               *g_xa2 = NULL;
static IXAudio2MasteringVoice *g_xa2_master = NULL;
static IXAudio2SourceVoice    *g_xa2_source = NULL;
static int16_t                 g_xa2_bufs[XA2_NUM_BUFS][XA2_BUF_SAMPLES][2];
static int                     g_xa2_next_buf = 0;
static int                     g_xa2_initialized = 0;
static int                     g_xa2_frames_written = 0;
static int                     g_xa2_queued, g_xa2_dropped, g_xa2_starved;

int xa2_init(void)
{
    HRESULT hr;
    int com_initialized;
    WAVEFORMATEX wfx = { 0 };

    if (g_xa2_initialized) return 1;

    hr = CoInitializeEx(NULL, COINIT_MULTITHREADED);
    if (FAILED(hr) && hr != RPC_E_CHANGED_MODE) {
        fprintf(stderr, "[XA2] CoInitializeEx failed: 0x%08lX\n", hr);
        return 0;
    }
    com_initialized = SUCCEEDED(hr);

    hr = XAudio2Create(&g_xa2, 0, XAUDIO2_DEFAULT_PROCESSOR);
    if (FAILED(hr) || !g_xa2) {
        fprintf(stderr, "[XA2] XAudio2Create failed: 0x%08lX\n", hr);
        goto fail;
    }

    hr = IXAudio2_CreateMasteringVoice(g_xa2, &g_xa2_master,
        XA2_CHANNELS, XA2_SAMPLE_RATE, 0, NULL, NULL, 0);
    if (FAILED(hr)) {
        fprintf(stderr, "[XA2] CreateMasteringVoice failed: 0x%08lX\n", hr);
        goto fail;
    }

    wfx.wFormatTag      = WAVE_FORMAT_PCM;
    wfx.nChannels       = XA2_CHANNELS;
    wfx.nSamplesPerSec  = XA2_SAMPLE_RATE;
    wfx.wBitsPerSample  = 16;
    wfx.nBlockAlign     = XA2_CHANNELS * 2;
    wfx.nAvgBytesPerSec = XA2_SAMPLE_RATE * wfx.nBlockAlign;

    hr = IXAudio2_CreateSourceVoice(g_xa2, &g_xa2_source,
        &wfx, 0, XAUDIO2_DEFAULT_FREQ_RATIO, NULL, NULL, NULL);
    if (FAILED(hr)) {
        fprintf(stderr, "[XA2] CreateSourceVoice failed: 0x%08lX\n", hr);
        goto fail;
    }

    hr = IXAudio2SourceVoice_Start(g_xa2_source, 0, XAUDIO2_COMMIT_NOW);
    if (FAILED(hr)) {
        fprintf(stderr, "[XA2] Start failed: 0x%08lX\n", hr);
        goto fail;
    }

    g_xa2_next_buf = 0;
    g_xa2_initialized = 1;
    g_xa2_frames_written = 0;

    fprintf(stderr, "[XA2] XAudio2 initialized (%d Hz stereo 16-bit, %d x %d-sample buffers)\n",
            XA2_SAMPLE_RATE, XA2_NUM_BUFS, XA2_BUF_SAMPLES);
    return 1;

fail:
    xa2_shutdown();
    /* Failed initialization still runs on the COM-initializing thread. */
    if (com_initialized) CoUninitialize();
    return 0;
}

void xa2_shutdown(void)
{
    if (g_xa2_source) {
        IXAudio2SourceVoice_Stop(g_xa2_source, 0, XAUDIO2_COMMIT_NOW);
        IXAudio2SourceVoice_FlushSourceBuffers(g_xa2_source);
        g_xa2_source->lpVtbl->DestroyVoice(g_xa2_source);
        g_xa2_source = NULL;
    }
    if (g_xa2_master) {
        g_xa2_master->lpVtbl->DestroyVoice(g_xa2_master);
        g_xa2_master = NULL;
    }
    if (g_xa2) {
        IXAudio2_Release(g_xa2);
        g_xa2 = NULL;
    }

    if (g_xa2_initialized)
        fprintf(stderr, "[XA2] Shut down (%d frames written)\n", g_xa2_frames_written);
    g_xa2_initialized = 0;
}

int xa2_is_active(void)
{
    return g_xa2_initialized;
}

/* Submit a buffer of mixed samples to XAudio2.
 * Called from APU frame thread. Returns 1 if buffer was submitted. */
int xa2_submit_samples(const int16_t *samples, int num_samples)
{
    XAUDIO2_VOICE_STATE state;
    XAUDIO2_BUFFER xbuf;
    int idx;
    int copy_samples;
    HRESULT hr;

    if (!g_xa2_initialized || !g_xa2_source) return 0;

    IXAudio2SourceVoice_GetState(g_xa2_source, &state, XAUDIO2_VOICE_NOSAMPLESPLAYED);
    g_xa2_queued = (int)state.BuffersQueued;
    {
        static float depth = XA2_QUEUE_TARGET, applied = 1.0f;
        float ratio;
        depth += ((float)state.BuffersQueued - depth) * 0.02f;   /* ~50-frame average */
        ratio = 1.0f + (depth - XA2_QUEUE_TARGET) * 0.0015f;
        if (ratio > 1.008f) ratio = 1.008f;
        if (ratio < 0.992f) ratio = 0.992f;
        if (ratio - applied > 0.0005f || applied - ratio > 0.0005f) {
            applied = ratio;
            IXAudio2SourceVoice_SetFrequencyRatio(g_xa2_source, ratio, XAUDIO2_COMMIT_NOW);
        }
    }
    if ((int)state.BuffersQueued >= XA2_QUEUE_MAX) {
        g_xa2_dropped++;
        return 0;
    }
    if (state.BuffersQueued == 0) {
        /* Ran dry (or first frame): a cushion of silence ahead of the audio. */
        int k;
        if (g_xa2_frames_written)
            g_xa2_starved++;
        for (k = 0; k < XA2_QUEUE_PRIME; k++) {
            idx = g_xa2_next_buf;
            memset(g_xa2_bufs[idx], 0, sizeof g_xa2_bufs[idx]);
            memset(&xbuf, 0, sizeof(xbuf));
            xbuf.AudioBytes = sizeof g_xa2_bufs[idx];
            xbuf.pAudioData = (const BYTE *)g_xa2_bufs[idx];
            if (SUCCEEDED(IXAudio2SourceVoice_SubmitSourceBuffer(g_xa2_source, &xbuf, NULL)))
                g_xa2_next_buf = (idx + 1) % XA2_NUM_BUFS;
        }
    }

    idx = g_xa2_next_buf;
    copy_samples = (num_samples > XA2_BUF_SAMPLES) ? XA2_BUF_SAMPLES : num_samples;
    memcpy(g_xa2_bufs[idx], samples, copy_samples * XA2_CHANNELS * sizeof(int16_t));

    memset(&xbuf, 0, sizeof(xbuf));
    xbuf.AudioBytes = copy_samples * XA2_CHANNELS * sizeof(int16_t);
    xbuf.pAudioData = (const BYTE *)g_xa2_bufs[idx];

    hr = IXAudio2SourceVoice_SubmitSourceBuffer(g_xa2_source, &xbuf, NULL);
    if (FAILED(hr)) return 0;

    g_xa2_next_buf = (idx + 1) % XA2_NUM_BUFS;
    g_xa2_frames_written++;
    return 1;
}

int xa2_get_buffer_size(void)
{
    return XA2_BUF_SAMPLES;
}

void xa2_get_stats(int *queued, int *dropped, int *starved)
{
    *queued = g_xa2_queued;
    *dropped = g_xa2_dropped;
    *starved = g_xa2_starved;
}

#else /* !_WIN32 -- POSIX stubs (no audio output yet) */

int  xa2_init(void)                                   { return 0; }
void xa2_shutdown(void)                               {}
int  xa2_is_active(void)                              { return 0; }
int  xa2_submit_samples(const int16_t *s, int n)      { (void)s; (void)n; return 0; }
int  xa2_get_buffer_size(void)                        { return 0; }
void xa2_get_stats(int *q, int *d, int *s)            { *q = *d = *s = 0; }

#endif /* _WIN32 */
