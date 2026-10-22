/* RE-SoT: specialize host SPIR-V defaults, never guest data or shader math.
 * SpecId values are the ABI emitted by tools/build-native-shaders.py. */
#ifndef RESOT_NATIVE_SPECIALIZE_H
#define RESOT_NATIVE_SPECIALIZE_H
#include <stdint.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
#define RESOT_PS_SPEC_WORDS 40
static inline void resot_ps_spec_key(uint32_t key[RESOT_PS_SPEC_WORDS], const void *constants)
{
    uint32_t pc[168];
    memcpy(pc,constants,sizeof pc);
    memcpy(key,pc,32*sizeof(uint32_t));
    memcpy(key+32,pc+96,4*sizeof(uint32_t));
    key[36]=pc[100]; key[37]=pc[101]; key[38]=pc[103]; key[39]=pc[132];
    /* RE-SoT: stale words past the active stage count cannot affect output;
     * canonicalize them so they do not compile duplicate pipelines. */
    {
        uint32_t stages=key[32]&255;
        if(stages<8) memset(key+stages*4,0,(8-stages)*4*sizeof(uint32_t));
    }
}
static inline uint32_t *resot_ps_specialize(const unsigned char *source, size_t bytes,
                                         const uint32_t key[RESOT_PS_SPEC_WORDS])
{
    size_t count=bytes/4, at;
    uint32_t *code, *ids;
    if(bytes%4 || count<5) return NULL;
    code=(uint32_t *)malloc(bytes);
    if(!code) return NULL;
    memcpy(code,source,bytes);
    if(code[0]!=0x07230203 || !code[3] || code[3]>1000000) { free(code); return NULL; }
    ids=(uint32_t *)calloc(code[3],sizeof(uint32_t));
    if(!ids) { free(code); return NULL; }
    for(at=5;at<count;) {
        uint32_t n=code[at]>>16, op=code[at]&65535;
        if(!n || at+n>count) goto invalid;
        /* OpDecorate(target, SpecId, literal). Zero denotes no SpecId. */
        if(op==71 && n==4 && code[at+2]==1) {
            if(code[at+1]>=code[3] || code[at+3]>=RESOT_PS_SPEC_WORDS) goto invalid;
            ids[code[at+1]]=code[at+3]+1;
        }
        at+=n;
    }
    for(at=5;at<count;at+=code[at]>>16) {
        /* OpSpecConstant(type, result, default). Preserve decorations and
         * derived specialization expressions for the driver's optimizer. */
        if((code[at]&65535)==50 && code[at]>>16==4) {
            uint32_t id=code[at+2];
            if(id>=code[3]) goto invalid;
            if(ids[id]) code[at+3]=key[ids[id]-1];
        }
    }
    free(ids); return code;
invalid:
    free(ids); free(code); return NULL;
}
#endif
