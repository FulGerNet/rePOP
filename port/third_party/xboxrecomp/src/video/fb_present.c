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

/* RE-SoT: Android shares everything here except the window itself: the
 * PVIDEO overlay, the frame limiter and the options/panel callbacks are the
 * same code; the window, its messages and GDI are Windows-only, and the
 * Android host (port/android/src) supplies the SDL window, the keys and the
 * panel's text. */
#if defined(_WIN32) || defined(__ANDROID__)
#if defined(_WIN32)
#include <windows.h>
#else
#include "../platform/win32_compat.h"
#include <time.h> /* RE-SoT: precise mobile frame pacing without a busy tail. */
#endif
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../kernel/resot_runtime.h" /* RE-SoT: per-target behaviour. */

extern ptrdiff_t xbox_GetMemoryOffset(void);

static volatile LONG s_fb_running;
static volatile LONG s_hw_mode; /* RE-SoT: also selects the flip pacing owner. */
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

/* RE-SoT: a host-only F5 panel, composed after movies as well as game frames.
 * The optional provider keeps target addresses out of the shared runtime.
 * Register it before starting the window; it writes a bounded scene name. */
static volatile LONG s_debug_panel;
/* RE-SoT: Android touch controls hide their FPS button while this panel
 * occupies the same corner. Read the real state, including keyboard F5. */
int xbox_FramebufferFpsVisible(void)
{
    return InterlockedCompareExchange(&s_debug_panel, 0, 0) != 0;
}
static void (*s_wow_provider)(char *, size_t);

/* RE-SoT: report the backend that initialized successfully, including a
 * native-backend fallback, rather than the saved renderer preference. */
extern int nv2a_hw_backend(void);
static const char *fb_renderer_name(void)
{
    switch (nv2a_hw_backend()) {
    case 11: return "Direct3D 11";
    case 12: return "Direct3D 12";
    case 100: return "Vulkan";
    default: return "Software";
    }
}

/* RE-SoT: optional host options own the topmost panel and native input while
 * open. Callbacks keep the standalone runtime independent of the host UI. */
static int (*s_options_panel)(const uint32_t **, uint32_t *, uint32_t *);
static int (*s_options_event)(void *, unsigned, uintptr_t, intptr_t);
/* RE-SoT: live VSync preference, independent of the original flip/idle
 * presentation request. -1 retains the runtime's environment default. */
static volatile LONG s_host_vsync = -1;
void xbox_SetVSync(int enabled)
{
    LONG value = enabled ? 1 : 0;
    /* RE-SoT: record actual live preference changes, not each present. */
    if (InterlockedExchange(&s_host_vsync, value) != value)
        fprintf(stderr, "  [VIDEO] host VSync %s\n", value ? "on" : "off");
}
int xbox_FramebufferVSync(void) { return (int)InterlockedCompareExchange(&s_host_vsync, 0, 0); }

void xbox_FramebufferSetOptionsCallbacks(
    int (*panel)(const uint32_t **, uint32_t *, uint32_t *),
    int (*event)(void *, unsigned, uintptr_t, intptr_t))
{
    s_options_panel = panel;
    s_options_event = event;
}


void xbox_FramebufferSetWowProvider(void (*provider)(char *, size_t))
{
    s_wow_provider = provider;
}

