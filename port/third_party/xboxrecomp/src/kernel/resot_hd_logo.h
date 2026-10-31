/* RE-SoT: retail's main menu logo from the user's HD image, like the HD font.
 *
 * The title draws it from a 256x64 ARGB texture (fmt 06, flat quad at
 * x=92.531..476.531, y=48.531..168.531 at 16:9, UV 0..1; trace
 * 20261019-125441-122-6612-xbox-retail). The image is four times that size,
 * so the draw's proportions stay. Texture addresses change across loads and
 * the original pixels' hash was never logged: the texture is recognised by its
 * coverage against the image, upright or upside down, and [HDLOGO] reports the
 * difference and hash of each candidate. RESOT_HD_LOGO=0 turns it off.
 * Without the ignored header (tools/hd-logo.py) the game's logo stays.
 * The demo's logo is BF texture 0x0B0044F9, white, tinted by its draw; its
 * exact hash is known (RESOT_HD_LOGO_HASH), and the image must be white too. */
#ifndef RESOT_HD_LOGO_INCLUDED
#define RESOT_HD_LOGO_INCLUDED
#if defined(__has_include)
#if RESOT_RUNTIME_RETAIL
#if __has_include("../../../../game/resot_hd_logo_xbox_retail.h")
#include "../../../../game/resot_hd_logo_xbox_retail.h"
#endif
#elif RESOT_RUNTIME_DEMO
#if __has_include("../../../../game/resot_hd_logo_xbox_demo.h")
#include "../../../../game/resot_hd_logo_xbox_demo.h"
#endif
#define RESOT_HD_LOGO_HASH 0x72C687A6u
#endif
#endif

#ifdef RESOT_HD_LOGO_DATA_W
#define RESOT_HD_LOGO_GUEST_W 256u
#define RESOT_HD_LOGO_GUEST_H 64u
#define RESOT_HD_LOGO_SCALE   4u
/* Difference over total coverage above which a 256x64 texture is another one. */
#define RESOT_HD_LOGO_MAX_DIFFERENCE 0.6f

/* The image decoded once, upright; NULL if the header is broken. */
static const uint32_t *resot_hd_logo_image(void)
{
    static uint32_t *img;
    static int tried;
    size_t at = 0, i, n = (size_t)RESOT_HD_LOGO_DATA_W * RESOT_HD_LOGO_DATA_H;
    if (tried) return img;
    tried = 1;
    if (RESOT_HD_LOGO_DATA_W != RESOT_HD_LOGO_GUEST_W * RESOT_HD_LOGO_SCALE
        || RESOT_HD_LOGO_DATA_H != RESOT_HD_LOGO_GUEST_H * RESOT_HD_LOGO_SCALE) return NULL;
    img = (uint32_t *)malloc(n * 4);
    if (!img) return NULL;
    for (i = 0; i + 1 < sizeof s_resot_hd_logo_rle / sizeof s_resot_hd_logo_rle[0]; i += 2) {
        size_t run = s_resot_hd_logo_rle[i], k;
        if (at + run > n) break;
        for (k = 0; k < run; k++) img[at + k] = s_resot_hd_logo_rle[i + 1];
        at += run;
    }
    if (at != n) { free(img); img = NULL; }
    return img;
}

/* A copy of the image in the guest's orientation for the guest logo px
 * (0xAARRGGBB, 256x64), or NULL when px is another texture. Caller frees. */
static uint32_t *resot_hd_logo_pixels(const uint32_t *px)
{
    static int off = -1;
    static unsigned reports;
    const uint32_t k = RESOT_HD_LOGO_SCALE, gw = RESOT_HD_LOGO_GUEST_W, gh = RESOT_HD_LOGO_GUEST_H;
    const uint32_t ow = RESOT_HD_LOGO_DATA_W, oh = RESOT_HD_LOGO_DATA_H;
    const uint32_t *img;
    uint64_t err[2] = {0, 0}, total = 0;
    uint32_t x, y, flip, *out;
    float difference;
    if (off < 0) { const char *e = getenv("RESOT_HD_LOGO"); off = e && *e == '0'; }
#ifdef RESOT_HD_LOGO_HASH
    if (resot_hd_font_hash(px, gw, gh) != RESOT_HD_LOGO_HASH) return NULL;
#endif
    if (off || !(img = resot_hd_logo_image())) return NULL;
    for (y = 0; y < gh; y++) for (x = 0; x < gw; x++) {
        uint32_t sum = 0, i, j;
        int a, b;
        for (j = 0; j < k; j++) for (i = 0; i < k; i++)
            sum += img[(size_t)(y*k + j)*ow + x*k + i] >> 24;
        a = (int)(sum / (k*k));
        b = (int)(px[(size_t)y*gw + x] >> 24);
        err[0] += (uint64_t)abs(a - b);
        total += (uint64_t)a + (uint64_t)b;
        b = (int)(px[(size_t)(gh - 1 - y)*gw + x] >> 24);
        err[1] += (uint64_t)abs(a - b);
    }
    flip = err[1] < err[0];
    difference = total ? (float)err[flip] / (float)total : 1.0f;
    if (reports++ < 8)
        fprintf(stderr, "[HDLOGO] 256x64 texture: hash %08X, %s, difference %.3f%s\n",
                resot_hd_font_hash(px, gw, gh), flip ? "upside down" : "upright", (double)difference,
                difference <= RESOT_HD_LOGO_MAX_DIFFERENCE ? ", the menu logo: HD" : "");
    if (difference > RESOT_HD_LOGO_MAX_DIFFERENCE) return NULL;
    out = (uint32_t *)malloc((size_t)ow * oh * 4);
    if (!out) return NULL;
    for (y = 0; y < oh; y++)
        memcpy(out + (size_t)y*ow, img + (size_t)(flip ? oh - 1 - y : y)*ow, (size_t)ow * 4);
    return out;
}
#endif
#endif
