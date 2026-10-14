/**
 * Show the guest framebuffer in a window.
 *
 * The title renders into its own framebuffer in guest RAM and tells the kernel
 * where it is through AvSetDisplayMode; on hardware the CRTC scans that memory
 * out. Nothing here scans anything out, so however much of the GPU is
 * implemented, none of it is observable. This is the other half: a window that
 * reads that memory and puts it on screen.
 *
 * Deliberately plain GDI rather than the D3D8 layer. The point is to display
 * whatever the guest actually wrote, so the fewer stages between guest memory
 * and the screen the better -- and it must keep working while the D3D8 layer
 * is busy with something else, such as the FMV player's own window.
 *
 * Off unless RECOMP_FB_WINDOW is set.
 */
#include <stdint.h>

#if defined(_WIN32)
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern ptrdiff_t xbox_GetMemoryOffset(void);

static volatile LONG s_fb_running;
static uint32_t      s_fb_va, s_fb_pitch, s_fb_width = 640, s_fb_height = 480;
static uint32_t     *s_rgb;           /* converted 32-bit copy for GDI */

/* A finished frame, taken at the flip and shown until the next one.
 *
 * The window used to convert straight out of guest memory every 16 ms. Even
 * pointed at the buffer the title had just finished, that races the executor
 * drawing the next frame into the other one and, whenever the two swap, puts
 * a half-drawn image on the screen -- which is the flicker. Copying the
 * finished frame once per flip means the window never reads memory the
 * rasteriser is writing, so what it shows cannot be half of anything.
 *
 * Two buffers and an index, swapped after the copy completes, so the window
 * thread is never reading the one being filled. */
static uint32_t     *s_present[2];
static volatile LONG s_present_idx = -1;   /* -1 until the first flip */

void xbox_FramebufferWindowSet(uint32_t fb_va, uint32_t pitch)
{
    /* RECOMP_FB_VA pins the window to one guest address instead of following
     * whichever surface is being drawn into. A black window cannot distinguish
     * "the read path is broken" from "the title rendered black", and pointing
     * it at memory known to have content settles that. */
    const char *pin = getenv("RECOMP_FB_VA");

    s_fb_va = pin ? (uint32_t)strtoul(pin, NULL, 0) : fb_va;
    if (pitch)
        s_fb_pitch = pitch;
}

/* Called by the pushbuffer executor when the title flips. */
void xbox_FramebufferWindowPresent(uint32_t fb_va, uint32_t pitch)
{
    const uint8_t *src;
    LONG next;
    uint32_t bpp, x, y;

    if (!s_fb_running || !fb_va || !pitch)
        return;
    if (getenv("RECOMP_FB_VA"))
        return;                       /* pinned: leave the old path alone */
    next = (s_present_idx == 0) ? 1 : 0;
    if (!s_present[next]) {
        s_present[next] = (uint32_t *)calloc((size_t)s_fb_width * s_fb_height,
                                             4);
        if (!s_present[next])
            return;
    }
    bpp = pitch / s_fb_width;
    src = (const uint8_t *)((uintptr_t)fb_va + xbox_GetMemoryOffset());
    for (y = 0; y < s_fb_height; y++) {
        const uint8_t *row = src + (size_t)y * pitch;
        uint32_t *dst = s_present[next] + (size_t)y * s_fb_width;

        if (bpp == 4) {
            memcpy(dst, row, (size_t)s_fb_width * 4);
        } else if (bpp == 2) {
            const uint16_t *p = (const uint16_t *)row;
            for (x = 0; x < s_fb_width; x++) {
                uint16_t v = p[x];
                uint32_t r = (uint32_t)((v >> 11) & 0x1F) * 255u / 31u;
                uint32_t g = (uint32_t)((v >>  5) & 0x3F) * 255u / 63u;
                uint32_t b = (uint32_t)( v        & 0x1F) * 255u / 31u;
                dst[x] = (r << 16) | (g << 8) | b;
            }
        } else {
            memset(dst, 0, (size_t)s_fb_width * 4);
        }
    }
    /* Published only once it is whole. */
    InterlockedExchange(&s_present_idx, next);
}

