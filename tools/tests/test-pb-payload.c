/* RE-SoT: production payload execution and decoder bounds, no game data. */
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include "nv2a_vsh_interp.h"
#define NV_MAX_INDICES 64
#define NV_MAX_INLINE 64
#define NV097_ARRAY_ELEMENT16 0x1800
#define NV097_ARRAY_ELEMENT32 0x1808
#define NV097_INLINE_ARRAY 0x1818
static int s_ftrace;
static struct { uint32_t prim,idx_count,inline_count; uint16_t idx[64]; uint32_t inline_buf[64]; } s_gpu;
#include "nv2a_pb_payload.inc"

static uint8_t ram[4096];
ptrdiff_t xbox_GetMemoryOffset(void) { return (ptrdiff_t)ram-0x80000000u; }
static unsigned scalar_calls;
void nv2a_pb_exec_report(void) {}
void nv2a_pb_exec_method(uint32_t subch,uint32_t method,uint32_t param) {
    scalar_calls++;
    if (subch) return;
    if (method>=0xB00 && method<0xB80) nv2a_vsh_program_word(param);
    else if (method>=0xB80 && method<0xC00) nv2a_vsh_constant_word(param);
}
#include "nv2a_pb_scan.c"
#define CHECK(c) do { if (!(c)) { printf("line %d: %s\n",__LINE__,#c); return 1; } } while(0)
int main(void) {
    uint32_t data[40], count;
    const uint32_t base=0x80000000u;
    for (unsigned i=0;i<40;i++) data[i]=0x10000u*i+i+1;
    s_gpu.prim=1;
    CHECK(nv2a_pb_exec_payload(0,0x1800,data,16,1)==16);
    for (unsigned i=0;i<16;i++) CHECK(s_gpu.idx[2*i]==(uint16_t)data[i] && s_gpu.idx[2*i+1]==data[i]>>16);
    CHECK(nv2a_pb_exec_payload(0,0x1800,data,40,1)==16 && s_gpu.idx_count==64);
    CHECK(!nv2a_pb_exec_payload(0,0x1800,data,1,1));
    s_gpu.idx_count=0;
    CHECK(nv2a_pb_exec_payload(0,0x1808,data,5,0)==1 && s_gpu.idx_count==1);
    CHECK(nv2a_pb_exec_payload(0,0x1818,data,40,1)==40 && !memcmp(s_gpu.inline_buf,data,160));
    CHECK(!nv2a_pb_exec_payload(1,0xB80,data,4,1));
    s_ftrace=2; CHECK(!nv2a_pb_exec_payload(0,0xB80,data,4,1)); s_ftrace=0;
    nv2a_vsh_set_constant_load(100);
    CHECK(nv2a_pb_exec_payload(0,0xBFC,data,4,0)==1);
    CHECK(!memcmp(nv2a_vsh_constant(100),data,4));
    CHECK(nv2a_pb_exec_payload(0,0xB80,data+1,3,1)==3);
    CHECK(!memcmp(nv2a_vsh_constant(100),data,16));
    CHECK(nv2a_pb_exec_payload(0,0xB7C,data,4,0)==1);
    s_exec_enabled=1; s_survey=0;
    CHECK(!pb_payload(0,0xB80,ram- (ptrdiff_t)base,base+8,base+8,4,1));
    CHECK(!pb_payload(0,0xB80,ram- (ptrdiff_t)base,base+8,base+4,4,1));
    // PUT truncates a payload before its declared count. Compare both decoders.
    for (unsigned survey=0;survey<2;survey++) {
        uint32_t *words=(uint32_t *)ram;
        words[0]=(8u<<18)|0xB80u; memcpy(words+1,data,32);
        nv2a_vsh_set_constant_load(110);
        s_survey=survey; scalar_calls=0;
        nv2a_pb_scan_to(base,base+12);
        CHECK(!memcmp(nv2a_vsh_constant(110),data,8));
        CHECK(scalar_calls==(survey?2u:0u));
        nv2a_vsh_set_constant_load(111);
        scalar_calls=0;
        nv2a_pb_scan(base,base+12);
        CHECK(!memcmp(nv2a_vsh_constant(111),data,8));
        CHECK(scalar_calls==(survey?2u:0u));
        // A header ending exactly at END must not read any payload.
        scalar_calls=0; count=(uint32_t)s_pb_payload_words;
        nv2a_pb_scan(base,base+4);
        CHECK(!scalar_calls && s_pb_payload_words==count);
    }
    puts("Payload indices, uploads, tracing, survey and partial decoder boundaries pass");
    return 0;
}
