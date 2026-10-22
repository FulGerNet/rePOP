/**
 * reSOT - Android audio output for the emulated APU: the xa2_* interface of
 * src/apu/apu_xaudio2.h on an SDL3 audio stream (AAudio/OpenSL underneath).
 *
 * One APU monitor frame
 * (256 stereo 16-bit samples at 48 kHz, 5.33 ms) per submission; when the
 * queue runs dry it is primed with two frames of silence. Pending audio is
 * cleared after a submission stall or a twelve-frame backlog, retaining the
 * newest block rather than replaying an old scene. Device latency is separate.
 */
#include <SDL3/SDL.h>
#include <stdio.h>
#include <string.h>

#include "apu_xaudio2.h"

#define XA2_SAMPLE_RATE 48000
#define XA2_CHANNELS    2
#define XA2_BUF_SAMPLES 256
#define XA2_FRAME_BYTES (XA2_BUF_SAMPLES * XA2_CHANNELS * 2)
#define XA2_QUEUE_PRIME 2
#define XA2_QUEUE_MAX   12

static SDL_AudioStream *s_stream;
static int s_frames_written, s_queued, s_dropped, s_starved;
static Uint64 s_last_submit;

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
    s_last_submit = 0;
    s_queued = s_dropped = s_starved = 0;
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
    if (!samples || num_samples <= 0) return 0;
    if (num_samples > XA2_BUF_SAMPLES) num_samples = XA2_BUF_SAMPLES;
    /* Keep source and resampled queue durations comparable. Available may
     * already include queued input, so use the maximum, never their sum. */
    SDL_AudioSpec output;
    SDL_LockAudioStream(s_stream);
    Uint64 now = SDL_GetTicksNS();
    if (s_last_submit && now-s_last_submit > 150000000ULL)
        SDL_ClearAudioStream(s_stream); // Do not replay stale output after a stall/resume.
    s_last_submit = now;
    queued = SDL_GetAudioStreamQueued(s_stream);
    if (SDL_GetAudioStreamFormat(s_stream, NULL, &output) && output.freq > 0 && output.channels > 0) {
        int available = SDL_GetAudioStreamAvailable(s_stream);
        int width = SDL_AUDIO_BYTESIZE(output.format) * output.channels;
        if (available > 0 && width > 0) {
            Sint64 equivalent = (Sint64)available * XA2_SAMPLE_RATE * XA2_CHANNELS * 2 / ((Sint64)width * output.freq);
            if (equivalent > queued) queued = equivalent > SDL_MAX_SINT32 ? SDL_MAX_SINT32 : (int)equivalent;
        }
    }
    frames = queued < 0 ? 0 : queued / XA2_FRAME_BYTES;
    s_queued = frames;
    if (frames >= XA2_QUEUE_MAX) {
        s_dropped++;
        // Recover toward the current scene instead of discarding only its newest audio.
        SDL_ClearAudioStream(s_stream);
        queued = 0;
    }
    if (queued <= 0) {
        if (s_frames_written) s_starved++;
        for (k = 0; k < XA2_QUEUE_PRIME; k++)
            SDL_PutAudioStreamData(s_stream, silence, sizeof silence);
    }
    if (!SDL_PutAudioStreamData(s_stream, samples, num_samples * XA2_CHANNELS * 2)) {
        SDL_UnlockAudioStream(s_stream);
        return 0;
    }
    SDL_UnlockAudioStream(s_stream);
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