/* Which keys are down, for the pad stand-in in src/input.
 *
 * GetAsyncKeyState looked like the cheaper way to ask and does not work
 * here: it reads a state Wine keeps for the X server, and a guest process
 * drawing through GDI never sees it change. The window that has the focus
 * is the thing that receives the keys, so that is what has to remember
 * them.
 *
 * Reading this needs no lock. Each entry is written only by the window
 * thread and read only by the USB thread, one byte at a time, and a press
 * seen a frame late is indistinguishable from one made a frame later. */
static volatile unsigned char s_key_down[256];

/* Title bar, the way ps3recomp's window shows it. Written by the flip,
 * read once a second by the window thread; a torn read shows one stale
 * number for a second, which nobody can tell apart from a real one. */
static wchar_t       s_title[48] = L"Xbox Recomp";
static volatile LONG s_flips;
static volatile LONG s_frame_draws;

void xbox_FramebufferWindowSetTitle(const uint16_t *name, int max_chars)
{
    int i;
    for (i = 0; i < max_chars && i < 47 && name[i]; i++)
        s_title[i] = (wchar_t)name[i];
    if (i)
        s_title[i] = 0;
}

void xbox_FramebufferWindowFrameStats(uint32_t draws)
{
    InterlockedIncrement(&s_flips);
    InterlockedExchange(&s_frame_draws, (LONG)draws);
}

int xbox_FramebufferKeyDown(int vk)
{
    if ((unsigned)vk > 255)
        return 0;
    return s_key_down[vk] != 0;
}

static LRESULT CALLBACK fb_wndproc(HWND h, UINT m, WPARAM w, LPARAM l)
{
    switch (m) {
    case WM_CLOSE:
    case WM_DESTROY:
        InterlockedExchange(&s_fb_running, 0);
        return 0;

    case WM_KEYDOWN:
    case WM_SYSKEYDOWN:
        if ((unsigned)w < 256)
            s_key_down[w] = 1;
        /* RECOMP_KEY_TRACE: each key as it arrives, edge-triggered.
         *
         * The obvious diagnostic -- sampling which keys are held, once a
         * second, from the input path -- cannot tell a key that was never
         * pressed from one that was tapped: a 100 ms press is caught about
         * one time in ten. That ambiguity is expensive when the only way
         * to test is to ask someone to press a key and describe what
         * happened. This answers "did it arrive" on its own. */
        if (getenv("RECOMP_KEY_TRACE")) {
            static unsigned n;
            if (n++ < 40) {
                fprintf(stderr, "  [KEY] down vk=0x%02X\n", (unsigned)w);
                fflush(stderr);
            }
        }
        /* System keys still go to Windows, or Alt+F4 stops closing us. */
        return m == WM_SYSKEYDOWN ? DefWindowProcA(h, m, w, l) : 0;

    case WM_KEYUP:
    case WM_SYSKEYUP:
        if ((unsigned)w < 256)
            s_key_down[w] = 0;
        return m == WM_SYSKEYUP ? DefWindowProcA(h, m, w, l) : 0;

    /* Alt-tabbing away with a key held would leave it held for ever. */
    case WM_KILLFOCUS:
        memset((void *)s_key_down, 0, sizeof s_key_down);
        return 0;
    }
    return DefWindowProcA(h, m, w, l);
}

/* The display formats an Xbox front buffer is actually set to. The pitch says
 * how wide a row is in bytes, so pitch/width gives the pixel size; the exact
 * component layout only matters for 16-bit, where 5:6:5 and 1:5:5:5 differ. */