#if defined(_WIN32)
int xbox_FramebufferDebugPanelGet(const uint32_t **pixels, uint32_t *width,
                                 uint32_t *height)
{
    enum { PANEL_W = 280, PANEL_H = 111 }; /* RE-SoT: include active renderer. */
    static HDC dc;
    static uint32_t *bits;
    static DWORD refreshed, sampled;
    static LONG last_flips;
    static double fps;
    DWORD now;
    char scene[256] = "Not loaded", line[300];
    RECT text;

    /* RE-SoT: F6 is composed over both the game and movies, above F5. */
    if (s_options_panel && s_options_panel(pixels, width, height)) return 1;
    if (!InterlockedCompareExchange(&s_debug_panel, 0, 0))
        return 0;
    if (!dc) {
        BITMAPINFO info;
        HBITMAP bitmap;
        memset(&info, 0, sizeof info);
        info.bmiHeader.biSize = sizeof info.bmiHeader;
        info.bmiHeader.biWidth = PANEL_W;
        info.bmiHeader.biHeight = -PANEL_H;
        info.bmiHeader.biPlanes = 1;
        info.bmiHeader.biBitCount = 32;
        dc = CreateCompatibleDC(NULL);
        if (!dc) return 0;
        bitmap = CreateDIBSection(dc, &info, DIB_RGB_COLORS, (void **)&bits, NULL, 0);
        if (!bitmap) { DeleteDC(dc); dc = NULL; return 0; }
        SelectObject(dc, bitmap);
        SelectObject(dc, GetStockObject(DEFAULT_GUI_FONT));
        SetBkMode(dc, TRANSPARENT);
        SetTextColor(dc, RGB(235, 239, 248));
    }
    now = GetTickCount();
    if (!sampled) { sampled = now; last_flips = s_flips; }
    if (now - sampled >= 500) {
        LONG flips = s_flips;
        fps = (double)((DWORD)flips - (DWORD)last_flips) * 1000.0 / (now - sampled);
        sampled = now; last_flips = flips;
    }
    if (!refreshed || now - refreshed >= 200) {
        size_t i;
        /* RE-SoT: translucent background, with text kept fully readable. */
        for (i = 0; i < (size_t)PANEL_W * PANEL_H; i++) bits[i] = 0xA0151C29u;
        if (s_wow_provider) s_wow_provider(scene, sizeof scene);
        scene[sizeof scene - 1] = 0;
        text.left = 12; text.top = 10; text.right = PANEL_W - 12; text.bottom = 30;
        DrawTextA(dc, "reSOT  |  F5", -1, &text, DT_SINGLELINE | DT_NOPREFIX);
        snprintf(line, sizeof line, "FPS: %.1f", fps);
        text.top = 33; text.bottom = 53;
        DrawTextA(dc, line, -1, &text, DT_SINGLELINE | DT_NOPREFIX);
        snprintf(line, sizeof line, "Current WOW: %s", scene);
        text.top = 56; text.bottom = 77;
        DrawTextA(dc, line, -1, &text, DT_SINGLELINE | DT_END_ELLIPSIS | DT_NOPREFIX);
        snprintf(line, sizeof line, "Renderer: %s", fb_renderer_name());
        text.top = 79; text.bottom = 100;
        DrawTextA(dc, line, -1, &text, DT_SINGLELINE | DT_NOPREFIX);
        GdiFlush();
        /* RE-SoT: GDI clears text pixels' alpha; restore opaque glyphs after
         * drawing, retaining 63% opacity on untouched background pixels. */
        for (i = 0; i < (size_t)PANEL_W * PANEL_H; i++)
            bits[i] = (bits[i] & 0xFFFFFFu) |
                      ((bits[i] & 0xFFFFFFu) == 0x151C29u ? 0xA0000000u : 0xFF000000u);
        refreshed = now;
    }
    *pixels = bits; *width = PANEL_W; *height = PANEL_H;
    return 1;
}
#else
/* RE-SoT (Android): the same panel, with text from the host's font
 * (resot_host_draw_text, port/android/src/font_android.c). Wider than on
 * Windows: the font is fixed-width. */
extern void resot_host_draw_text(uint32_t *bits, int w, int h, int x, int y,
                                 const char *text, uint32_t argb);
int xbox_FramebufferDebugPanelGet(const uint32_t **pixels, uint32_t *width,
                                 uint32_t *height)
{
    enum { PANEL_W = 440, PANEL_H = 114 }; /* RE-SoT: same fourth row as Windows. */
    static uint32_t bits[PANEL_W * PANEL_H];
    static DWORD refreshed, sampled;
    static LONG last_flips;
    static double fps;
    DWORD now;
    char scene[256] = "Not loaded", line[300];

    if (s_options_panel && s_options_panel(pixels, width, height)) return 1;
    if (!InterlockedCompareExchange(&s_debug_panel, 0, 0))
        return 0;
    now = GetTickCount();
    if (!sampled) { sampled = now; last_flips = s_flips; }
    if (now - sampled >= 500) {
        LONG flips = s_flips;
        fps = (double)((DWORD)flips - (DWORD)last_flips) * 1000.0 / (now - sampled);
        sampled = now; last_flips = flips;
    }
    if (!refreshed || now - refreshed >= 200) {
        size_t i;
        for (i = 0; i < (size_t)PANEL_W * PANEL_H; i++) bits[i] = 0xA0151C29u;
        if (s_wow_provider) s_wow_provider(scene, sizeof scene);
        scene[sizeof scene - 1] = 0;
        resot_host_draw_text(bits, PANEL_W, PANEL_H, 12, 8, "reSOT  |  FPS", 0xFFEBEFF8u);
        snprintf(line, sizeof line, "FPS: %.1f", fps);
        resot_host_draw_text(bits, PANEL_W, PANEL_H, 12, 34, line, 0xFFEBEFF8u);
        snprintf(line, sizeof line, "Current WOW: %s", scene);
        resot_host_draw_text(bits, PANEL_W, PANEL_H, 12, 60, line, 0xFFEBEFF8u);
        snprintf(line, sizeof line, "Renderer: %s", fb_renderer_name());
        resot_host_draw_text(bits, PANEL_W, PANEL_H, 12, 86, line, 0xFFEBEFF8u);
        refreshed = now;
    }
    *pixels = bits; *width = PANEL_W; *height = PANEL_H;
    return 1;
}
#endif

