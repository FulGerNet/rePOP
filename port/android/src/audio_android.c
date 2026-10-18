/**
 * reSOT - Android audio output for the emulated APU: the xa2_* interface of
 * src/apu/apu_xaudio2.h on an SDL3 audio stream (AAudio/OpenSL underneath).
 *
 * The same queue policy as the Windows XAudio2 backend: one APU monitor frame
 * (256 stereo 16-bit samples at 48 kHz, 5.33 ms) per submission; when the
 * queue runs dry it is primed with four frames of silence, and a frame is
 * dropped once sixteen are waiting, so latency stays at about 20-85 ms
 * whatever the two clocks do.
 */
#include <SDL3/SDL.h>
#include <stdio.h>
#include <string.h>

#include "apu_xaudio2.h"

#define XA2_SAMPLE_RATE 48000
#define XA2_CHANNELS    2
#define XA2_BUF_SAMPLES 256
#define XA2_FRAME_BYTES (XA2_BUF_SAMPLES * XA2_CHANNELS * 2)
#define XA2_QUEUE_PRIME 4
#define XA2_QUEUE_MAX   16

static SDL_AudioStream *s_stream;
static int s_frames_written, s_queued, s_dropped, s_starved;

int xa2_init(void)
{
    SDL_AudioSpec spec;
    if (s_stream) return 1;
    if (!SDL_WasInit(SDL_INIT_AUDIO) && !SDL_InitSubSystem(SDL_INIT_AUDIO)) {
        fprintf(stderr, "[XA2] SDL audio unavailable: %s\n", SDL_GetError());
        return 0;
    }
    spec.format = SDL_AUDIO_S16;
    spec.channels = XA2_CHANNELS;
    spec.freq = XA2_SAMPLE_RATE;
    s_stream = SDL_OpenAudioDeviceStream(SDL_AUDIO_DEVICE_DEFAULT_PLAYBACK, &spec, NULL, NULL);
    if (!s_stream) {
        fprintf(stderr, "[XA2] SDL_OpenAudioDeviceStream failed: %s\n", SDL_GetError());
        return 0;
    }
    SDL_ResumeAudioStreamDevice(s_stream);
    s_frames_written = 0;
    fprintf(stderr, "[XA2] SDL audio initialized (%d Hz stereo 16-bit, %d-sample frames)\n",
            XA2_SAMPLE_RATE, XA2_BUF_SAMPLES);
    return 1;
}

void xa2_shutdown(void)
{
    if (s_stream) {
        SDL_DestroyAudioStream(s_stream);
        s_stream = NULL;
        fprintf(stderr, "[XA2] Shut down (%d frames written)\n", s_frames_written);
    }
}

int xa2_is_active(void) { return s_stream != NULL; }

int xa2_submit_samples(const int16_t *samples, int num_samples)
{
    static const int16_t silence[XA2_BUF_SAMPLES * XA2_CHANNELS];
    int queued, frames, k;
    if (!s_stream) return 0;
    if (num_samples > XA2_BUF_SAMPLES) num_samples = XA2_BUF_SAMPLES;
    queued = SDL_GetAudioStreamQueued(s_stream);
    frames = queued < 0 ? 0 : queued / XA2_FRAME_BYTES;
    s_queued = frames;
    if (frames >= XA2_QUEUE_MAX) {
        s_dropped++;
        return 0;
    }
    if (queued <= 0) {
        if (s_frames_written) s_starved++;
        for (k = 0; k < XA2_QUEUE_PRIME; k++)
            SDL_PutAudioStreamData(s_stream, silence, sizeof silence);
    }
    if (!SDL_PutAudioStreamData(s_stream, samples, num_samples * XA2_CHANNELS * 2))
        return 0;
    s_frames_written++;
    return 1;
}

int xa2_get_buffer_size(void) { return XA2_BUF_SAMPLES; }

void xa2_get_stats(int *queued, int *dropped, int *starved)
{
    if (queued) *queued = s_queued;
    if (dropped) *dropped = s_dropped;
    if (starved) *starved = s_starved;
}