static void fb_convert(const uint8_t *src, uint32_t bpp)
{
    uint32_t x, y;

    for (y = 0; y < s_fb_height; y++) {
        const uint8_t *row = src + (size_t)y * s_fb_pitch;
        uint32_t *dst = s_rgb + (size_t)y * s_fb_width;

        if (bpp == 4) {
            memcpy(dst, row, (size_t)s_fb_width * 4);
        } else if (bpp == 2) {
            const uint16_t *p = (const uint16_t *)row;
            for (x = 0; x < s_fb_width; x++) {
                uint16_t v = p[x];
                uint32_t r = (uint32_t)((v >> 11) & 0x1F) * 255u / 31u;
                uint32_t g = (uint32_t)((v >>  5) & 0x3F) * 255u / 63u;
                uint32_t b = (uint32_t)( v        & 0x1F) * 255u / 31u;
                dst[x] = (r << 16) | (g << 8) | b;
            }
        } else {
            memset(dst, 0, (size_t)s_fb_width * 4);
        }
    }
}

/* ── RE-SoT: the PVIDEO overlay ─────────────────────────────────────────
 *
 * Bink movies on the Xbox are not drawn through the 3D pipeline: D3D's
 * UpdateOverlay points the NV2A video overlay at a YUY2 surface and the CRTC
 * mixes it over the framebuffer at scanout. Nothing in the pushbuffer says so,
 * so a title playing a movie showed a black window while decoding every frame.
 *
 * The registers are plain memory in this runtime, which is all that is needed
 * to read them the way the CRTC would: while BUFFER names a buffer the
 * overlay is on and that buffer is converted once per window frame; a write
 * to STOP turns it off (see overlay_tick). */
#define NV_REG_BASE          0xFD000000u
#define NV_PVIDEO_BUFFER     0x008700u
#define NV_PVIDEO_STOP       0x008704u
#define NV_PVIDEO_BASE(i)    (0x008900u + (i) * 4u)
#define NV_PVIDEO_OFFSET(i)  (0x008920u + (i) * 4u)
#define NV_PVIDEO_SIZE_IN(i) (0x008928u + (i) * 4u)
#define NV_PVIDEO_POINT_OUT(i) (0x008948u + (i) * 4u)
#define NV_PVIDEO_SIZE_OUT(i)  (0x008950u + (i) * 4u)
#define NV_PVIDEO_FORMAT(i)  (0x008958u + (i) * 4u)

static uint32_t *s_ovl_rgb;            /* converted overlay source */
static uint32_t  s_ovl_w, s_ovl_h;     /* its size */
static uint32_t  s_ovl_out_x, s_ovl_out_y, s_ovl_out_w, s_ovl_out_h;
static int       s_ovl_active;
static volatile LONG s_ovl_serial;     /* bumped whenever s_ovl_rgb changes */

/* RE-SoT: the Direct3D 11 rasteriser (src/kernel/nv2a_hw_d3d11.inc) owns the
 * window's pixels when it is up. This thread then only pumps messages, keeps
 * the overlay latched and asks the rasteriser to repaint. */
static HWND          s_hwnd;
static volatile LONG s_hw_mode;
extern void nv2a_hw_idle_present(void);
extern int  nv2a_hw_readback(uint32_t *dst, uint32_t w, uint32_t h);

void *xbox_FramebufferWindowHandle(void) { return (void *)s_hwnd; }
void  xbox_FramebufferWindowHwMode(int on) { InterlockedExchange(&s_hw_mode, on); }

static uint32_t nv_reg(uint32_t reg)
{
    return *(volatile uint32_t *)((uintptr_t)(NV_REG_BASE + reg)
                                  + xbox_GetMemoryOffset());
}

static uint8_t clamp8(int v)
{
    return (uint8_t)(v < 0 ? 0 : v > 255 ? 255 : v);
}

static uint32_t yuv_to_rgb(int y, int u, int v)
{
    int c = 298 * (y - 16), d = u - 128, e = v - 128;
    return ((uint32_t)clamp8((c + 409 * e + 128) >> 8) << 16)
         | ((uint32_t)clamp8((c - 100 * d - 208 * e + 128) >> 8) << 8)
         |  (uint32_t)clamp8((c + 516 * d + 128) >> 8);
}

