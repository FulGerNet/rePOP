/* RE-SoT: waveform and source-lifecycle regressions for the actual VP resampler.
 * Run both runtime copies with: python tools/test-audio-resampler.py */
#include "apu_resample.h"
#include <stdio.h>
#include <stdlib.h>

#define CHECK(test) do { if (!(test)) { fprintf(stderr, "line %d: %s\n", __LINE__, #test); exit(1); } } while (0)
#define PI 3.14159265358979323846

typedef struct Source {
    float (*frames)[2];
    unsigned length, cursor, max_chunk;
    int stall_at, stalled, loop, reads;
} Source;

static int source_read(void *context, float output[][2], int requested, bool *ended)
{
    Source *source = context;
    int count = 0;
    ++source->reads;
    if (source->stall_at >= 0 && source->cursor == (unsigned)source->stall_at && !source->stalled) {
        source->stalled = 1;
        return -1; /* a temporarily empty stream, not EOF */
    }
    if (source->max_chunk && (unsigned)requested > source->max_chunk)
        requested = (int)source->max_chunk;
    while (count < requested) {
        if (source->cursor == source->length) {
            if (source->loop) source->cursor = 0;
            else { *ended = true; break; }
        }
        output[count][0] = source->frames[source->cursor][0];
        output[count][1] = source->frames[source->cursor][1];
        ++count;
        ++source->cursor;
    }
    if (!source->loop && source->cursor == source->length) *ended = true;
    return count;
}

static unsigned render_clip(ResotAudioResampler *state, Source *source,
                            double ratio, float output[][2], unsigned capacity,
                            int block)
{
    unsigned length = 0;
    for (unsigned tries = 0; !resot_audio_resampler_finished(state); ++tries) {
        CHECK(tries < capacity * 2 + 100);
        CHECK(length + block <= capacity);
        int count = resot_audio_resample(state, output + length, block, ratio,
                                        source_read, source);
        CHECK(count <= block);
        if (count > 0) length += count;
    }
    return length;
}

static unsigned crossings(const float samples[][2], unsigned count, unsigned channel)
{
    unsigned result = 0;
    for (unsigned i = 1; i < count; ++i)
        if (samples[i-1][channel] < 0 && samples[i][channel] >= 0) ++result;
    return result;
}

static void waveform(unsigned source_hz, int stereo, int block)
{
    Source source = {0};
    ResotAudioResampler state = {0};
    source.length = source_hz; source.stall_at = -1;
    source.frames = calloc(source.length, sizeof(*source.frames));
    float (*output)[2] = calloc(50000, sizeof(*output));
    CHECK(source.frames && output);
    for (unsigned i = 0; i < source.length; ++i) {
        source.frames[i][0] = (float)sin(2*PI*440*i/source_hz);
        source.frames[i][1] = stereo ? (float)sin(2*PI*660*i/source_hz) : source.frames[i][0];
    }
    unsigned length = render_clip(&state, &source, 48000.0/source_hz, output, 50000, block);
    CHECK(abs((int)length - 48000) <= 1);
    CHECK(abs((int)crossings(output,length,0)-440) <= 1);
    CHECK(abs((int)crossings(output,length,1)-(stereo?660:440)) <= 1);
    CHECK(source.cursor == source.length);
    printf("%u Hz %s -> 48000 Hz: %u output frames, %.3f s, tones %u/%u Hz\n",
           source_hz,stereo?"stereo":"mono",length,length/48000.0,
           crossings(output,length,0),crossings(output,length,1));
    free(source.frames); free(output);
}

static void lifecycle(void)
{
    float input[65][2], output[512][2];
    for (unsigned i=0;i<65;i++) {input[i][0]=(float)i;input[i][1]=-(float)i;}
    /* The inclusive last source sample must survive all block/segment sizes,
     * including a clip one sample longer than a 32-frame hardware block. */
    for (unsigned length=1;length<=65;length++) for (int block=1;block<=32;block+=31) {
        Source source={input,length,0,7,-1,0,0,0};
        ResotAudioResampler state={0};
        unsigned count=render_clip(&state,&source,2,output,512,block);
        CHECK(count==2*length);
        CHECK(output[count-1][0]==input[length-1][0]);
        CHECK(output[count-1][1]==input[length-1][1]);
    }
    /* A single-frame stream underrun preserves phase and later resumes. */
    Source stream={input,65,0,1,12,0,0,0};
    ResotAudioResampler state={0};
    unsigned count=render_clip(&state,&stream,1,output,512,7);
    CHECK(stream.stalled && count==65);
    for(unsigned i=0;i<count;i++) CHECK(output[i][0]==(float)i);
    /* Live pitch changes retain the exact source position between blocks. */
    Source changing={input,65,0,3,-1,0,0,0};
    resot_audio_resampler_reset(&state);
    CHECK(resot_audio_resample(&state,output,8,2,source_read,&changing)==8);
    for(unsigned i=0;i<8;i++) CHECK(output[i][0]==i*.5f);
    CHECK(resot_audio_resample(&state,output,8,.5,source_read,&changing)==8);
    for(unsigned i=0;i<8;i++) CHECK(output[i][0]==4.0f+i*2.0f);
    /* Loop boundaries are source transitions, not completed voices. */
    Source loop={input,3,0,2,-1,0,1,0};
    resot_audio_resampler_reset(&state);
    CHECK(resot_audio_resample(&state,output,64,1,source_read,&loop)==64);
    CHECK(!resot_audio_resampler_finished(&state));
    for(unsigned i=0;i<64;i++) CHECK(output[i][0]==(float)(i%3));
    /* Voice reuse / explicit seek discards prefetched data and phase. */
    loop.cursor=2;
    resot_audio_resampler_reset(&state);
    CHECK(resot_audio_resample(&state,output,1,2,source_read,&loop)==1);
    CHECK(output[0][0]==2);
    Source other={input,65,40,4,-1,0,0,0};
    resot_audio_resampler_reset(&state);
    CHECK(resot_audio_resample(&state,output,1,1,source_read,&other)==1);
    CHECK(output[0][0]==40);
    /* Each voice has independent sample history. */
    ResotAudioResampler second={0};
    Source separate={input,65,5,4,-1,0,0,0};
    CHECK(resot_audio_resample(&second,output,1,1,source_read,&separate)==1);
    CHECK(output[0][0]==5);
    CHECK(resot_audio_resample(&state,output,1,1,source_read,&other)==1);
    CHECK(output[0][0]==41);
    puts("inclusive EOF, stream underrun/resume, pitch changes, loops, seek/reuse and independent voices passed");
}

int main(void)
{
    for(int stereo=0;stereo<2;stereo++) {
        waveform(12000,stereo,32);waveform(24000,stereo,32);
        waveform(44100,stereo,7);waveform(48000,stereo,32);waveform(96000,stereo,32);
    }
    lifecycle();
    return 0;
}