/* RE-SoT: software presentation uses the same panel pixels as Direct3D. */
static void fb_debug_panel_compose(void)
{
    const uint32_t *pixels;
    uint32_t w, h, x, y, copy_w;
    if (!s_rgb || !xbox_FramebufferDebugPanelGet(&pixels, &w, &h)) return;
    if (s_fb_width <= 8 || s_fb_height <= 8) return;
    copy_w = w < s_fb_width - 8 ? w : s_fb_width - 8;
    /* RE-SoT: software path follows the D3D panel's straight-alpha blend. */
    for (y = 0; y < h && y + 8 < s_fb_height; y++) {
        uint32_t *dst = s_rgb + (size_t)(y + 8) * s_fb_width + 8;
        const uint32_t *src = pixels + (size_t)y * w;
        for (x = 0; x < copy_w; x++) {
            uint32_t a = src[x] >> 24, inv = 255 - a;
            uint32_t r = (((src[x] >> 16) & 255) * a + ((dst[x] >> 16) & 255) * inv + 127) / 255;
            uint32_t g = (((src[x] >> 8) & 255) * a + ((dst[x] >> 8) & 255) * inv + 127) / 255;
            uint32_t b = ((src[x] & 255) * a + (dst[x] & 255) * inv + 127) / 255;
            dst[x] = 0xFF000000u | (r << 16) | (g << 8) | b;
        }
    }
}

void xbox_FramebufferWindowSetTitle(const uint16_t *name, int max_chars)
{
    int i;
    for (i = 0; i < max_chars && i < 47 && name[i]; i++)
        s_title[i] = (wchar_t)name[i];
    if (i)
        s_title[i] = 0;
}

/* RE-SoT: user-selected upper frame limit. This wait runs at a completed
 * guest flip, before acquiring the D3D lock, and never changes guest clocks.
 * Late frames reset the deadline instead of trying to catch up with bursts. */
static volatile LONG s_frame_limit, s_frame_limit_generation;

/* RE-SoT: graphics options are safe before renderer initialization and can
 * change live. Only the verified post-processing composite consults this. */
/* RE-SoT: glow is opt-in on both hosts; old INI preferences do not enable it. */
static volatile LONG s_post_processing = 0;

void xbox_SetPostProcessing(int enabled)
{
    LONG value = enabled != 0;
    if (InterlockedExchange(&s_post_processing, value) != value)
        fprintf(stderr, "  [VIDEO] texture glow effect %s\n", value ? "on" : "off");
}

int xbox_FramebufferPostProcessing(void)
{
    return InterlockedCompareExchange(&s_post_processing, 0, 0) != 0;
}

void xbox_SetFrameLimit(int fps)
{
    if (fps != 30 && fps != 60 && fps != 120) fps = 0;
    InterlockedExchange(&s_frame_limit, fps);
    InterlockedIncrement(&s_frame_limit_generation);
#if defined(__ANDROID__)
    /* RE-SoT: avoid driving a high-refresh mobile display for a capped game;
     * the Android host requests the lowest supported mode meeting this cap. */
    extern void resot_android_set_frame_limit(int);
    resot_android_set_frame_limit(fps);
#endif
    /* RE-SoT: record the actual selected limit for performance comparisons. */
    fprintf(stderr, "  [FBWIN] FPS limit: %d (0 = None)\n", fps);
}