static void overlay_latch(int buf)
{
    uint32_t size_in = nv_reg(NV_PVIDEO_SIZE_IN(buf));
    uint32_t format  = nv_reg(NV_PVIDEO_FORMAT(buf));
    uint32_t w = size_in & 0x7FFu, h = (size_in >> 16) & 0x7FFu;
    uint32_t pitch = format & 0xFFFFu;
    uint32_t addr = (nv_reg(NV_PVIDEO_BASE(buf)) + nv_reg(NV_PVIDEO_OFFSET(buf)))
                    & 0x0FFFFFFFu;
    int yuy2 = (format >> 16) & 1;     /* 1: Y0 U Y1 V, 0: U Y0 V Y1 */
    const uint8_t *src;
    uint32_t x, y;

    if (!w || !h || pitch < w * 2 || addr >= 0x04000000u)
        return;
    if (w != s_ovl_w || h != s_ovl_h || !s_ovl_rgb) {
        free(s_ovl_rgb);
        s_ovl_rgb = (uint32_t *)calloc((size_t)w * h, 4);
        if (!s_ovl_rgb) { s_ovl_w = s_ovl_h = 0; return; }
        s_ovl_w = w; s_ovl_h = h;
    }
    /* The overlay base is physical; the contiguous window is that view. */
    src = (const uint8_t *)((uintptr_t)(0x80000000u | addr)
                            + xbox_GetMemoryOffset());
    /* RE-SoT: RECOMP_OVL_DUMP=<prefix> writes the raw overlay surface of the
     * first 400 distinct latches (16-byte header: address, width, height,
     * pitch), to tell a decoder fault from a conversion or timing fault. */
    {
        static const char *dump; static int asked, count; static uint32_t last;
        if (!asked) { asked = 1; dump = getenv("RECOMP_OVL_DUMP"); }
        if (dump && count < 400) {
            uint32_t sum = addr, i, hdr[4];
            for (i = 0; i < h * pitch; i += 4)
                sum = sum * 31u + *(const uint32_t *)(src + i);
            if (sum != last) {
                char path[600];
                FILE *f;
                last = sum;
                snprintf(path, sizeof path, "%s%04d.yuy2", dump, count++);
                f = fopen(path, "wb");
                if (f) {
                    hdr[0] = addr; hdr[1] = w; hdr[2] = h; hdr[3] = pitch;
                    fwrite(hdr, 4, 4, f);
                    fwrite(src, 1, (size_t)h * pitch, f);
                    fclose(f);
                }
            }
        }
    }
    for (y = 0; y < h; y++) {
        const uint8_t *row = src + (size_t)y * pitch;
        uint32_t *dst = s_ovl_rgb + (size_t)y * w;
        for (x = 0; x + 1 < w; x += 2) {
            const uint8_t *p = row + x * 2;
            int y0 = yuy2 ? p[0] : p[1], y1 = yuy2 ? p[2] : p[3];
            int u  = yuy2 ? p[1] : p[0], v  = yuy2 ? p[3] : p[2];
            dst[x]     = yuv_to_rgb(y0, u, v);
            dst[x + 1] = yuv_to_rgb(y1, u, v);
        }
    }
    {
        uint32_t po = nv_reg(NV_PVIDEO_POINT_OUT(buf));
        uint32_t so = nv_reg(NV_PVIDEO_SIZE_OUT(buf));
        s_ovl_out_x = po & 0xFFFu;  s_ovl_out_y = (po >> 16) & 0xFFFu;
        s_ovl_out_w = so & 0xFFFu;  s_ovl_out_h = (so >> 16) & 0xFFFu;
    }
    InterlockedIncrement(&s_ovl_serial);
    if (!s_ovl_active) {
        fprintf(stderr, "  [FBWIN] video overlay on: %ux%u %s at 0x%08X ->"
                        " %ux%u+%u+%u\n", w, h, yuy2 ? "YUY2" : "UYVY",
                0x80000000u | addr, s_ovl_out_w, s_ovl_out_h,
                s_ovl_out_x, s_ovl_out_y);
        fflush(stderr);
    }
    s_ovl_active = 1;
}

