/* The Xbox D3D screen-space epilogue, as every title's programs end:
 *
 *   mov o[0], v0                      position (stand-in for the DP4s)
 *   mul o[0].xyz, R12, c[58]  + rcc R1.x, R12.w
 *   mad o[0].xyz, R12, R1.x, c[59]
 *
 * The rcc is paired with a MAC op that writes no temp, and must still land
 * in R1; sent to the instruction's temp field instead, R1.x stayed 0 and
 * every vertex came out at c[59]. */
#include "nv2a_vsh_interp.h"
#include <math.h>
#include <stdio.h>
#include <string.h>

enum { T = 1, V = 2, C = 3 };             /* source mux */
#define XYZW 0x1B                         /* swizzle x,y,z,w */
#define WWWW 0xFF
#define XXXX 0x00

static void src(uint32_t w[4], int which, int mux, int reg, int swz)
{
    if (which == 0) { w[1] |= swz; w[2] |= (mux << 26) | (reg << 28); }
    else if (which == 1) { w[2] |= (swz << 17) | (mux << 11) | (reg << 13); }
    else { w[2] |= (swz << 2) | (reg >> 2); w[3] |= (mux << 28) | ((reg & 3) << 30); }
}

int main(void)
{
    uint32_t i0[4] = {0}, i1[4] = {0}, i2[4] = {0};
    const float c58[4] = {320, -240, 1000, 0}, c59[4] = {320, 240, 0, 0};
    float in[NV2A_VSH_INPUTS][4] = {{0}};
    Nv2aVshOutput o;

    /* mov o[0].xyzw, v0 */
    i0[1] = (1u << 21);                         /* MAC mov, input v0 */
    src(i0, 0, V, 0, XYZW);
    i0[3] |= (0xFu << 12) | (1u << 11);         /* o[0] mask xyzw */

    /* mul o[0].xyz, R12, c[58] ; rcc R1.x, R12.w (temp field says R7) */
    i1[1] = (3u << 25) | (2u << 21) | (58u << 13);
    src(i1, 0, T, 12, XYZW); src(i1, 1, C, 0, XYZW); src(i1, 2, T, 12, WWWW);
    i1[3] |= (7u << 20) | (8u << 16) | (0xEu << 12) | (1u << 11);

    /* mad o[0].xyz, R12, R1.x, c[59] ; final */
    i2[1] = (4u << 21) | (59u << 13);
    src(i2, 0, T, 12, XYZW); src(i2, 1, T, 1, XXXX); src(i2, 2, C, 0, XYZW);
    i2[3] |= (0xEu << 12) | (1u << 11) | 1u;

    nv2a_vsh_set_instruction(0, i0);
    nv2a_vsh_set_instruction(1, i1);
    nv2a_vsh_set_instruction(2, i2);
    nv2a_vsh_set_constant(58, c58);
    nv2a_vsh_set_constant(59, c59);

    in[0][0] = 1.0f; in[0][1] = 0.5f; in[0][2] = 0.25f; in[0][3] = 2.0f;
    if (!nv2a_vsh_run((const float (*)[4])in, &o)) {
        puts("FAIL: program did not run");
        return 1;
    }
    /* x = 1*320/2 + 320, y = 0.5*-240/2 + 240, z = 0.25*1000/2, w kept */
    if (fabsf(o.pos[0] - 480) > 1e-3f || fabsf(o.pos[1] - 180) > 1e-3f
        || fabsf(o.pos[2] - 125) > 1e-3f || o.pos[3] != 2.0f) {
        printf("FAIL: pos %g %g %g %g, want 480 180 125 2\n",
               o.pos[0], o.pos[1], o.pos[2], o.pos[3]);
        return 1;
    }
    /* RE-SoT: unused inputs may be absent from the CPU fetch path. Decode
     * invalidation must follow start-slot changes and partial word uploads. */
    {
        uint32_t mov[4] = {0};
        mov[1] = (1u << 21) | (7u << 9);
        src(mov,0,V,0,XYZW);
        mov[3] = (15u << 12) | (1u << 11) | 1u;
        nv2a_vsh_set_instruction(10,mov);
        nv2a_vsh_set_start_slot(10);
        if (nv2a_vsh_input_mask() != (1u << 7)) return 2;
        for (int i=0;i<16;i++) for (int j=0;j<4;j++) in[i][j]=NAN;
        in[7][0]=3; in[7][1]=4; in[7][2]=5; in[7][3]=1;
        if (!nv2a_vsh_run((const float (*)[4])in,&o) || memcmp(o.pos,in[7],16)) return 3;
        mov[1] = (1u << 21) | (2u << 9) | XYZW;
        nv2a_vsh_set_load_slot(10);
        for (int j=0;j<4;j++) nv2a_vsh_program_word(mov[j]);
        if (nv2a_vsh_input_mask() != (1u << 2)) return 4;
        in[2][0]=9; in[2][1]=8; in[2][2]=7; in[2][3]=1;
        if (!nv2a_vsh_run((const float (*)[4])in,&o) || memcmp(o.pos,in[2],16)) return 5;
        nv2a_vsh_set_start_slot(NV2A_VSH_SLOTS);
        if (nv2a_vsh_input_mask() || nv2a_vsh_run((const float (*)[4])in,&o)) return 6;
    }
    puts("epilogue, sparse inputs and program-cache invalidation passed");
    return 0;
}
