/* Register combiner programs as D3D writes them, checked against the result
 * the hardware would give. */
#include "nv2a_combiner.h"
#include <math.h>
#include <stdio.h>
#include <string.h>

#define NEAR(a, b) (fabsf((a) - (b)) < 1e-4f)
#define CHECK(x) do { if (!(x)) { printf("FAIL line %d\n", __LINE__); return 1; } } while (0)

enum { ZERO = 0, C0 = 1, V0 = 4, V1 = 5, T0 = 8, T1 = 9, R0 = 12, SUM = 14 };
#define ALPHA 0x10
#define INVERT 0x20        /* unsigned invert: 1 - x */
#define EXPAND 0x40        /* 2x - 1 */
#define ICW(a, b, c, d) ((uint32_t)(a) << 24 | (uint32_t)(b) << 16 | (uint32_t)(c) << 8 | (uint32_t)(d))

int main(void)
{
    Nv2aCombiner rc;
    float v0[4] = {0.5f, 1.0f, 0.25f, 0.5f}, v1[4] = {0};
    float fog[4] = {0, 0, 0, 1}, t[4][4] = {{0}}, out[4];

    /* D3D MODULATE, one stage: r0 = t0 * v0 (AB into sum via +0), final
     * passes r0 through as D with alpha from r0. */
    memset(&rc, 0, sizeof rc);
    rc.control = 1;
    rc.stage_program = 1;                        /* stage 0: 2D texture */
    rc.color_icw[0] = ICW(T0, V0, ZERO, ZERO);
    rc.alpha_icw[0] = ICW(T0 | ALPHA, V0 | ALPHA, ZERO, ZERO);
    rc.color_ocw[0] = R0 << 8;                   /* sum -> r0 */
    rc.alpha_ocw[0] = R0 << 8;
    rc.final0 = ICW(ZERO, ZERO, ZERO, R0);
    rc.final1 = ICW(ZERO, ZERO, R0 | ALPHA, 0);
    t[0][0] = 0.5f; t[0][1] = 0.5f; t[0][2] = 1.0f; t[0][3] = 1.0f;
    nv2a_rc_eval(&rc, v0, v1, fog, t, out);
    CHECK(NEAR(out[0], 0.25f) && NEAR(out[1], 0.5f) && NEAR(out[2], 0.25f));
    CHECK(NEAR(out[3], 0.5f));

    /* A scene-plus-glow composite: final = lerp(t1, t0, c0.a) with the
     * factor from SPECULAR_FOG_FACTOR, which is c0 in the final stage. */
    memset(&rc, 0, sizeof rc);
    rc.control = 0;
    rc.final0 = ICW(C0 | ALPHA, T0, T1, ZERO);
    rc.final1 = ICW(ZERO, ZERO, ZERO | INVERT, 0);   /* alpha = 1 */
    rc.final_c0 = 0x40000000u;                        /* a = 64/255 */
    t[0][0] = 1.0f; t[1][0] = 0.0f;
    nv2a_rc_eval(&rc, v0, v1, fog, t, out);
    CHECK(NEAR(out[0], 64.0f / 255.0f) && NEAR(out[3], 1.0f));

    /* Expand-normal dot product (bump lighting): dot(2t0-1, 2v0-1) into r0. */
    memset(&rc, 0, sizeof rc);
    rc.control = 1;
    rc.color_icw[0] = ICW(T0 | EXPAND, V0 | EXPAND, ZERO, ZERO);
    rc.color_ocw[0] = (R0 << 4) | (2u << 12);          /* AB dot -> r0 */
    t[0][0] = 1.0f; t[0][1] = 0.5f; t[0][2] = 0.5f;    /* (1,0,0) */
    v0[0] = 1.0f; v0[1] = 0.5f; v0[2] = 0.5f;          /* (1,0,0) */
    nv2a_rc_eval(&rc, v0, v1, fog, t, out);            /* no final: r0 */
    CHECK(NEAR(out[0], 1.0f) && NEAR(out[1], 1.0f) && NEAR(out[2], 1.0f));

    puts("ok");
    return 0;
}