/* Sample the overlay registers once per window frame ("vertical blank"). */
static void overlay_tick(void)
{
    volatile uint32_t *buffer = (volatile uint32_t *)
        ((uintptr_t)(NV_REG_BASE + NV_PVIDEO_BUFFER) + xbox_GetMemoryOffset());
    volatile uint32_t *stop = (volatile uint32_t *)
        ((uintptr_t)(NV_REG_BASE + NV_PVIDEO_STOP) + xbox_GetMemoryOffset());
    uint32_t use = *buffer;

    /* BUFFER's "use" bits mean "the overlay is showing this buffer" and stay
     * set for as long as it is on; writing STOP is what turns it off, and the
     * hardware answers by clearing BUFFER. The demo's D3D disables the
     * overlay exactly that way (XBE 0x002A5E80: if BUFFER != 0, STOP = 1,
     * then spin until BUFFER == 0). Clearing BUFFER after each latch, as this
     * first did, made that code skip the STOP -- the overlay then never went
     * away -- and a timeout to compensate blanked a movie that had merely
     * paused on its last frame ("press START to continue"). */
    if (*stop & 1u) {
        *buffer = 0;
        *stop = 0;
        if (s_ovl_active) {
            s_ovl_active = 0;
            fprintf(stderr, "  [FBWIN] video overlay off\n");
            fflush(stderr);
        }
        return;
    }
    if (use & 0x01u)
        overlay_latch(0);
    else if (use & 0x10u)
        overlay_latch(1);
    else
        s_ovl_active = 0;
}

/* The latched movie frame, for a presenter that draws it itself. rect is the
 * destination x, y, w, h in display (640x480) coordinates. */
int xbox_FramebufferOverlayGet(const uint32_t **px, uint32_t *w, uint32_t *h,
                               uint32_t rect[4], uint32_t *serial)
{
    if (!s_ovl_active || !s_ovl_rgb || !s_ovl_out_w || !s_ovl_out_h)
        return 0;
    *px = s_ovl_rgb; *w = s_ovl_w; *h = s_ovl_h;
    rect[0] = s_ovl_out_x; rect[1] = s_ovl_out_y;
    rect[2] = s_ovl_out_w; rect[3] = s_ovl_out_h;
    *serial = (uint32_t)s_ovl_serial;
    return 1;
}

/* Mix the latched overlay over the frame about to be shown. */
static void overlay_compose(void)
{
    uint32_t x, y;

    if (!s_ovl_active || !s_ovl_rgb || !s_rgb || !s_ovl_out_w || !s_ovl_out_h)
        return;
    for (y = 0; y < s_ovl_out_h; y++) {
        uint32_t dy = s_ovl_out_y + y, sy = y * s_ovl_h / s_ovl_out_h;
        if (dy >= s_fb_height)
            break;
        for (x = 0; x < s_ovl_out_w; x++) {
            uint32_t dx = s_ovl_out_x + x;
            if (dx >= s_fb_width)
                break;
            s_rgb[(size_t)dy * s_fb_width + dx] =
                s_ovl_rgb[(size_t)sy * s_ovl_w + x * s_ovl_w / s_ovl_out_w];
        }
    }
}

/* Write what the window is currently showing to a 24-bit BMP.
 *
 * A black window is ambiguous: it means either that the read path is wrong or
 * that the title really did render black. Dumping the same converted pixels
 * the window draws settles which, and does it without a screenshot. */