static void fb_limit_frame(void)
{
    static LONGLONG last, frequency;
    static LONG generation = -1;
    LARGE_INTEGER now, qf;
    LONG fps = InterlockedCompareExchange(&s_frame_limit, 0, 0);
    LONG current_generation = InterlockedCompareExchange(&s_frame_limit_generation, 0, 0);
    LONGLONG deadline, remaining;
    if (!frequency) { QueryPerformanceFrequency(&qf); frequency = qf.QuadPart; }
    QueryPerformanceCounter(&now);
    if (!fps || generation != current_generation) {
        generation = current_generation; last = now.QuadPart;
        return;
    }
    deadline = last + frequency / fps;
    while ((remaining = deadline - now.QuadPart) > 0) {
        if (InterlockedCompareExchange(&s_frame_limit_generation, 0, 0) != generation) {
            last = now.QuadPart;
            return;
        }
#if defined(__ANDROID__)
        /* RE-SoT: sleep through the final remainder on mobile instead of
         * polling a core while Android's compositor also needs CPU time. */
        struct timespec pause = {0, (long)(remaining * 1000000000LL / frequency)};
        pause.tv_sec = pause.tv_nsec / 1000000000L;
        pause.tv_nsec %= 1000000000L;
        nanosleep(&pause, NULL);
#else
        /* RE-SoT: leave a millisecond for scheduler jitter, yielding to
         * other ready threads during the short final remainder. */
        if (remaining > frequency / 500)
            Sleep((DWORD)(remaining * 1000 / frequency - 1));
        else
            SwitchToThread();
#endif
        QueryPerformanceCounter(&now);
    }
    last = now.QuadPart;
}

/* RE-SoT: defer the host wait until post-flip fences and DMA_GET are visible.
 * This setting is fixed at startup; the user FPS limit remains live.
 * Default on for xbox-demo, off for xbox-retail (as each was validated);
 * RESOT_DEFER_PRESENT=0/1 overrides either. */
int xbox_FramebufferDeferPresent(void)
{
    static int enabled = -1;
    if (enabled < 0) {
        const char *value = getenv("RESOT_DEFER_PRESENT");
#if RESOT_RUNTIME_DEMO
        enabled = !value || atoi(value) != 0;
#else
        enabled = value && *value && strcmp(value, "0");
#endif
        fprintf(stderr, "  [FBWIN] deferred host Present: %s\n", enabled ? "on" : "off");
    }
    return enabled;
}

void xbox_FramebufferLimitFrame(void) { fb_limit_frame(); } /* RE-SoT */

void xbox_FramebufferWindowFrameStats(uint32_t draws)
{
    /* RE-SoT: deferred hardware presentation owns its wait after decoding. */
    if (!s_hw_mode || !xbox_FramebufferDeferPresent()) fb_limit_frame();
    InterlockedIncrement(&s_flips);
    InterlockedExchange(&s_frame_draws, (LONG)draws);
}

int xbox_FramebufferKeyDown(int vk)
{
    if ((unsigned)vk > 255)
        return 0;
    return s_key_down[vk] != 0;
}

/* RE-SoT: the mouse's movement, in raw counts, since the input layer last
 * took it; the camera is driven by it as the PC version's is. Raw input
 * rather than WM_MOUSEMOVE, which stops at the screen's edge. */
static volatile LONG s_mouse_dx, s_mouse_dy;

void xbox_FramebufferTakeMouse(int *dx, int *dy)
{
    *dx = (int)InterlockedExchange(&s_mouse_dx, 0);
    *dy = (int)InterlockedExchange(&s_mouse_dy, 0);
}

#if defined(_WIN32)
/* RE-SoT: WM_KEYDOWN says VK_SHIFT/VK_CONTROL/VK_MENU for either side, and
 * with NumLock off the numeric pad arrives as the navigation keys. The
 * keyboard layout binds the left and right keys and the pad separately
 * (Left Shift walks, Right Shift rewinds, Keypad 1 cancels, End is the
 * alternate view), so the side is taken from the scan code and the
 * extended-key flag (bit 24) before the key is recorded. */
