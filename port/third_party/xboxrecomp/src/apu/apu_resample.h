/* SPDX-License-Identifier: LGPL-2.0-or-later
 * RE-SoT: persistent per-voice linear resampling. The VP pitch ratio is
 * output frames / source frames; ignoring it plays every source at 48 kHz.
 * This small pull-based implementation needs no libsamplerate dependency.
 * Source-end is distinct from a temporary streaming underrun, and the last
 * source frame occupies a full source interval before the voice completes. */
#pragma once
#include <math.h>
#include <stdbool.h>
#include <string.h>

#define RESOT_AUDIO_INPUT_FRAMES 64
typedef struct ResotAudioResampler {
    float input[RESOT_AUDIO_INPUT_FRAMES][2];
    unsigned count;
    double phase;
    bool ended;
} ResotAudioResampler;

/* Return source frames read, or <=0 for no data. Set ended only for permanent
 * EOF, never for an empty stream segment that can be supplied later. */
typedef int (*ResotAudioRead)(void *context, float output[][2], int frames,
                             bool *ended);

static inline void resot_audio_resampler_reset(ResotAudioResampler *state)
{
    memset(state, 0, sizeof(*state));
}

static inline bool resot_audio_resampler_finished(const ResotAudioResampler *state)
{
    return state->ended && state->phase >= (double)state->count;
}

static inline int resot_audio_resample(ResotAudioResampler *state,
                                     float output[][2], int frames,
                                     double ratio, ResotAudioRead read,
                                     void *context)
{
    int produced = 0;
    bool stalled = false;
    double step;
    if (!(ratio > 0.0) || !isfinite(ratio)) return -1;
    step = 1.0 / ratio;
    if (!isfinite(step)) return -1;
    while (produced < frames) {
        for (;;) {
            /* Keep the fraction across 32-sample VP blocks and pitch changes.
             * Consume skipped input in batches even for high pitch values. */
            if (state->phase >= 1.0 && state->count) {
                unsigned skip = state->phase >= state->count ? state->count
                                                           : (unsigned)state->phase;
                state->count -= skip;
                state->phase -= skip;
                memmove(state->input, state->input + skip,
                        state->count * sizeof(state->input[0]));
            }
            if (state->phase < 1.0 && state->count &&
                    (state->count >= 2 || state->ended || stalled)) break;
            if (state->ended || stalled)
                return produced ? produced : (state->ended ? 0 : -1);
            {
                /* Read only this output block's source demand plus one frame
                 * for interpolation, so guest cursors/stream notifications do
                 * not run arbitrarily far ahead of audible playback. */
                double demand = ceil(state->phase + (frames - produced - 1) * step) + 2;
                int room = RESOT_AUDIO_INPUT_FRAMES - (int)state->count;
                int wanted = demand >= RESOT_AUDIO_INPUT_FRAMES ? room
                           : (int)demand - (int)state->count;
                bool ended = false;
                int count;
                if (wanted > room) wanted = room;
                if (wanted < 1) wanted = 1;
                count = read(context, state->input + state->count, wanted, &ended);
                state->ended = ended;
                if (count > 0) state->count += (unsigned)count;
                else stalled = true;
            }
        }
        {
            unsigned next = state->count > 1 ? 1 : 0;
            float fraction = (float)state->phase;
            for (unsigned ch = 0; ch < 2; ++ch) {
                float first = state->input[0][ch];
                output[produced][ch] = first + fraction * (state->input[next][ch] - first);
            }
        }
        ++produced;
        state->phase += step;
    }
    return produced;
}