int xbox_FramebufferDumpBmp(const char *path)
{
    FILE *f;
    uint32_t row = ((s_fb_width * 3u) + 3u) & ~3u;
    uint32_t img = row * s_fb_height, total = 54u + img, y, x;
    uint8_t hdr[54], *line;

    if (!s_rgb || !s_fb_va)
        return -1;
    f = fopen(path, "wb");
    if (!f)
        return -1;
    memset(hdr, 0, sizeof(hdr));
    hdr[0] = 'B'; hdr[1] = 'M';
    memcpy(hdr + 2, &total, 4);
    hdr[10] = 54; hdr[14] = 40;
    memcpy(hdr + 18, &s_fb_width, 4);
    memcpy(hdr + 22, &s_fb_height, 4);
    hdr[26] = 1; hdr[28] = 24;
    memcpy(hdr + 34, &img, 4);
    fwrite(hdr, 1, sizeof(hdr), f);

    line = (uint8_t *)calloc(1, row);
    for (y = 0; y < s_fb_height; y++) {
        const uint32_t *src = s_rgb + (size_t)(s_fb_height - 1 - y) * s_fb_width;
        for (x = 0; x < s_fb_width; x++) {
            line[x * 3 + 0] = (uint8_t)(src[x] & 0xFF);
            line[x * 3 + 1] = (uint8_t)((src[x] >> 8) & 0xFF);
            line[x * 3 + 2] = (uint8_t)((src[x] >> 16) & 0xFF);
        }
        fwrite(line, 1, row, f);
    }
    free(line);
    fclose(f);
    fprintf(stderr, "  [FBWIN] wrote %s (%ux%u from 0x%08X)\n",
            path, s_fb_width, s_fb_height, s_fb_va);
    return 0;
}