static unsigned fb_vk_sided(WPARAM w, LPARAM l)
{
    unsigned scan = (unsigned)(l >> 16) & 0xFF;
    int ext = (l & (1 << 24)) != 0;

    switch (w) {
    case VK_SHIFT:   return scan == 0x36 ? VK_RSHIFT : VK_LSHIFT;
    case VK_CONTROL: return ext ? VK_RCONTROL : VK_LCONTROL;
    case VK_MENU:    return ext ? VK_RMENU : VK_LMENU;
    }
    if (!ext) {                     /* the pad's keys, NumLock off */
        switch (w) {
        case VK_INSERT: return VK_NUMPAD0;
        case VK_END:    return VK_NUMPAD1;
        case VK_DOWN:   return VK_NUMPAD2;
        case VK_NEXT:   return VK_NUMPAD3;
        case VK_LEFT:   return VK_NUMPAD4;
        case VK_CLEAR:  return VK_NUMPAD5;
        case VK_RIGHT:  return VK_NUMPAD6;
        case VK_HOME:   return VK_NUMPAD7;
        case VK_UP:     return VK_NUMPAD8;
        case VK_PRIOR:  return VK_NUMPAD9;
        case VK_DELETE: return VK_DECIMAL;
        }
    }
    return (unsigned)w;
}

/* RE-SoT: Alt+Enter or F11 switches between the window and a borderless
 * window over the whole monitor. A maximised window keeps its title bar, so
 * its client area is not the picture's shape and the picture gets bars at
 * the sides; over the whole monitor it fills a 16:9 screen. */
/* RE-SoT: synchronize the SDL wrapper as well as the underlying HWND. */
extern void nv2a_hw_set_window_frame(int bordered);
static void fb_toggle_fullscreen(HWND h)
{
    static WINDOWPLACEMENT saved = { sizeof(WINDOWPLACEMENT) };
    static int have_saved;
    MONITORINFO mi;
    /* Started with -Fullscreen, the window is already a popup. */
    int full = !(GetWindowLongPtrA(h, GWL_STYLE) & WS_CAPTION);

    if (!full) {
        mi.cbSize = sizeof mi;
        if (!GetMonitorInfoA(MonitorFromWindow(h, MONITOR_DEFAULTTONEAREST), &mi))
            return;
        have_saved = GetWindowPlacement(h, &saved);
        nv2a_hw_set_window_frame(0);
        SetWindowLongPtrA(h, GWL_STYLE, WS_POPUP | WS_VISIBLE);
        SetWindowPos(h, HWND_TOP, mi.rcMonitor.left, mi.rcMonitor.top,
                     mi.rcMonitor.right - mi.rcMonitor.left,
                     mi.rcMonitor.bottom - mi.rcMonitor.top, SWP_FRAMECHANGED);
    } else {
        nv2a_hw_set_window_frame(1);
        SetWindowLongPtrA(h, GWL_STYLE, WS_OVERLAPPEDWINDOW | WS_VISIBLE);
        if (have_saved) {
            SetWindowPlacement(h, &saved);
            SetWindowPos(h, NULL, 0, 0, 0, 0, SWP_NOMOVE | SWP_NOSIZE | SWP_NOZORDER
                         | SWP_FRAMECHANGED);
        } else {
            RECT r = { 0, 0, 1280, 720 };   /* never windowed yet: 1280x720 */
            AdjustWindowRect(&r, WS_OVERLAPPEDWINDOW, FALSE);
            SetWindowPos(h, NULL, 100, 100, r.right - r.left, r.bottom - r.top,
                         SWP_NOZORDER | SWP_FRAMECHANGED);
        }
    }
}

