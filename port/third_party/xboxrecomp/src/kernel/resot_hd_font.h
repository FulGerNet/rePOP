/* RE-SoT: the user's HD menu font in place of the title's font sheet.
 *
 * Both executables draw their menu text from one 512x128 sheet (texture
 * 0x0B0041BB, letters in FONTDESC 0x0B0041BC; the demo stores it with 4-bit
 * palette indices, the retail as BGRA8). The text samples it with normalised
 * coordinates (swizzled) or with coordinates scaled by the guest size
 * (linear: tscale, 1/guest width and height), so a 2048x512 image with the same layout can
 * take its place on the host. tools/hd-font.py maps the user's drawing onto
 * that layout; port/game/resot_hd_font_<target>.h holds its coverage.
 *
 * A decoded 512x128 texture is taken for the sheet when its coverage, on a
 * 64x16 grid, matches the HD font's (intersection over union at least
 * RESOT_HD_FONT_MATCH), upright or upside down, whichever matches better:
 * no pixel of the game is kept here. RESOT_HD_FONT=0 turns it off. */
#ifndef RESOT_HD_FONT_INCLUDED
#define RESOT_HD_FONT_INCLUDED
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#if RESOT_RUNTIME_DEMO
#include "../../../../game/resot_hd_font_xbox_demo.h"
#elif RESOT_RUNTIME_RETAIL
#include "../../../../game/resot_hd_font_xbox_retail.h"
#endif

#ifdef RESOT_HD_FONT_W
#define RESOT_HD_SHEET_W   512u
#define RESOT_HD_SHEET_H   128u
#define RESOT_HD_GRID_W    64u
#define RESOT_HD_GRID_H    16u
#define RESOT_HD_FONT_MATCH 0.5f      /* host threshold, not an XBE value */

static uint8_t *s_hd_font_alpha;      /* RESOT_HD_FONT_W x H, 0..255, upright */
static uint8_t s_hd_font_grid[RESOT_HD_GRID_H][RESOT_HD_GRID_W];
static int s_hd_font_state;           /* 0 not loaded, 1 ready, -1 off */

static int resot_hd_font_load(void)
{
    const char *e;
    size_t at = 0, i;
    uint32_t gx, gy, x, y;
    if (s_hd_font_state)
        return s_hd_font_state > 0;
    e = getenv("RESOT_HD_FONT");
    s_hd_font_state = -1;
    if (e && *e == '0')
        return 0;
    s_hd_font_alpha = (uint8_t *)malloc((size_t)RESOT_HD_FONT_W * RESOT_HD_FONT_H);
    if (!s_hd_font_alpha)
        return 0;
    for (i = 0; i < sizeof s_resot_hd_font_rle; i++) {
        uint8_t level = (uint8_t)((s_resot_hd_font_rle[i] >> 4) * 17u);
        unsigned run = (s_resot_hd_font_rle[i] & 15u) + 1u;
        while (run-- && at < (size_t)RESOT_HD_FONT_W * RESOT_HD_FONT_H)
            s_hd_font_alpha[at++] = level;
    }
    if (at != (size_t)RESOT_HD_FONT_W * RESOT_HD_FONT_H) {
        free(s_hd_font_alpha); s_hd_font_alpha = NULL;
        return 0;
    }
    for (gy = 0; gy < RESOT_HD_GRID_H; gy++) for (gx = 0; gx < RESOT_HD_GRID_W; gx++) {
        uint32_t cw = RESOT_HD_FONT_W / RESOT_HD_GRID_W, ch = RESOT_HD_FONT_H / RESOT_HD_GRID_H;
        uint32_t sum = 0;
        for (y = 0; y < ch; y++) for (x = 0; x < cw; x++)
            sum += s_hd_font_alpha[(size_t)(gy*ch + y)*RESOT_HD_FONT_W + gx*cw + x];
        s_hd_font_grid[gy][gx] = sum / (cw*ch) > 24u;
    }
    s_hd_font_state = 1;
    return 1;
}

/* 0: not the sheet; 1: the sheet upright; 2: upside down. px is the decoded
 * texture, 0xAARRGGBB, w x h. */
static int resot_hd_font_match(const uint32_t *px, uint32_t w, uint32_t h)
{
    uint8_t grid[RESOT_HD_GRID_H][RESOT_HD_GRID_W];
    uint32_t gx, gy, x, y, inter[2] = {0, 0}, uni[2] = {0, 0};
    const uint32_t cw = RESOT_HD_SHEET_W / RESOT_HD_GRID_W, ch = RESOT_HD_SHEET_H / RESOT_HD_GRID_H;
    float best_iou;
    int best;
    static unsigned reports;
    if (w != RESOT_HD_SHEET_W || h != RESOT_HD_SHEET_H || !resot_hd_font_load())
        return 0;
    for (gy = 0; gy < RESOT_HD_GRID_H; gy++) for (gx = 0; gx < RESOT_HD_GRID_W; gx++) {
        uint32_t sum = 0;
        for (y = 0; y < ch; y++) for (x = 0; x < cw; x++)
            sum += px[(size_t)(gy*ch + y)*w + gx*cw + x] >> 24;
        grid[gy][gx] = sum / (cw*ch) > 24u;
    }
    for (gy = 0; gy < RESOT_HD_GRID_H; gy++) for (gx = 0; gx < RESOT_HD_GRID_W; gx++) {
        int up = s_hd_font_grid[gy][gx], down = s_hd_font_grid[RESOT_HD_GRID_H - 1 - gy][gx];
        inter[0] += grid[gy][gx] && up;   uni[0] += grid[gy][gx] || up;
        inter[1] += grid[gy][gx] && down; uni[1] += grid[gy][gx] || down;
    }
    best = (uni[1] && inter[1] * uni[0] > inter[0] * uni[1]) ? 1 : 0;
    best_iou = uni[best] ? (float)inter[best] / (float)uni[best] : 0.0f;
    if (reports++ < 8)
        fprintf(stderr, "[HDFONT] 512x128 texture: coverage match %.2f (%s)%s\n", best_iou,
                best ? "upside down" : "upright", best_iou >= RESOT_HD_FONT_MATCH ? ", HD font used" : "");
    return best_iou >= RESOT_HD_FONT_MATCH ? best + 1 : 0;
}

/* The HD font as 0xAARRGGBB white, in the orientation match returned; the
 * caller frees it. */
static uint32_t *resot_hd_font_pixels(int orientation)
{
    uint32_t *out, x, y;
    if (!s_hd_font_alpha)
        return NULL;
    out = (uint32_t *)malloc((size_t)RESOT_HD_FONT_W * RESOT_HD_FONT_H * 4);
    if (!out)
        return NULL;
    for (y = 0; y < RESOT_HD_FONT_H; y++) {
        const uint8_t *row = s_hd_font_alpha +
            (size_t)(orientation == 2 ? RESOT_HD_FONT_H - 1 - y : y) * RESOT_HD_FONT_W;
        for (x = 0; x < RESOT_HD_FONT_W; x++)
            out[(size_t)y*RESOT_HD_FONT_W + x] = (uint32_t)row[x] << 24 | 0x00FFFFFFu;
    }
    return out;
}
#else
#define RESOT_HD_FONT_W 0u
#define RESOT_HD_FONT_H 0u
static int resot_hd_font_match(const uint32_t *px, uint32_t w, uint32_t h)
{
    (void)px; (void)w; (void)h;
    return 0;
}
static uint32_t *resot_hd_font_pixels(int orientation) { (void)orientation; return NULL; }
#endif
#endif