static DWORD WINAPI fb_thread(LPVOID unused)
{
    HWND hwnd;
    HDC hdc;
    BITMAPINFO bi;
    RECT r;

    (void)unused;

    {
        WNDCLASSA wc;
        memset(&wc, 0, sizeof(wc));
        wc.lpfnWndProc   = fb_wndproc;
        wc.hInstance     = GetModuleHandleA(NULL);
        wc.hCursor       = LoadCursorA(NULL, IDC_ARROW);
        /* RE-SoT: the executable's own icon (resource 1, port/windows/res)
         * on the window and the taskbar; NULL, the default, when absent. */
        wc.hIcon         = LoadIconA(wc.hInstance, MAKEINTRESOURCEA(1));
        wc.lpszClassName = "XboxRecompFramebuffer";
        RegisterClassA(&wc);
    }
    r.left = 0; r.top = 0; r.right = (LONG)s_fb_width; r.bottom = (LONG)s_fb_height;
    AdjustWindowRect(&r, WS_OVERLAPPEDWINDOW, FALSE);
    hwnd = CreateWindowExA(0, "XboxRecompFramebuffer", "Xbox Recomp - Framebuffer",
                           WS_OVERLAPPEDWINDOW | WS_VISIBLE,
                           CW_USEDEFAULT, CW_USEDEFAULT,
                           r.right - r.left, r.bottom - r.top,
                           NULL, NULL, GetModuleHandleA(NULL), NULL);
    if (!hwnd) {
        InterlockedExchange(&s_fb_running, 0);
        return 0;
    }
    hdc = GetDC(hwnd);
    s_hwnd = hwnd;

    memset(&bi, 0, sizeof(bi));
    bi.bmiHeader.biSize        = sizeof(bi.bmiHeader);
    bi.bmiHeader.biWidth       = (LONG)s_fb_width;
    bi.bmiHeader.biHeight      = -(LONG)s_fb_height;   /* top-down */
    bi.bmiHeader.biPlanes      = 1;
    bi.bmiHeader.biBitCount    = 32;
    bi.bmiHeader.biCompression = BI_RGB;

    s_rgb = (uint32_t *)calloc((size_t)s_fb_width * s_fb_height, 4);

    fprintf(stderr, "  [FBWIN] framebuffer window open (%ux%u)\n",
            s_fb_width, s_fb_height);

    while (InterlockedCompareExchange(&s_fb_running, 1, 1)) {
        MSG msg;
        while (PeekMessageA(&msg, NULL, 0, 0, PM_REMOVE)) {
            TranslateMessage(&msg);
            DispatchMessageA(&msg);
        }
        overlay_tick();
        if (s_hw_mode) {
            nv2a_hw_idle_present();
        } else if (s_present_idx >= 0 && s_rgb) {
            /* A finished frame, published by the flip. Copied into s_rgb so
             * the dump path and GDI see one consistent image even if the
             * next flip lands mid-blit. */
            LONG idx = s_present_idx;
            if (s_present[idx])
                memcpy(s_rgb, s_present[idx],
                       (size_t)s_fb_width * s_fb_height * 4);
            overlay_compose();
            StretchDIBits(hdc, 0, 0, (int)s_fb_width, (int)s_fb_height,
                          0, 0, (int)s_fb_width, (int)s_fb_height,
                          s_rgb, &bi, DIB_RGB_COLORS, SRCCOPY);
        } else if (s_fb_va && s_fb_pitch && s_rgb) {
            /* No flip yet, or pinned with RECOMP_FB_VA: read guest memory as
             * before, which is also what a title that never flips needs. */
            const uint8_t *src =
                (const uint8_t *)((uintptr_t)s_fb_va + xbox_GetMemoryOffset());
            fb_convert(src, s_fb_pitch / s_fb_width);
            overlay_compose();
            StretchDIBits(hdc, 0, 0, (int)s_fb_width, (int)s_fb_height,
                          0, 0, (int)s_fb_width, (int)s_fb_height,
                          s_rgb, &bi, DIB_RGB_COLORS, SRCCOPY);
        }
        {
            /* One dump a few seconds in, so the title has had time to render
             * something rather than catching the first blank frame.
             *
             * RECOMP_FB_WINDOW_DUMP_EVERY=<frames> dumps repeatedly instead.
             * This window follows the address AvSetDisplayMode gave, which is
             * what the CRTC scans and therefore what a person sees; the
             * pushbuffer executor's own dump follows its draw surface. With
             * double buffering those are different buffers, and measuring
             * progress from the executor's dump reports a blank screen while
             * the window is showing the title's logo. Ask the window. */
            const char *dump = getenv("RECOMP_FB_DUMP");
            const char *every = getenv("RECOMP_FB_WINDOW_DUMP_EVERY");
            static int frames;
            int period = every ? atoi(every) : 0;
            frames++;
            if (dump && (period > 0 ? frames % period == 0 : frames == 600)) {
                /* The hardware path keeps the frame on the GPU: fetch it. */
                if (s_hw_mode && s_rgb) {
                    if (!nv2a_hw_readback(s_rgb, s_fb_width, s_fb_height))
                        memset(s_rgb, 0, (size_t)s_fb_width * s_fb_height * 4);
                    overlay_compose();
                }
                xbox_FramebufferDumpBmp(dump);
            }
        }
        {
            static DWORD t0;
            static LONG f0;
            DWORD now = GetTickCount();
            if (now - t0 >= 1000) {
                LONG f = s_flips;
                wchar_t tb[128];
                _snwprintf(tb, 127, L"%ls | FPS: %.1f | draws: %ld", s_title,
                           t0 ? (f - f0) * 1000.0 / (now - t0) : 0.0,
                           (long)s_frame_draws);
                tb[127] = 0;
                SetWindowTextW(hwnd, tb);
                t0 = now; f0 = f;
            }
        }
        Sleep(16);
    }

    ReleaseDC(hwnd, hdc);
    DestroyWindow(hwnd);
    free(s_rgb);
    s_rgb = NULL;
    return 0;
}

void xbox_FramebufferWindowStart(void)
{
    HANDLE th;

    if (!getenv("RECOMP_FB_WINDOW"))
        return;
    if (InterlockedCompareExchange(&s_fb_running, 1, 0) != 0)
        return;
    th = CreateThread(NULL, 0, fb_thread, NULL, 0, NULL);
    if (th)
        CloseHandle(th);
    else
        InterlockedExchange(&s_fb_running, 0);
}

#else
void xbox_FramebufferWindowSet(uint32_t fb_va, uint32_t pitch) { (void)fb_va; (void)pitch; }
void xbox_FramebufferWindowPresent(uint32_t fb_va, uint32_t pitch) { (void)fb_va; (void)pitch; }
void xbox_FramebufferWindowStart(void) {}
int xbox_FramebufferKeyDown(int vk) { (void)vk; return 0; }
void xbox_FramebufferWindowSetTitle(const uint16_t *n, int m) { (void)n; (void)m; }
void xbox_FramebufferWindowFrameStats(uint32_t draws) { (void)draws; }
#endif