static LRESULT CALLBACK fb_wndproc(HWND h, UINT m, WPARAM w, LPARAM l)
{
    /* RE-SoT: keep the sole fullscreen toggle available while F7 or a
     * binding capture consumes game input; never bind F11 to a game action. */
    if ((m==WM_KEYDOWN || m==WM_KEYUP) && w==VK_F11) {
        if (m==WM_KEYDOWN && !(l & (1 << 30))) fb_toggle_fullscreen(h);
        return 0;
    }
    /* RE-SoT: a host options panel consumes its mouse/keyboard messages and
     * releases game-held input, so opening/rebinding cannot drive the Prince. */
    if (s_options_event && s_options_event(h, m, (uintptr_t)w, (intptr_t)l)) {
        memset((void *)s_key_down, 0, sizeof s_key_down);
        InterlockedExchange(&s_mouse_dx, 0);
        InterlockedExchange(&s_mouse_dy, 0);
        return m == WM_SETCURSOR ? TRUE : 0;
    }

    switch (m) {
    case WM_SYSKEYDOWN:
        /* RE-SoT: route Alt+F4 explicitly, including the borderless popup
         * window, to the same process-close path as the title-bar button. */
        if (w == VK_F4 && (l & (1 << 29))) {
            PostMessageA(h, WM_CLOSE, 0, 0);
            return 0;
        }
        /* RE-SoT: F11 is the only fullscreen toggle. */
        break;
    }
    switch (m) {
    case WM_CLOSE:
        /* RE-SoT: this is the application's game window. Stopping only the
         * presentation thread leaves the lifted Xbox main loop, GPU and audio
         * threads alive forever: a console title has no Windows quit loop.
         * End the process as HalReturnToFirmware does; do not tear down guest
         * memory while those threads are still using it. Alt+F4 and the close
         * button both reach this path through DefWindowProc. */
        fprintf(stderr, "  [FBWIN] close requested; exiting game process\n");
        fflush(stderr);
        ExitProcess(0);
        return 0;

    case WM_DESTROY:
        InterlockedExchange(&s_fb_running, 0);
        return 0;

    case WM_KEYDOWN:
    case WM_SYSKEYDOWN:
        /* RE-SoT: autorepeat must not repeatedly open and close the panel. */
        if (w == VK_F5) {
            if (!(l & (1L << 30)))
                InterlockedExchange(&s_debug_panel, !s_debug_panel);
            return 0;
        }
        w = fb_vk_sided(w, l);
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
    case WM_SYSKEYUP: {
        WPARAM vk = fb_vk_sided(w, l);
        if ((unsigned)vk < 256)
            s_key_down[vk] = 0;
        /* Both Shifts held and one let go: Windows may send the release
         * only for the generic key, so the pair is re-read from the state. */
        if (w == VK_SHIFT) {
            s_key_down[VK_LSHIFT] = (GetKeyState(VK_LSHIFT) & 0x8000) != 0;
            s_key_down[VK_RSHIFT] = (GetKeyState(VK_RSHIFT) & 0x8000) != 0;
        }
        return m == WM_SYSKEYUP ? DefWindowProcA(h, m, w, l) : 0;
    }

    /* RE-SoT: the mouse buttons are recorded like keys (VK_LBUTTON,
     * VK_RBUTTON, VK_MBUTTON), so the input layer maps them the same way.
     * The capture keeps the release from being lost if it happens outside
     * the window. */
    /* RE-SoT: CS_DBLCLKS is needed by F6; outside it, a double-click is
     * still a normal second game button press rather than a lost attack. */
    case WM_LBUTTONDOWN:
    case WM_LBUTTONDBLCLK:
    case WM_RBUTTONDOWN:
    case WM_RBUTTONDBLCLK:
    case WM_MBUTTONDOWN:
    case WM_MBUTTONDBLCLK:
        s_key_down[(m == WM_LBUTTONDOWN || m == WM_LBUTTONDBLCLK) ? VK_LBUTTON
                   : (m == WM_RBUTTONDOWN || m == WM_RBUTTONDBLCLK) ? VK_RBUTTON : VK_MBUTTON] = 1;
        SetCapture(h);
        return 0;
    case WM_LBUTTONUP:
    case WM_RBUTTONUP:
    case WM_MBUTTONUP:
        s_key_down[m == WM_LBUTTONUP ? VK_LBUTTON
                   : m == WM_RBUTTONUP ? VK_RBUTTON : VK_MBUTTON] = 0;
        if (!s_key_down[VK_LBUTTON] && !s_key_down[VK_RBUTTON]
            && !s_key_down[VK_MBUTTON])
            ReleaseCapture();
        return 0;

    /* RE-SoT: side buttons can be rebound by the host options. */
    case WM_XBUTTONDOWN:
    case WM_XBUTTONDBLCLK:
    case WM_XBUTTONUP:
        s_key_down[HIWORD(w) == XBUTTON1 ? VK_XBUTTON1 : VK_XBUTTON2] = m != WM_XBUTTONUP;
        return TRUE;

    /* RE-SoT: mouse movement for the camera, only while the window has the
     * focus (raw input is registered without RIDEV_INPUTSINK). */
    case WM_INPUT: {
        RAWINPUT ri;
        UINT size = sizeof ri;
        if (GetRawInputData((HRAWINPUT)l, RID_INPUT, &ri, &size,
                            sizeof(RAWINPUTHEADER)) != (UINT)-1
            && ri.header.dwType == RIM_TYPEMOUSE
            && !(ri.data.mouse.usFlags & MOUSE_MOVE_ABSOLUTE)) {
            InterlockedExchangeAdd(&s_mouse_dx, ri.data.mouse.lLastX);
            InterlockedExchangeAdd(&s_mouse_dy, ri.data.mouse.lLastY);
        }
        break;                      /* DefWindowProc does the cleanup */
    }

    /* RE-SoT: the pointer is hidden over the picture, since the mouse turns
     * the camera rather than pointing at anything. */
    case WM_SETCURSOR:
        if (LOWORD(l) == HTCLIENT) {
            SetCursor(NULL);
            return TRUE;
        }
        break;

    /* Alt-tabbing away with a key held would leave it held for ever. */
    case WM_KILLFOCUS:
        memset((void *)s_key_down, 0, sizeof s_key_down);
        InterlockedExchange(&s_mouse_dx, 0);
        InterlockedExchange(&s_mouse_dy, 0);
        return 0;
    }
    return DefWindowProcA(h, m, w, l);
}

