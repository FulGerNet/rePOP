/* RE-SoT: an HD menu font, made on the host from the title's own sheet.
 *
 * Both executables draw their menu text from one 512x128 sheet (texture
 * 0x0B0041BB, letters in FONTDESC 0x0B0041BC; the demo stores it with 4-bit
 * palette indices, the retail as BGRA8). The text samples it with normalised
 * coordinates (swizzled) or with coordinates scaled by the guest size
 * (linear: tscale, 1/guest width and height), so a larger image with the same
 * layout can take its place on the host.
 *
 * The sheet is recognised by the FNV-1a hash of its decoded pixels and
 * enlarged RESOT_HD_FONT_SCALE times: Catmull-Rom on premultiplied colour,
 * then the coverage's edge tightened around its middle (smoothstep), so the
 * letters keep their place and shape with sharp edges. Every letter stays in
 * its box of the FONTDESC. An earlier version used the user's own drawing,
 * whose different margins cut some letters. No pixel of the game is kept in
 * the source. RESOT_HD_FONT=0 turns it off. */
#ifndef RESOT_HD_FONT_INCLUDED
#define RESOT_HD_FONT_INCLUDED
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

#define RESOT_HD_SHEET_W    512u
#define RESOT_HD_SHEET_H    128u
#define RESOT_HD_FONT_SCALE 4u
#define RESOT_HD_FONT_W     (RESOT_HD_SHEET_W * RESOT_HD_FONT_SCALE)
#define RESOT_HD_FONT_H     (RESOT_HD_SHEET_H * RESOT_HD_FONT_SCALE)
/* FNV-1a of the decoded 512x128 sheet (0xAARRGGBB words, guest order),
 * from the [HDFONT] lines of a run of each target. */
#if RESOT_RUNTIME_DEMO
#define RESOT_HD_FONT_HASH  0x3372CC85u   /* the only 512x128 texture of a run */
#elif RESOT_RUNTIME_RETAIL
#define RESOT_HD_FONT_HASH  0xBF3884F3u   /* the only 512x128 texture of a run */
#else
#define RESOT_HD_FONT_HASH  0x00000000u
#endif

static uint32_t resot_hd_font_hash(const uint32_t *px, uint32_t w, uint32_t h)
{
    const uint8_t *b = (const uint8_t *)px;
    uint32_t fnv = 2166136261u;
    size_t i;
    for (i = 0; i < (size_t)w * h * 4; i++) fnv = (fnv ^ b[i]) * 16777619u;
    return fnv;
}

/* 1 when px (0xAARRGGBB, w x h) is the title's font sheet. */
static int resot_hd_font_match(const uint32_t *px, uint32_t w, uint32_t h)
{
    static int off = -1;
    static unsigned reports;
    uint32_t hash;
    if (w != RESOT_HD_SHEET_W || h != RESOT_HD_SHEET_H)
        return 0;
    if (off < 0) { const char *e = getenv("RESOT_HD_FONT"); off = e && *e == '0'; }
    if (off)
        return 0;
    hash = resot_hd_font_hash(px, w, h);
    if (reports++ < 8)
        fprintf(stderr, "[HDFONT] 512x128 texture: hash %08X%s\n", hash,
                hash == RESOT_HD_FONT_HASH ? ", the menu font: HD" : "");
    return hash == RESOT_HD_FONT_HASH && hash != 0;
}

static float resot_hd_cubic(float a, float b, float c, float d, float t)
{
    return b + 0.5f*t*(c - a + t*(2.0f*a - 5.0f*b + 4.0f*c - d + t*(3.0f*(b - c) + d - a)));
}

/* The sheet enlarged RESOT_HD_FONT_SCALE times, 0xAARRGGBB; the caller frees it. */
static uint32_t *resot_hd_font_pixels(const uint32_t *px)
{
    const uint32_t sw = RESOT_HD_SHEET_W, sh = RESOT_HD_SHEET_H;
    const uint32_t ow = RESOT_HD_FONT_W, oh = RESOT_HD_FONT_H;
    float *pm = (float *)malloc((size_t)sw * sh * 4 * sizeof(float));
    uint32_t *out = (uint32_t *)malloc((size_t)ow * oh * 4);
    uint32_t x, y, c;
    if (!pm || !out) { free(pm); free(out); return NULL; }
    for (y = 0; y < sh; y++) for (x = 0; x < sw; x++) {       /* premultiplied, 0..1 */
        uint32_t p = px[(size_t)y*sw + x];
        float a = (float)(p >> 24) / 255.0f;
        float *q = pm + ((size_t)y*sw + x)*4;
        q[0] = (float)(p >> 16 & 255) / 255.0f * a;
        q[1] = (float)(p >> 8 & 255) / 255.0f * a;
        q[2] = (float)(p & 255) / 255.0f * a;
        q[3] = a;
    }
    for (y = 0; y < oh; y++) {
        float fy = ((float)y + 0.5f) / RESOT_HD_FONT_SCALE - 0.5f;
        int iy = (int)floorf(fy);
        float ty = fy - (float)iy;
        for (x = 0; x < ow; x++) {
            float fx = ((float)x + 0.5f) / RESOT_HD_FONT_SCALE - 0.5f;
            int ix = (int)floorf(fx);
            float tx = fx - (float)ix, v[4], a, k;
            for (c = 0; c < 4; c++) {
                float col[4];
                int j, i;
                for (j = 0; j < 4; j++) {
                    int yy = iy - 1 + j;
                    const float *row;
                    float s[4];
                    yy = yy < 0 ? 0 : yy >= (int)sh ? (int)sh - 1 : yy;  /* clamp: no wrap */
                    row = pm + (size_t)yy*sw*4;
                    for (i = 0; i < 4; i++) {
                        int xx = ix - 1 + i;
                        xx = xx < 0 ? 0 : xx >= (int)sw ? (int)sw - 1 : xx;
                        s[i] = row[(size_t)xx*4 + c];
                    }
                    col[j] = resot_hd_cubic(s[0], s[1], s[2], s[3], tx);
                }
                v[c] = resot_hd_cubic(col[0], col[1], col[2], col[3], ty);
            }
            /* Sharpen the coverage's edge: smoothstep over 0.3..0.7 of the
             * interpolated coverage, colour scaled with it. */
            a = v[3] < 0 ? 0 : v[3] > 1 ? 1 : v[3];
            k = (a - 0.3f) / 0.4f;
            k = k < 0 ? 0 : k > 1 ? 1 : k;
            k = k*k*(3.0f - 2.0f*k);
            {
                uint32_t A = (uint32_t)(k * 255.0f + 0.5f), rgb[3];
                for (c = 0; c < 3; c++) {
                    float col = a > 0.001f ? v[c] / a : 0;           /* unpremultiply */
                    col = col < 0 ? 0 : col > 1 ? 1 : col;
                    rgb[c] = (uint32_t)(col * 255.0f + 0.5f);
                }
                out[(size_t)y*ow + x] = A << 24 | rgb[0] << 16 | rgb[1] << 8 | rgb[2];
            }
        }
    }
    free(pm);
    return out;
}
#endif