#endif /* _WIN32 */

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

#if defined(_WIN32)
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
        wc.style = CS_DBLCLKS; /* RE-SoT: double-click rebinding in F6. */
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
    {
        /* RE-SoT: raw mouse movement for the camera (WM_INPUT above). */
        RAWINPUTDEVICE rid;
        rid.usUsagePage = 0x01;     /* generic desktop */
        rid.usUsage     = 0x02;     /* mouse */
        rid.dwFlags     = 0;
        rid.hwndTarget  = hwnd;
        if (!RegisterRawInputDevices(&rid, 1, sizeof rid))
            fprintf(stderr, "  [FBWIN] raw mouse input unavailable (%lu)\n",
                    (unsigned long)GetLastError());
    }

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
            fb_debug_panel_compose();
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
            fb_debug_panel_compose();
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
#else
/* RE-SoT (Android): the host made the SDL window and pumps its events on
 * its own thread; this one does what fb_thread does besides the window:
 * latch the movie overlay and repaint while the title is not flipping. */
void xbox_FramebufferAndroidSetWindow(void *sdl_window) { s_hwnd = (HWND)sdl_window; }

/* Keys and buttons from the host (gamepad, touch, a hardware keyboard), as
 * the window procedure records them on Windows. */
void xbox_FramebufferHostKey(int vk, int down)
{
    if ((unsigned)vk < 256)
        s_key_down[vk] = (unsigned char)(down != 0);
}

void xbox_FramebufferHostMouse(int dx, int dy)
{
    InterlockedExchangeAdd(&s_mouse_dx, dx);
    InterlockedExchangeAdd(&s_mouse_dy, dy);
}

void xbox_FramebufferToggleDebugPanel(void)
{
    InterlockedExchange(&s_debug_panel, !InterlockedCompareExchange(&s_debug_panel, 0, 0));
}

static DWORD WINAPI fb_thread(LPVOID unused)
{
    (void)unused;
    fprintf(stderr, "  [FBWIN] Android presentation thread up\n");
    while (InterlockedCompareExchange(&s_fb_running, 1, 1)) {
        overlay_tick();
        if (s_hw_mode)
            nv2a_hw_idle_present();
        Sleep(16);
    }
    return 0;
}
#endif

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

#else  /* neither _WIN32 nor __ANDROID__ */
void xbox_FramebufferWindowSet(uint32_t fb_va, uint32_t pitch) { (void)fb_va; (void)pitch; }
void xbox_FramebufferWindowPresent(uint32_t fb_va, uint32_t pitch) { (void)fb_va; (void)pitch; }
void xbox_FramebufferWindowStart(void) {}
int xbox_FramebufferKeyDown(int vk) { (void)vk; return 0; }
void xbox_FramebufferTakeMouse(int *dx, int *dy) { *dx = 0; *dy = 0; }
void xbox_FramebufferWindowSetTitle(const uint16_t *n, int m) { (void)n; (void)m; }
void xbox_FramebufferWindowFrameStats(uint32_t draws) { (void)draws; }
#endif
