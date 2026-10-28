/* Prince of Persia: The Sands of Time, Xbox demo: entry hooks.
 *
 * `void sub_XXXXXXXX_enter(void)` here runs at the top of the generated
 * sub_XXXXXXXX, before its first instruction (tools/recomp.ps1 hands this file
 * to the lifter as --exclude-manual). Every address is a virtual address in
 * the demo's default.xbe (SHA-256 79C1A478...D4F5); this file is built into
 * the demo's executable only.
 */
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "target.h"
#include "../../port/game/resot_menu_pointer.h"

#if defined(_MSC_VER)
#define RESOT_TLS __declspec(thread)
#else
#define RESOT_TLS __thread
#endif
extern RESOT_TLS uint32_t g_eax, g_ebx, g_ecx, g_edx, g_esp, g_esi;
extern ptrdiff_t g_xbox_mem_offset;

#define GMEM32(va) (*(volatile uint32_t *)((uintptr_t)g_xbox_mem_offset + (uint32_t)(va)))
#define GMEMF(va)  (*(volatile float *)((uintptr_t)g_xbox_mem_offset + (uint32_t)(va)))

/* Demo DirectSound's IRQL scope constructor/destructor, XBE 0x002E9F30 and
 * 0x002E9F52. Reserve audio state before the constructor can raise IRQL.
 * The destructor only restores IRQL and clears its scope flag: releasing
 * here is safe because the raised IRQL still masks the pending IRQ until
 * its original lower completes. Pair every nested scope, including ISR
 * scopes, using the runtime's recursive audio-only gate. */
extern void xbox_ApuGuestScopeEnter(void);
extern void xbox_ApuGuestScopeLeave(void);
void sub_002E9F30_enter(void) { xbox_ApuGuestScopeEnter(); }
void sub_002E9F52_enter(void) { xbox_ApuGuestScopeLeave(); }

/* The primary WOW merge at 0x0002A15D passes the source world in EBX and
 * the aggregate destination on the stack. Capture its BF name before the
 * loader disposes of the source. Other callers merge helper dependencies. */
extern void resot_scene_loaded(uint32_t destination, uint32_t source, int primary, uint32_t caller);
void sub_000295F0_enter(void)
{
    uint32_t caller = GMEM32(g_esp);
    resot_scene_loaded(GMEM32(g_esp + 4), g_ebx, caller == 0x0002A162u, caller);
}

/* All INT movies, including those whose original skip permission is off.
 * Demo XBE: sub_00018EA0 returns 0 at EOF; the dispatcher at 0x00013EB0
 * then tests the loop flag (0x0064D02C at 0x00013EC1) and calls the normal
 * Bink/overlay cleanup sub_00019000. Report EOF rather than jumping out of
 * the dispatcher, so the game's timeline and pending-movie transitions run.
 * The host supplies Space / pad A, restricted to the foreground window. */
extern int resot_movie_skip_down(void);
extern void sub_00018EA0_gen(void);

void sub_00018EA0(void)
{
    static int was_down;
    int down;
    resot_menu_movie(GMEM32(0x0034AC34u) != 0); /* handle read by 0x00018EA0 */
    down = resot_movie_skip_down() | resot_menu_movie_tap();
    int pressed = down && !was_down;
    was_down = down;
    if (pressed && GMEM32(0x0034AC34u)) { /* Bink handle, read at 0x00018EA0 */
        GMEM32(0x0064D02Cu) = 0;         /* looping movies must also finish */
        fprintf(stderr, "[VIDEO] skipped movie (Space / A)\n");
        g_eax = 0;
        g_esp += 4;                     /* original status routine: ret */
        return;
    }
    sub_00018EA0_gen();
}

/* ── Widescreen: more picture at the sides, the same picture vertically ──
 *
 * The renderer stretches the 640-pixel picture over a wider surface
 * (RECOMP_HW_ASPECT). For the proportions to stay right, the horizontal scale
 * of the title's projection has to shrink by the same factor (`widen`), and
 * nothing else may change: that is Hor+, more scene at the sides.
 *
 * sub_000EF340 builds the projection at 0x00650C20 (x scale at +0x00, y scale
 * at +0x14) from the camera's field of view and hands it to sub_000EF140
 * (edx = 0x00650C20, returning to 0x000EF5AA). Dividing the x scale there is
 * the whole change.
 *
 * Widening the camera's field of view instead was tried and is wrong here:
 * Jade places its in-camera 2D (the demo's "Work in progress" caption and
 * logo) from the same field of view, so restoring the vertical scale
 * afterwards pushed those off the bottom of the screen. With the field of
 * view untouched they keep their 4:3 place and size.
 *
 * Culling still uses the camera's own field of view, so objects that are
 * entirely in the new side strips may be culled; see sub_0008A820_enter. */
static float s_widen = -1.0f;

static float widen_factor(void)
{
    if (s_widen < 0.0f) {
        const char *e = getenv("RECOMP_HW_ASPECT"), *colon;
        float aspect = 4.0f / 3.0f;
        if (e && *e) {
            aspect = (float)atof(e);
            colon = strchr(e, ':');
            if (colon && atof(colon + 1) > 0.0)
                aspect /= (float)atof(colon + 1);
        }
        s_widen = (aspect >= 4.0f / 3.0f && aspect <= 4.0f) ? aspect / (4.0f / 3.0f) : 1.0f;
        /* RESOT_NO_FOV_HOOK=1: leave the projection alone (comparison runs). */
        if (getenv("RESOT_NO_FOV_HOOK"))
            s_widen = 1.0f;
        if (s_widen > 1.0f)
            fprintf(stderr, "[BOOT] widescreen: projection widened %.4fx horizontally\n",
                    s_widen);
    }
    return s_widen;
}

/* Camera set-up: culling focal lengths (cam +0x14 / +0x18) from the field of
 * view at +0x0C (fptan at 0x0008A95E). Left as the title has it for now. */
void sub_0008A820_enter(void)
{
}

/* Culling planes. sub_0008A500 is Jade's CAM_Engine_ComputePlans: with esi
 * the camera, it takes half the field of view (cam +0x0C times 0.5 at
 * 0x0033 37D8) and stores the frustum's side planes as (cos h, 0, sin h) at
 * +0x70 (left) and (-cos h, 0, sin h) at +0x64 (right), then the same angle
 * for up/down at +0x4C/+0x58. The objects outside those planes are not drawn,
 * so with a widened projection whatever lay only in the new side strips was
 * missing: black holes and missing trees at the edges of a 16:9 picture.
 *
 * The cosine (sub_000319B0, returning to 0x0008A525) and the sine
 * (sub_00031A00, returning to 0x0008A54C) for the side planes get the
 * widened half angle atan(widen * tan h) as their stack argument; the up/down
 * calls (returning to 0x0008A56C, 0x0008A586) keep the original. */
static void widen_side_plane_angle(uint32_t ret_side)
{
    float h, *arg;

    if (widen_factor() <= 1.0f || GMEM32(g_esp) != ret_side)
        return;
    arg = (float *)((uintptr_t)g_xbox_mem_offset + g_esp + 4);
    h = *arg;
    if (h > 0.0f && h < 1.5f) {
        static int told;
        *arg = atanf(s_widen * tanf(h));
        if (!told++)
            fprintf(stderr, "[BOOT] widescreen: culling half-angle %.4f -> %.4f rad\n",
                    h, *arg);
    }
}

void sub_000319B0_enter(void)
{
    widen_side_plane_angle(0x0008A525u);
}

void sub_00031A00_enter(void)
{
    widen_side_plane_angle(0x0008A54Cu);
}

/* ── XDK Direct3D KickOff without spinning ──
 *
 * sub_0029D0C0 and sub_0029D170 hand the pushbuffer to the GPU: they set the
 * write-combine flush bit (0x00010000 at NV register +0x100410), spin until
 * the GPU clears it, then write DMA_PUT at [device +0x1C10] +0x40. Here the
 * GPU is the runtime's executor thread, which clears the bit only between
 * segments -- after a whole frame, Present included -- so the title thread
 * spun for most of every frame (90% of its samples in sub_0029D0C0).
 *
 * These are the same routines instruction for instruction (guest stack,
 * registers and stores as in the XBE), except that the wait sleeps in
 * xbox_Nv2aWaitClear and the new PUT is announced with xbox_Nv2aKick.
 * Demo XBE 0x0029D0C0-0x0029D16F and 0x0029D170-0x0029D1DA. */
extern void xbox_Nv2aKick(void);
extern void xbox_Nv2aWaitClear(uint32_t va, uint32_t mask);
extern void sub_002983A0(void);

#define D3D_DEVICE_GLOBAL  0x002A8498u   /* [dev] +0x1C18: NV register base */
#define NV_PFB_WC_FLUSH    0x00100410u
#define D3D_SYNC_FLAG      0x002A7FF0u   /* nonzero: wait for an idle GPU */

static void wait_gpu_idle(uint32_t ret)
{
    do {
        g_esp -= 4;
        GMEM32(g_esp) = ret;
        sub_002983A0();                  /* eax != 0 while PGRAPH is busy */
    } while (g_eax);
}

void sub_0029D0C0(void)
{
    uint32_t dev = g_ecx, flags, put, regs;

    g_esp -= 4;
    GMEM32(g_esp) = g_esi;               /* push esi */
    g_esi = dev;
    flags = GMEM32(dev + 8);
    g_eax = flags;
    put = (flags & 4) ? GMEM32(dev + 0x76C) : GMEM32(dev);
    g_edx = put;
    if (flags & 0x2000) {                /* 0x0029D136 */
        g_eax = GMEM32(dev);
        g_ecx = 0x002A7FE0u - 0x40u;
        GMEM32(dev + 0x1C10) = g_ecx;
        g_eax &= 0x0FFFFFFFu;
        GMEM32(g_ecx + 0x40) = g_eax;
        g_edx = GMEM32(dev + 0x1C10);
        GMEM32(g_edx + 0x44) = g_eax;
        g_eax = GMEM32(dev + 0x2C) - 2;
        g_ecx = GMEM32(dev + 0x30);
        GMEM32(g_ecx) = g_eax;
        g_edx = GMEM32(dev + 0x2468);
        GMEM32(dev + 0x1DD4) = g_edx;
    } else {
        regs = GMEM32(GMEM32(D3D_DEVICE_GLOBAL) + 0x1C18);
        g_eax = regs;
        g_ecx = GMEM32(regs + NV_PFB_WC_FLUSH) | 0x10000u;
        GMEM32(regs + NV_PFB_WC_FLUSH) = g_ecx;
        xbox_Nv2aWaitClear(regs + NV_PFB_WC_FLUSH, 0x10000u);   /* 0x0029D100 */
        g_ecx = GMEM32(dev + 0x1C10);
        g_edx = put & 0x0FFFFFFFu;
        GMEM32(g_ecx + 0x40) = g_edx;    /* DMA_PUT */
        xbox_Nv2aKick();
        g_eax = GMEM32(D3D_SYNC_FLAG);
        if (g_eax) {
            wait_gpu_idle(0x0029D129u);
            GMEM32(dev + 8) |= 0x2000u;
        }
    }
    g_esi = GMEM32(g_esp);               /* pop esi */
    g_esp += 4;
    g_esp += 4;                          /* ret */
}

void sub_0029D170(void)
{
    uint32_t dev = g_ecx, flags, put, regs;

    flags = GMEM32(dev + 8);
    g_eax = flags;
    g_esp -= 4;
    GMEM32(g_esp) = g_esi;               /* push esi */
    put = (flags & 4) ? GMEM32(dev + 0x76C) : GMEM32(dev);
    g_esi = put;
    if (!(flags & 0x2000)) {
        regs = GMEM32(GMEM32(D3D_DEVICE_GLOBAL) + 0x1C18);
        g_eax = regs;
        g_edx = GMEM32(regs + NV_PFB_WC_FLUSH) | 0x10000u;
        GMEM32(regs + NV_PFB_WC_FLUSH) = g_edx;
        xbox_Nv2aWaitClear(regs + NV_PFB_WC_FLUSH, 0x10000u);   /* 0x0029D1B0 */
        g_ecx = GMEM32(dev + 0x1C10);
        g_esi = put & 0x0FFFFFFFu;
        GMEM32(g_ecx + 0x40) = g_esi;    /* DMA_PUT */
        xbox_Nv2aKick();
        wait_gpu_idle(0x0029D1D5u);
    }
    g_esi = GMEM32(g_esp);               /* pop esi */
    g_esp += 4;
    g_esp += 4;                          /* ret */
}

/* Projection matrix: the camera is the first stack argument. */
void sub_000EF340_enter(void)
{
}

void sub_000EF140_enter(void)
{
    extern RESOT_TLS uint32_t g_edi, g_ebp;
    uint8_t *mem = (uint8_t *)(uintptr_t)g_xbox_mem_offset;

    /* 0x000EF5C6..0x000EF5D7 publishes left/top/width/height to D3D.
     * At this existing call (0x000EF5A5), EDI is top and EBP is height;
     * screen+0xA4 is the full height read at 0x000EF389. */
    if (GMEM32(g_esp) == 0x000EF5AAu && g_edx == 0x00650C20u)
        resot_menu_camera_viewport(g_edi, g_ebp, GMEM32(GMEM32(0x0064D29Cu) + 0xA4u));

    if (widen_factor() > 1.0f
            && *(const uint32_t *)(mem + g_esp) == 0x000EF5AAu
            && g_edx == 0x00650C20u)
        *(float *)(mem + 0x00650C20u) /= s_widen;
}

/* ── The pad without USB ──
 *
 * The demo reads its controllers through XAPI (the XPP section): it asks
 * XGetDevices which ports have a gamepad, opens them with XInputOpen and
 * polls XInputGetState every frame (sub_000C0280 at start-up). Behind those
 * calls XAPI drives a USB stack, and the emulated USB pad it would find
 * there failed to enumerate in most starts, leaving the game without a
 * controller. These replace the seven entry points and answer from the
 * host's keyboard, mouse, XInput pad or joystick (xbox_HlePadState,
 * src/usb/usb_gamepad.c): a gamepad is always present on port 0.
 *
 * Entry points in the demo XBE, all stdcall (from the XPP library section and
 * the game's calls in sub_000C0280 and sub_000BE3F0):
 *   0x00315FD6 XGetDevices(type)                         ret 4
 *   0x00315FF8 XGetDeviceChanges(type, *ins, *rem)       ret 0xC
 *   0x0031C450 XInputOpen(type, port, slot, params)      ret 0x10
 *   0x0031C4A6 XInputClose(handle)                       ret 4
 *   0x0031C4B2 XInputGetCapabilities(handle, caps)       ret 8 (25 bytes)
 *   0x0031C68A XInputGetState(handle, state)             ret 8 (22 bytes)
 *   0x0031C6FD XInputSetState(handle, feedback)          ret 8
 * RECOMP_USB=1 (run.ps1 -UsbPad) runs the original routines instead. */
extern uint32_t xbox_HlePadState(uint32_t port, uint8_t *out);
extern void     xbox_HlePadRumble(uint32_t port, uint16_t left, uint16_t right);

extern void sub_00315FD6_gen(void);
extern void sub_00315FF8_gen(void);
extern void sub_0031C450_gen(void);
extern void sub_0031C4A6_gen(void);
extern void sub_0031C4B2_gen(void);
extern void sub_0031C68A_gen(void);
extern void sub_0031C6FD_gen(void);

#define PAD_HANDLE 0x52455330u             /* "RES0": port 0's handle */

static int usb_input(void)
{
    static int on = -1;
    if (on < 0) {
        const char *e = getenv("RECOMP_USB");
        on = e && *e && *e != '0';
        if (!on)
            fprintf(stderr, "[BOOT] input: XAPI pad on port 0 from keyboard, mouse,"
                            " XInput pad or joystick (no USB)\n");
    }
    return on;
}

static uint32_t stdcall_arg(int i)
{
    return GMEM32(g_esp + 4 + 4 * (uint32_t)i);
}

static void stdcall_return(uint32_t value, int nargs)
{
    g_eax = value;
    g_esp += 4 + 4 * (uint32_t)nargs;
}

/* XGetDevices */
void sub_00315FD6(void)
{
    if (usb_input()) { sub_00315FD6_gen(); return; }
    stdcall_return(1u, 1);                 /* a gamepad on port 0 */
}

/* XGetDeviceChanges */
void sub_00315FF8(void)
{
    uint32_t ins, rem;
    if (usb_input()) { sub_00315FF8_gen(); return; }
    ins = stdcall_arg(1);
    rem = stdcall_arg(2);
    if (ins) GMEM32(ins) = 0;              /* nothing comes or goes */
    if (rem) GMEM32(rem) = 0;
    stdcall_return(0, 3);
}

/* XInputOpen */
void sub_0031C450(void)
{
    if (usb_input()) { sub_0031C450_gen(); return; }
    stdcall_return(stdcall_arg(1) == 0 ? PAD_HANDLE : 0, 4);
}

/* XInputClose */
void sub_0031C4A6(void)
{
    if (usb_input()) { sub_0031C4A6_gen(); return; }
    stdcall_return(0, 1);
}

/* XInputGetCapabilities */
void sub_0031C4B2(void)
{
    uint32_t caps, i;
    if (usb_input()) { sub_0031C4B2_gen(); return; }
    caps = stdcall_arg(1);
    if (stdcall_arg(0) != PAD_HANDLE || !caps) {
        stdcall_return(1167, 2);           /* ERROR_DEVICE_NOT_CONNECTED */
        return;
    }
    /* SubType, a reserved word, the gamepad's supported controls, rumble. */
    for (i = 0; i < 25; i++)
        *(volatile uint8_t *)((uintptr_t)g_xbox_mem_offset + caps + i) = 0xFF;
    *(volatile uint8_t *)((uintptr_t)g_xbox_mem_offset + caps) = 1;   /* GC_GAMEPAD */
    *(volatile uint8_t *)((uintptr_t)g_xbox_mem_offset + caps + 1) = 0;
    *(volatile uint8_t *)((uintptr_t)g_xbox_mem_offset + caps + 2) = 0;
    stdcall_return(0, 2);
}

/* XInputGetState, polled once a frame on the title thread: also where the
 * reSOT Options labels catch up with a changed setting. */
static void native_refresh(void);

void sub_0031C68A(void)
{
    uint32_t st;
    native_refresh();
    if (usb_input()) { sub_0031C68A_gen(); return; }
    st = stdcall_arg(1);
    if (stdcall_arg(0) != PAD_HANDLE || !st) {
        stdcall_return(1167, 2);
        return;
    }
    {
        uint8_t *state=(uint8_t *)((uintptr_t)g_xbox_mem_offset+st);
        uint32_t result=xbox_HlePadState(0,state);
        if(!result) resot_menu_pointer_pad(state);
        stdcall_return(result,2);
    }
}

/* XInputSetState */
void sub_0031C6FD(void)
{
    uint32_t fb;
    if (usb_input()) { sub_0031C6FD_gen(); return; }
    fb = stdcall_arg(1);
    if (stdcall_arg(0) != PAD_HANDLE || !fb) {
        stdcall_return(1167, 2);
        return;
    }
    /* XINPUT_FEEDBACK: the header's dwStatus, then the rumble at +0x42. The
     * game sends again once dwStatus has left ERROR_IO_PENDING
     * (sub_000BE3F0), so the request completes at once. */
    xbox_HlePadRumble(0, *(volatile uint16_t *)((uintptr_t)g_xbox_mem_offset + fb + 0x42),
                      *(volatile uint16_t *)((uintptr_t)g_xbox_mem_offset + fb + 0x44));
    GMEM32(fb) = 0;
    stdcall_return(997, 2);                /* ERROR_IO_PENDING, already done */
}

/* ── Menu construction trace (RESOT_MENU_TRACE=1) ──
 *
 * Jade's menu pages, built by compiled AI code such as the main menu's
 * 0x001C5790: 0x0023F110 opens a page (eax = menu object), 0x0023F040 adds
 * a choice (cdecl stack: handle out, menu object, pointer to the text
 * reference {file key, index}), 0x0023FCA0 closes the page. Logged with their return addresses to
 * map each native choice to its text reference before extending a page. */
static int menu_trace(void)
{
    static int on = -1;
    if (on < 0) { const char *e = getenv("RESOT_MENU_TRACE"); on = e && *e && *e != '0'; }
    return on;
}

static void menu_text(uint32_t ref, char *out, unsigned size);
static void text_dump(void);
static int hidden_menus(void);
static void native_reset(void);
static void native_build(uint32_t menu);
static void native_bind(void);

/* The Load Map page was laid out for the never-shown title screen: top at
 * 0.1667 and 0.0667 per line put its heading on the E3 page's logo and
 * "Tomb" on the A/B legend. Start lower and tighten the lines (stack: out,
 * menu, flags, top, spacing; floats in screen fractions). */
#define MENU_LOADMAP_OPEN_RET 0x0015E854u /* 0x0023F110 building the page */
#define MENU_TITLE_OPEN_RET   0x0015EB37u /* 0x0023F110 opening the title page */
#define MENU_PAUSE_OPEN_RET   0x0015D8CDu /* 0x0023F110: the init's first page, Pause */
extern uint32_t xbox_ContiguousAlloc(uint32_t size, uint32_t alignment);
#define MENU_E3_OPEN_RET      0x0015E8EAu /* 0x0023F110 opening the E3 page, title 0B00449C:0 */
#define RESOT_TEXT_GROUP 0x0B00FE00u  /* not a key of the demo's BF: injected */
#define T_E3_TITLE       18u          /* "E3 Demo", the E3 page's title */

void sub_0023F110_enter(void)
{
    /* 0x0015D3B0 rebuilds these pages after leaving a game. Guest handles
     * belong to that construction, not to the lifetime of the host process;
     * its first page is the pause page (0x0015D8CD). */
    if (GMEM32(g_esp) == MENU_PAUSE_OPEN_RET && hidden_menus())
        native_reset();
    if (menu_trace()) {
        char t[80];
        text_dump();
        menu_text(g_ecx, t, sizeof t);
        fprintf(stderr, "[MENU] page open  menu=%08X ret=%08X flags=%08X top=%g step=%g"
                        " title=%08X:%u \"%s\"\n",
                g_eax, GMEM32(g_esp), GMEM32(g_esp + 8), GMEMF(g_esp + 16), GMEMF(g_esp + 20),
                g_ecx ? GMEM32(g_ecx) : 0, g_ecx ? GMEM32(g_ecx + 4) : 0, t);
    }
    if (GMEM32(g_esp) == MENU_LOADMAP_OPEN_RET && hidden_menus()) {
        GMEMF(g_esp + 16) = 0.26f;
        GMEMF(g_esp + 20) = 0.05f;
    }
    if (GMEM32(g_esp) == MENU_TITLE_OPEN_RET && hidden_menus())
        native_build(GMEM32(g_esp + 8));      /* reSOT Options pages */
    /* The E3 page's title, 0B00449C:0, is empty in this BF; the E3 build
     * showed "E3 Demo" there (user's screenshot). ecx points at the init's
     * own reference, from which it numbers the choices that follow
     * (0x0015E8EA..): rewriting it shifted every text, so the page gets a
     * reference of its own instead. */
    if (GMEM32(g_esp) == MENU_E3_OPEN_RET && hidden_menus() && g_ecx) {
        static uint32_t title_ref;
        if (!title_ref)
            title_ref = xbox_ContiguousAlloc(16, 16);
        if (title_ref) {
            GMEM32(title_ref) = RESOT_TEXT_GROUP;
            GMEM32(title_ref + 4) = T_E3_TITLE;
            g_ecx = title_ref;
        }
    }
}

/* ── Hidden menus: the demo's own level select ("Load Map") ──
 *
 * The in-game menu AI's initialisation (compiled .ofc 0x0B00432B,
 * 0x0015D3B0) builds a "Load Map" page at var +0xBC with nine choices
 * (India ... Tomb, text group 0x0B00449C indices 5-13), and its binding
 * function (0x0E000142, 0x0015B3B0) gives each a "change map" message with
 * the level keys stored at +0xC8..+0xE8. Nothing links to that page: the
 * title page that carries a "Load" choice (+0x188/+0xC0) is never shown, and
 * the E3 main page (+0x4C: Start, Sound, Camera, Controller, Quit) has no
 * entry for it. This adds it natively: a choice created on the E3 page just
 * before Quit with the game's own string ("Load Map", group 0x0B00449C
 * index 4) and given the open-page action the Options sub-pages use
 * (menu_bind_open_page). The same init's Language page (+0x284) is left
 * unlinked on purpose.
 * RESOT_HIDDEN_MENUS=0 disables them. */
extern RESOT_TLS uint32_t g_edi, g_ebp, g_seh_ebp;
extern void sub_0023F040(void);
extern void sub_00018100(void);
extern void sub_00117580(void);
extern void sub_00018170(void);

#define MENU_E3_QUIT_RET     0x0015E9E8u /* 0x0023F040 call creating E3 "Quit" */
#define MENU_BIND_SOUND_RET  0x0015B752u /* 0x00117580: options Sound -> +0x158 */
#define MENU_BINDINGS_DONE   0x0015C9DAu /* 0x0001CAD0 after the level bindings */
#define MENU_CURRENT         0x0064D880u /* menu object passed to builders */
/* Entries added to the E3 main page before "Quit", in this order. Text
 * references are the game's own strings; pages are menu-AI variables that
 * 0x0015D3B0 filled with page handles. */
typedef struct {
    const char *name;
    uint32_t text_group, text_index;  /* TEXT reference of the label */
    uint32_t page_var;                /* menu var holding the page handle */
    uint32_t choice;                  /* created handle */
    int bound;
    const uint32_t *host_page;        /* or a page built here (page_var 0) */
    uint32_t msg;                     /* or a reSOT message instead of a page */
    uint32_t before;                  /* return of the 0x0023F040 call it precedes */
} MenuEntry;
static uint32_t s_resot_root;         /* reSOT Options page, built below */
static uint32_t s_pause_root;         /* its pause version, without the maps */
#define T_MAP_TITLE      17u          /* "Special Load Map" */
#define MENU_E3_SOUND_RET 0x0015E94Au /* 0x0023F040 call creating E3 "Sound" */
#define T_CHEATS_LABEL   16u          /* "Cheats: On/Off", see resot_cheats.h */
#define MSG_CHEATS       0xFE00u
/* The menu init's text group 0x0B00449C still has "Cheats" at index 3,
 * between "Load" and "Load Map", but no page of this XBE adds a choice for
 * it and no compiled AI writes the switch: the demo's cheats came only from
 * the BF's initial value. This choice restores it, changing the switch in
 * memory. */
/* The same init builds the pause pages, on the same menu object: 0x0015D8CD
 * (Pause: Continue, Options, Restart Demo) and 0x0015E6D1 (Pause: Continue,
 * Sound, Camera, Controller, Restart Demo, Quit to Demos Menu). Cheats and
 * reSOT Options go before their "Restart Demo" (0B00411F:3). */
#define MENU_PAUSE_RESTART_RET    0x0015D958u
#define MENU_E3PAUSE_RESTART_RET  0x0015E7CDu
/* Cheats and Special Load Map are choices of reSOT Options, not of the
 * game's pages: with them on the main and pause pages the in-game "Prince of
 * Persia" logo was drawn to the right of its place, half off the screen (user
 * report; RESOT_HIDDEN_MENUS=0 put it back, window dumps at 110 s). */
static MenuEntry s_entries[] = {
    /* Load Map right under Start, as the title page had "Load" under its
     * "Press Start Button". */
    { "Load Map", 0x0B00449Cu, 4u, 0x0BCu, 0, 0, 0, 0, MENU_E3_SOUND_RET },  /* nine levels */
    { "reSOT Options", RESOT_TEXT_GROUP, 0u, 0, 0, 0, &s_resot_root, 0, MENU_E3_QUIT_RET },
    { "reSOT Options (pause)", RESOT_TEXT_GROUP, 0u, 0, 0, 0, &s_pause_root, 0,
      MENU_PAUSE_RESTART_RET },
    { "reSOT Options (E3 pause)", RESOT_TEXT_GROUP, 0u, 0, 0, 0, &s_pause_root, 0,
      MENU_E3PAUSE_RESTART_RET },
};
#define MENU_ENTRIES ((int)(sizeof s_entries / sizeof s_entries[0]))
static uint32_t s_bind_edx, s_menu_vars;

static int hidden_menus(void)
{
    static int on = -1;
    if (on < 0) { const char *e = getenv("RESOT_HIDDEN_MENUS"); on = !e || *e != '0'; }
    return on;
}

/* The SSE and x87 state goes with the integer registers: our guest calls
 * (page and choice builders, label refreshes from the pad poll) ran the
 * title's float code and left xmm1-7 and the FPU stack changed under the
 * code that called the hook. Suspected cause of the in-game "Prince of
 * Persia" logo drawn shifted right and half off the screen after a Special
 * Load Map (user report); not confirmed. */
typedef union { float f[4]; double d[2]; uint32_t u[4]; int32_t i[4]; uint64_t q[2]; } GuestXmm;
extern RESOT_TLS GuestXmm g_xmm0, g_xmm1, g_xmm2, g_xmm3, g_xmm4, g_xmm5, g_xmm6, g_xmm7;
extern RESOT_TLS double g_fp_stack[8];
extern RESOT_TLS int g_fp_top;
typedef struct {
    uint32_t eax, ebx, ecx, edx, esi, edi, ebp, seh, esp;
    GuestXmm xmm[8];
    double fp[8];
    int fp_top;
} GuestRegs;
static void regs_save(GuestRegs *r)
{
    r->eax = g_eax; r->ebx = g_ebx; r->ecx = g_ecx; r->edx = g_edx; r->esi = g_esi;
    r->edi = g_edi; r->ebp = g_ebp; r->seh = g_seh_ebp; r->esp = g_esp;
    r->xmm[0] = g_xmm0; r->xmm[1] = g_xmm1; r->xmm[2] = g_xmm2; r->xmm[3] = g_xmm3;
    r->xmm[4] = g_xmm4; r->xmm[5] = g_xmm5; r->xmm[6] = g_xmm6; r->xmm[7] = g_xmm7;
    memcpy(r->fp, g_fp_stack, sizeof r->fp);
    r->fp_top = g_fp_top;
}
static void regs_load(const GuestRegs *r)
{
    g_eax = r->eax; g_ebx = r->ebx; g_ecx = r->ecx; g_edx = r->edx; g_esi = r->esi;
    g_edi = r->edi; g_ebp = r->ebp; g_seh_ebp = r->seh; g_esp = r->esp;
    g_xmm0 = r->xmm[0]; g_xmm1 = r->xmm[1]; g_xmm2 = r->xmm[2]; g_xmm3 = r->xmm[3];
    g_xmm4 = r->xmm[4]; g_xmm5 = r->xmm[5]; g_xmm6 = r->xmm[6]; g_xmm7 = r->xmm[7];
    memcpy(g_fp_stack, r->fp, sizeof r->fp);
    g_fp_top = r->fp_top;
}

/* cdecl guest call; generated routines pop their own return address. */
static uint32_t guest_cdecl(void (*fn)(void), const uint32_t *args, int n)
{
    int i;
    for (i = n - 1; i >= 0; i--) { g_esp -= 4; GMEM32(g_esp) = args[i]; }
    g_esp -= 4; GMEM32(g_esp) = 0;
    fn();
    g_esp += 4u * (uint32_t)n;
    return g_eax;
}

static uint32_t menu_add_choice(uint32_t menu, uint32_t group, uint32_t index)
{
    GuestRegs saved;
    uint32_t scratch, args[3], choice;
    regs_save(&saved);
    g_esp -= 0x40;
    scratch = g_esp;
    GMEM32(scratch + 0x20) = group;               /* text reference */
    GMEM32(scratch + 0x24) = index;
    GMEM32(scratch + 0x30) = 0;                   /* handle out */
    args[0] = scratch + 0x30; args[1] = menu; args[2] = scratch + 0x20;
    g_eax = menu;
    guest_cdecl(sub_0023F040, args, 3);
    choice = GMEM32(scratch + 0x30);
    regs_load(&saved);
    return choice;
}

/* Native "open page" binding, the same calls as Options -> Sound at
 * 0x0015B71E..0x0015B752: 0x00018100 builds an open-page action (vtable
 * 0x00323860, execute 0x000613E0 -> page open 0x0005E7C0) for the page whose
 * handle is in ecx, 0x00117580 attaches it to the choice. The kind-3 message
 * Options also sends is for the pause menu's own handler; the E3 page's
 * message loop (0x00138DD0) only takes kinds 999 and 1006 and ignores it. */
static int menu_bind_open_page(uint32_t choice, uint32_t page)
{
    GuestRegs saved;
    uint32_t scratch, args[3], action;
    if (!choice || !page || !s_bind_edx)
        return 0;
    regs_save(&saved);
    g_esp -= 0x40;
    scratch = g_esp;
    args[0] = GMEM32(MENU_CURRENT); args[1] = 0; args[2] = 1;
    g_eax = GMEM32(MENU_CURRENT); g_ecx = page;
    action = guest_cdecl(sub_00018100, args, 3);
    GMEM32(scratch + 0x30) = 0;
    args[0] = scratch + 0x30; args[1] = action; args[2] = choice;
    g_eax = GMEM32(MENU_CURRENT); g_edx = s_bind_edx;
    guest_cdecl(sub_00117580, args, 3);
    regs_load(&saved);
    return 1;
}

static int menu_bind_message(uint32_t choice, uint32_t id);

static void menu_bind_entries(void)
{
    int i;
    if (!s_menu_vars)
        return;
    for (i = 0; i < MENU_ENTRIES; i++) {
        MenuEntry *e = &s_entries[i];
        uint32_t page = e->host_page ? *e->host_page : GMEM32(s_menu_vars + e->page_var);
        if (e->bound || !e->choice)
            continue;
        if (e->msg) {
            e->bound = menu_bind_message(e->choice, e->msg);
            fprintf(stderr, "[MENU] hidden: \"%s\" sends %04X%s\n", e->name, e->msg,
                    e->bound ? "" : " -- not bound");
            continue;
        }
        e->bound = menu_bind_open_page(e->choice, page);
        fprintf(stderr, "[MENU] hidden: \"%s\" opens page %08X%s\n", e->name, page,
                e->bound ? "" : " -- not bound");
    }
}

/* "Quit to Demos Menu" (0B00411F:5) leaves for the Xbox demo disc's
 * launcher, which this port does not have. The E3 pause page adds it at
 * 0x0015E7F7 (return 0x0015E7FC) and stores the handle at var+0x160; its
 * only reader is the bind at 0x0015B67C (return 0x0015B681), a kind-1007
 * message. Skipping both leaves the page as if it never had the choice: the
 * skipped add writes handle 0 to its out argument, and the code after the
 * skipped bind reloads every register it uses (0x0015B681-0x0015B6A6) and
 * does not read the bind's out value. RESOT_DEMOS_QUIT=1 keeps it. */
#define DEMOS_QUIT_ADD_RET  0x0015E7FCu
#define DEMOS_QUIT_BIND_RET 0x0015B681u
extern void sub_0023F040_gen(void);
extern void sub_00117580_gen(void);
static int hide_demos_quit(void)
{
    static int on = -1;
    if (on < 0) { const char *e = getenv("RESOT_DEMOS_QUIT"); on = !(e && *e && *e != '0'); }
    return on;
}
void sub_0023F040(void)
{
    if (hide_demos_quit() && GMEM32(g_esp) == DEMOS_QUIT_ADD_RET) {
        GMEM32(GMEM32(g_esp + 4)) = 0;
        g_esp += 4;                                   /* ret (cdecl) */
        return;
    }
    sub_0023F040_gen();
}
void sub_00117580(void)
{
    if (hide_demos_quit() && GMEM32(g_esp) == DEMOS_QUIT_BIND_RET && GMEM32(g_esp + 12) == 0) {
        GMEM32(GMEM32(g_esp + 4)) = 0;
        g_esp += 4;
        return;
    }
    sub_00117580_gen();
}

void sub_0023F040_enter(void)
{
    if (menu_trace()) {
        char t[80];
        menu_text(GMEM32(g_esp + 12), t, sizeof t);
        fprintf(stderr, "[MENU] choice     menu=%08X ret=%08X out=%08X text=%08X:%u \"%s\"\n",
                GMEM32(g_esp + 8), GMEM32(g_esp), GMEM32(g_esp + 4),
                GMEM32(GMEM32(g_esp + 12)), GMEM32(GMEM32(g_esp + 12) + 4), t);
    }
    if (hidden_menus()) {
        int i;
        for (i = 0; i < MENU_ENTRIES; i++) {
            if (s_entries[i].before != GMEM32(g_esp) || s_entries[i].choice)
                continue;
            s_entries[i].choice = menu_add_choice(GMEM32(g_esp + 8), s_entries[i].text_group,
                                                  s_entries[i].text_index);
            fprintf(stderr, "[MENU] hidden: \"%s\" choice %08X added\n",
                    s_entries[i].name, s_entries[i].choice);
        }
    }
}

void sub_00117580_enter(void)
{
    if (menu_trace())
        fprintf(stderr, "[MENU] bind       ret=%08X action=%08X choice=%08X edx=%08X\n",
                GMEM32(g_esp), GMEM32(g_esp + 8), GMEM32(g_esp + 12), g_edx);
    if (GMEM32(g_esp) == MENU_BIND_SOUND_RET) {
        s_bind_edx = g_edx;
        s_menu_vars = g_ebp;                       /* the binder's var buffer */
    }
}

void sub_00018170_enter(void)
{
    if (menu_trace()) {
        uint32_t d = GMEM32(g_esp + 8);
        fprintf(stderr, "[MENU] message    ret=%08X +20=%08X +24=%08X kind=%d param=%08X id=%u\n",
                GMEM32(g_esp), GMEM32(d + 0x20), GMEM32(d + 0x24), (int)GMEM32(d + 0x28),
                GMEM32(d + 0x2C), GMEM32(d + 0x30));
    }
}

void sub_0001CAD0_enter(void)
{
    if (GMEM32(g_esp) == MENU_BINDINGS_DONE && hidden_menus()) {
        native_bind();
        menu_bind_entries();
    }
}

/* The choice builder 0x0023F040 calls: cdecl (local out, text reference
 * pointer, ?, 0), eax = menu object. */
void sub_0023EB10_enter(void)
{
    if (menu_trace()) {
        uint32_t ref = GMEM32(g_esp + 8);
        fprintf(stderr, "[MENU] build      eax=%08X ret=%08X ref=%08X text=%08X:%u a3=%08X a4=%08X\n",
                g_eax, GMEM32(g_esp), ref, ref ? GMEM32(ref) : 0, ref ? GMEM32(ref + 4) : 0,
                GMEM32(g_esp + 12), GMEM32(g_esp + 16));
    }
}

void sub_0023FCA0_enter(void)
{
    if (menu_trace())
        fprintf(stderr, "[MENU] page close ecx=%08X eax=%08X ret=%08X arg=%08X\n",
                g_ecx, g_eax, GMEM32(g_esp), GMEM32(g_esp + 4));
}

/* ── reSOT Options: native pages for the host settings ──
 *
 * Text: 0x001104E0 resolves a TEXT reference (edi = &{group key, index},
 * esi = the current language's table, from 0x0023EB7B) to a string pointer
 * in eax and returns. References to RESOT_TEXT_GROUP, which no file of the
 * BF uses, are answered here from a guest buffer that is rewritten at every
 * lookup, so a label shows the setting's current value.
 *
 * Pages are built with the game's own page routines between the E3 page and
 * the title page (0x0023F110 called from 0x0015EB37), after the menu init
 * has built its own; choices that open a sub-page get the same open-page
 * action as Load Map, the others a message action (0x00018170, descriptor
 * kind at +0x28, id at +0x30) whose execute, 0x00061470 (vtable 0x00323854
 * slot 1, thiscall, ret 4), would queue the descriptor for the menu AI. Ours
 * are taken here and never queued. */
#include "../../port/windows/src/options.h"
#include "../../port/game/guest_probe.h"
/* Demo XBE: the LOA table 0x000C0F60 searches (0x001EBF43); mb_CheatsEnabled
 * at pc_VarsBuffer +0x6C (0x001EBF84, read at 0x001EC749). */
#define RESOT_CHEATS_LOA_TABLE  0x0047EC30u
#define RESOT_CHEATS_VAR_OFFSET 0x6Cu
/* Universe mi_CheckPoint_CurMapID +0xA0, mi_WorldKeyToLoad +0x88 and
 * mi_ChangeMapRequest +0x90 (names from the demo BF's OVA); Start writes
 * request 1. */
#define RESOT_UNIV_CUR_MAP          0xA0u
#define RESOT_UNIV_WORLD_TO_LOAD    0x88u
#define RESOT_UNIV_CHANGE_MAP       0x90u
#define RESOT_UNIV_CHANGE_MAP_VALUE 1u
#define RESOT_MAIN_ACTOR            0x00614FCCu
#define RESOT_PRINCE_DAGGER         0x8FCu
#define RESOT_PRINCE_COSTUME_ID     0x5F8u
/* The running AI instance, compared with the costume source at 0x002032B5. */
#define RESOT_AI_CURRENT            0x0034AC3Cu
#include "../../port/game/resot_cheats.h"
/* The Prince AI's set-up, 0x00202F40: eax = the Prince's GAO, first stack
 * argument the costume source (loaded into ebp at 0x00202F5A, tested at
 * 0x00203013, read at 0x002032DE). */
void sub_00202F40_enter(void)
{
    resot_game_skin_setup(GMEM32(g_esp + 4));
}
extern void sub_000C05D0_gen(void);
/* Demo XBE: 0x000C05D0 normalizes an int16 stick pair at ECX to EAX's
 * float[2], including the original radial deadzone. 0x000C08A3 is the left
 * pair; return 0x000C08B2 is the right pair (ESI-180). Scale only that result
 * after normalization so keyboard full deflection can exceed 1.0 safely. */
void sub_000C05D0(void)
{
    uint32_t output=g_eax, ret=GMEM32(g_esp);
    sub_000C05D0_gen();
    if(ret==0x000C08B2u)
        resot_scale_look((float *)((uintptr_t)g_xbox_mem_offset+output));
}
extern uint32_t xbox_ContiguousAlloc(uint32_t size, uint32_t alignment);
extern void sub_001104E0_gen(void);
extern void sub_00061470_gen(void);
extern void sub_0023F110(void);
extern void sub_0023FCA0(void);

#define RESOT_MSG_KIND      0x52E5u
#define RESOT_TEXT_SLOT     96u
#define RESOT_TEXTS         128u
enum { T_ROOT, T_GRAPHICS, T_CONTROLS, T_KEY0, T_KEY1, T_KEY2, T_JOY0, T_JOY1, T_JOY2,
       T_RESET, T_GFX = 10, T_LOOK = 15, T_KEYS = 20, T_JOYS = 50, T_MAP_PART = 80,
       T_MAPS = 90 };
static const char *const s_static_texts[] = {
    "reSOT Options", "Graphics", "Controls",
    "Keyboard: move and fight", "Keyboard: actions", "Keyboard: menus and camera",
    "Joystick: move and fight", "Joystick: actions", "Joystick: menus and camera",
    "Reset all bindings",
};
static uint32_t s_text_va;

/* Special Load Map: every map (world list) of the demo's prince.bf, by its
 * entry name ("<name>_wol_<key>.bin", key as in resot_cheats.h), each with
 * all the worlds it lists present in the BF; and, for the record, the one
 * world no map lists (01_GP01_E3_Cour_wow_ff0f5360), which cannot be loaded
 * as a map. A choice requests its map directly (resot_change_map). */
#define MAP_PARTS 2
#define MAP_PER_PART 11
static const char *const s_map_parts[MAP_PARTS] = { "Maps 1 to 11", "Maps 12 to 21" };
/* Original keys (resot_cheats.h): from the lifted code's immediates (the
 * Load Map table at 0x0015D580 and others), except 05_GP14_Jardin,
 * 06_GP24_E3_Long and 08_GP62_E3_Long (the BF's data, in their family:
 * ff0b3xxx is 0x1B00xxxx, ff0f53xx 0x0F0053xx) and 6201_PrisonA (the
 * retail's ff02 family, 0x22). Bin entries in the comments. */
static const ResotMap s_maps[MAP_PARTS][MAP_PER_PART] = {
    { { "_Start_Demo", 0x0B0044C9u },                     /* ff0b44c9 */
      /* Menu_wol_ff0e016c (0x0E00016C) closed the demo when the user chose
       * it: listed only. */
      { "Menu (closes the demo)", RESOT_MAP_NAME_ONLY },
      { "01_GP01_Start", 0x1B00392Fu },                   /* ff0b392f */
      { "01_GP01_E3_Long", 0x0F005364u },                 /* ff0f5364 */
      { "01_GP01_E3_Cour", 0x0F005363u },                 /* ff0f5363 */
      { "02_GP01_Hourglass", 0x1B00396Au },               /* ff0b396a */
      { "03_GP11_GreatHall_Fight", 0x1B003980u },         /* ff0b3980 */
      { "04_GP61_Cour_Interieure", 0x1B00399Du },         /* ff0b399d */
      { "05_GP14_Jardin", 0x1B003A99u },                  /* ff0b3a99 */
      { "05_GP14_E3_Long", 0x0F00532Au },                 /* ff0f532a */
      { "05_GP14_E3_Cour", 0x0F005329u } },               /* ff0f5329 */
    { { "06_GP24_Bath_Fight", 0x1B0039D4u },              /* ff0b39d4 */
      { "06_GP24_E3_Long", 0x0F005355u },                 /* ff0f5355 */
      { "06_GP24_E3_Cour", 0x0F005354u },                 /* ff0f5354 */
      { "07_GP61_Remparts", 0x1B0039EBu },                /* ff0b39eb */
      { "08_GP62_Prison", 0x1B003A07u },                  /* ff0b3a07 */
      { "08_GP62_E3_Long", 0x0F0053EEu },                 /* ff0f53ee */
      { "08_GP62_E3_Cour", 0x0F0053EFu },                 /* ff0f53ef */
      { "09_GP81_Tomb", 0x1B003A26u },                    /* ff0b3a26 */
      { "6201_PrisonA", 0x2200E124u },                    /* ff02e124 */
      { "01_GP01_E3_Cour (world, no map)", RESOT_MAP_NAME_ONLY } },
};

static void resot_text(uint32_t index, char *out, unsigned size)
{
    if (index < sizeof s_static_texts / sizeof s_static_texts[0])
        snprintf(out, size, "%s", s_static_texts[index]);
    else if (index == T_MAP_TITLE)
        snprintf(out, size, "Special Load Map");
    else if (index == T_E3_TITLE)
        snprintf(out, size, "E3 Demo");
    else if (index >= T_MAP_PART && index < T_MAP_PART + MAP_PARTS)
        snprintf(out, size, "%s", s_map_parts[index - T_MAP_PART]);
    else if (index >= T_MAPS && index < T_MAPS + MAP_PARTS * MAP_PER_PART) {
        const ResotMap *m = &s_maps[(index - T_MAPS) / MAP_PER_PART][(index - T_MAPS) % MAP_PER_PART];
        char *c;
        snprintf(out, size, "%s", m->name ? m->name : "");
        for (c = out; *c; c++)            /* the menu font has no '_' */
            if (*c == '_') *c = ' ';
    }
    else if (index >= T_GFX && index < T_GFX + RESOT_NATIVE_GRAPHICS_ITEMS)
        resot_native_label(RESOT_NATIVE_GRAPHICS, (int)(index - T_GFX), out, size);
    else if (index == T_LOOK)
        resot_native_label(RESOT_NATIVE_CONTROLS, 0, out, size);
    else if (index >= T_KEYS && index < T_KEYS + RESOT_NATIVE_ACTIONS)
        resot_native_label(RESOT_NATIVE_KEYS, (int)(index - T_KEYS), out, size);
    else if (index >= T_JOYS && index < T_JOYS + RESOT_NATIVE_ACTIONS)
        resot_native_label(RESOT_NATIVE_JOY, (int)(index - T_JOYS), out, size);
    else
        snprintf(out, size, "?");
}

/* A string of the title's own text, looked up with the language table in esi
 * as the caller of 0x001104E0 passed it; "" when the group has none. */
static void game_string(uint32_t group, uint32_t index, char *out, unsigned size)
{
    GuestRegs saved;
    uint32_t s;
    unsigned i;
    regs_save(&saved);
    g_esp -= 0x20;
    GMEM32(g_esp + 0x10) = group;
    GMEM32(g_esp + 0x14) = index;
    g_edi = g_esp + 0x10;
    g_esp -= 4; GMEM32(g_esp) = 0;
    sub_001104E0_gen();
    s = g_eax;
    regs_load(&saved);
    if (s == 0x00325305u)                 /* "no text" */
        s = 0;
    for (i = 0; s && i + 1 < size; i++) {
        char c = *(volatile char *)((uintptr_t)g_xbox_mem_offset + s + i);
        if (!c) break;
        out[i] = (c >= 32 && c < 127) ? c : '?';
    }
    out[s ? i : 0] = 0;
}

/* Text actions: vtable 0x0032380C, reference at +0x34. */
#define TEXT_ACTION_VTABLE 0x0032380Cu

void sub_001104E0(void)
{
    uint32_t index;
    char text[RESOT_TEXT_SLOT];
    if (GMEM32(g_edi) != RESOT_TEXT_GROUP) {
        uint32_t ref = g_edi, table = g_esi, ret = GMEM32(g_esp);
        sub_001104E0_gen();
        if (menu_trace() && getenv("RESOT_TEXT_LOG")) {
            char t[80];
            unsigned i;
            for (i = 0; g_eax && i + 1 < sizeof t; i++) {
                char c = *(volatile char *)((uintptr_t)g_xbox_mem_offset + g_eax + i);
                if (!c) break;
                t[i] = (c >= 32 && c < 127) ? c : '?';
            }
            t[g_eax ? i : 0] = 0;
            fprintf(stderr, "[TEXT] %08X:%u table=%08X ret=%08X \"%s\"\n",
                    GMEM32(ref), GMEM32(ref + 4), table, ret, t);
        }
        return;
    }
    index = GMEM32(g_edi + 4);
    if (!s_text_va)
        s_text_va = xbox_ContiguousAlloc(RESOT_TEXT_SLOT * RESOT_TEXTS, 16);
    if (!s_text_va || index >= RESOT_TEXTS) {
        g_eax = 0x00325305u;              /* the routine's own "no text" result */
    } else {
        if (index == T_CHEATS_LABEL) {
            /* The title's strings in the current language: "Cheats"
             * 0x0B00449C:3, "On"/"Off" 0x0B0041CD:32/31 (the options'). */
            char name[32], on[16], off[16];
            game_string(0x0B00449Cu, 3, name, sizeof name);
            game_string(0x0B0041CDu, 32, on, sizeof on);
            game_string(0x0B0041CDu, 31, off, sizeof off);
            resot_cheats_label(name, on, off, text, sizeof text);
        } else
            resot_text(index, text, sizeof text);
        memcpy((void *)((uintptr_t)g_xbox_mem_offset + s_text_va + index * RESOT_TEXT_SLOT),
               text, strlen(text) + 1);
        g_eax = s_text_va + index * RESOT_TEXT_SLOT;
    }
    g_esp += 4;                           /* ret */
}

/* Page layout: what each choice of a page built here does. */
enum { DO_OPEN, DO_MSG };
typedef struct { uint32_t text; int what; int arg; uint32_t choice; } NativeChoice;
typedef struct { uint32_t title; float top, step; int n; NativeChoice c[12]; uint32_t page; } NativePage;
enum { P_ROOT, P_GFX, P_CTRL, P_K0, P_K1, P_K2, P_J0, P_J1, P_J2,
       P_MAPS, P_MAP0, P_MAP1, P_ROOT_PAUSE, P_PAGES };
#define MSG_ID(page, item) ((uint32_t)(page) << 8 | (uint32_t)(item))
#define MSG_RESET 0xFF00u
static NativePage s_pages[P_PAGES];
/* Bindings in three pages each: actions 0-8, 9-15, 16-24. */
static const int s_bind_first[3] = { 0, 9, 16 }, s_bind_count[3] = { 9, 7, 9 };

static void native_choice(NativePage *p, int i, uint32_t text, int what, int arg)
{
    p->c[i].text = text; p->c[i].what = what; p->c[i].arg = arg; p->c[i].choice = 0;
}

static void native_layout(void)
{
    int i, j;
    NativePage *p;
    memset(s_pages, 0, sizeof s_pages);
    /* reSOT Options: Graphics, Controls, Cheats and, from the main page only,
     * Special Load Map (a map change from the pause was not checked). */
    p = &s_pages[P_ROOT]; p->title = T_ROOT; p->top = 0.36f; p->step = 0.0667f; p->n = 4;
    native_choice(p, 0, T_GRAPHICS, DO_OPEN, P_GFX);
    native_choice(p, 1, T_CONTROLS, DO_OPEN, P_CTRL);
    native_choice(p, 2, T_CHEATS_LABEL, DO_MSG, (int)MSG_CHEATS);
    native_choice(p, 3, T_MAP_TITLE, DO_OPEN, P_MAPS);
    s_pages[P_ROOT_PAUSE] = *p;
    s_pages[P_ROOT_PAUSE].n = 3;
    p = &s_pages[P_GFX]; p->title = T_GRAPHICS; p->top = 0.32f; p->step = 0.0667f;
    p->n = RESOT_NATIVE_GRAPHICS_ITEMS;
    for (i = 0; i < p->n; i++)
        native_choice(p, i, T_GFX + (uint32_t)i, DO_MSG, (int)MSG_ID(P_GFX, i));
    p = &s_pages[P_CTRL]; p->title = T_CONTROLS; p->top = 0.26f; p->step = 0.05f; p->n = 8;
    native_choice(p, 0, T_LOOK, DO_MSG, (int)MSG_ID(P_CTRL, 0));
    for (i = 0; i < 6; i++)
        native_choice(p, i + 1, T_KEY0 + (uint32_t)i, DO_OPEN, P_K0 + i);
    native_choice(p, 7, T_RESET, DO_MSG, (int)MSG_RESET);
    p = &s_pages[P_MAPS]; p->title = T_MAP_TITLE; p->top = 0.36f; p->step = 0.0667f;
    p->n = MAP_PARTS;
    for (i = 0; i < MAP_PARTS; i++)
        native_choice(p, i, T_MAP_PART + (uint32_t)i, DO_OPEN, P_MAP0 + i);
    for (i = 0; i < MAP_PARTS; i++) {
        p = &s_pages[P_MAP0 + i];
        p->title = T_MAP_PART + (uint32_t)i; p->top = 0.22f; p->step = 0.045f;
        for (j = 0; j < MAP_PER_PART && s_maps[i][j].name; j++)
            native_choice(p, j, T_MAPS + (uint32_t)(i * MAP_PER_PART + j), DO_MSG,
                          (int)MSG_ID(P_MAP0 + i, j));
        p->n = j;
    }
    for (i = 0; i < 6; i++) {
        int joy = i >= 3, part = i % 3;
        p = &s_pages[P_K0 + i];
        p->title = T_KEY0 + (uint32_t)i; p->top = 0.24f; p->step = 0.05f;
        p->n = s_bind_count[part];
        for (j = 0; j < p->n; j++) {
            int action = s_bind_first[part] + j;
            native_choice(p, j, (joy ? T_JOYS : T_KEYS) + (uint32_t)action, DO_MSG,
                          (int)MSG_ID(P_K0 + i, action));
        }
    }
}

static uint32_t f2u(float f) { uint32_t u; memcpy(&u, &f, 4); return u; }

/* 0x0023F110: eax = menu, ecx = &title reference, xmm0 = the column's left
 * edge (stored at +0x294; every page of the game passes 0.4 from 0x003339EC,
 * e.g. movss at 0x0015E81D); cdecl (handle out, menu, 0, top, line step,
 * 1, 1), the arguments the Load Map page is opened with at 0x0015E854.
 * Without xmm0 the column started wherever the last SSE code left it.
 * 0x0023FCA0: eax = menu, cdecl (menu). */
#define MENU_PAGE_X 0.4f

static uint32_t native_build_page(uint32_t menu, NativePage *p)
{
    GuestRegs saved;
    GuestXmm xmm0 = g_xmm0;
    uint32_t scratch, args[7], page;
    int i;
    regs_save(&saved);
    g_esp -= 0x40;
    scratch = g_esp;
    GMEM32(scratch + 0x20) = RESOT_TEXT_GROUP;
    GMEM32(scratch + 0x24) = p->title;
    GMEM32(scratch + 0x30) = 0;
    args[0] = scratch + 0x30; args[1] = menu; args[2] = 0;
    args[3] = f2u(p->top); args[4] = f2u(p->step); args[5] = 1; args[6] = 1;
    g_eax = GMEM32(MENU_CURRENT); g_ecx = scratch + 0x20;
    g_xmm0.f[0] = MENU_PAGE_X;
    guest_cdecl(sub_0023F110, args, 7);
    page = GMEM32(scratch + 0x30);
    regs_load(&saved);
    g_xmm0 = xmm0;
    for (i = 0; i < p->n; i++)
        p->c[i].choice = menu_add_choice(menu, RESOT_TEXT_GROUP, p->c[i].text);
    regs_save(&saved);
    args[0] = menu;
    g_eax = GMEM32(MENU_CURRENT);
    guest_cdecl(sub_0023FCA0, args, 1);
    regs_load(&saved);
    return page;
}

static int s_native_built, s_native_bound;

static void native_reset(void)
{
    int i;
    s_native_built = s_native_bound = 0;
    s_resot_root = s_pause_root = s_bind_edx = s_menu_vars = 0;
    memset(s_pages, 0, sizeof s_pages);
    for (i = 0; i < MENU_ENTRIES; i++) {
        s_entries[i].choice = 0;
        s_entries[i].bound = 0;
    }
}

static void native_build(uint32_t menu)
{
    int i;
    if (s_native_built)
        return;
    s_native_built = 1;
    native_layout();
    for (i = 0; i < P_PAGES; i++)
        s_pages[i].page = native_build_page(menu, &s_pages[i]);
    s_resot_root = s_pages[P_ROOT].page;
    s_pause_root = s_pages[P_ROOT_PAUSE].page;
    fprintf(stderr, "[MENU] reSOT Options: %d pages built, root page %08X\n", P_PAGES, s_resot_root);
}

/* Message action as the options binder makes it at 0x0015B681..0x0015B6D8:
 * 0x00018170 (cdecl menu, &descriptor) then 0x00117580 to attach it. */
/* kind +0x28, parameter +0x2C, id +0x30 of the descriptor. */
static int menu_bind_kind(uint32_t choice, uint32_t kind, uint32_t param, uint32_t id)
{
    GuestRegs saved;
    uint32_t scratch, args[3], action, i;
    if (!choice || !s_bind_edx)
        return 0;
    regs_save(&saved);
    g_esp -= 0x80;
    scratch = g_esp;
    for (i = 0; i < 0x34; i += 4)
        GMEM32(scratch + 0x40 + i) = 0;
    GMEM32(scratch + 0x40 + 0x28) = kind;
    GMEM32(scratch + 0x40 + 0x2C) = param;
    GMEM32(scratch + 0x40 + 0x30) = id;
    args[0] = GMEM32(MENU_CURRENT); args[1] = scratch + 0x40;
    g_eax = GMEM32(MENU_CURRENT);
    action = guest_cdecl(sub_00018170, args, 2);
    GMEM32(scratch + 0x30) = 0;
    args[0] = scratch + 0x30; args[1] = action; args[2] = choice;
    g_eax = GMEM32(MENU_CURRENT); g_edx = s_bind_edx;
    guest_cdecl(sub_00117580, args, 3);
    regs_load(&saved);
    return 1;
}

static int menu_bind_message(uint32_t choice, uint32_t id)
{
    return menu_bind_kind(choice, RESOT_MSG_KIND, 0, id);
}

/* The Load Map choices' own message (binder loop 0x0015C951..0x0015C9A6):
 * kind 1000, the map key as parameter, id 50, handled by the menu AI. A
 * map requested directly in the universe instead (resot_change_map) faulted
 * for 4 of 12 maps from the main menu (03_GP11_GreatHall_Fight,
 * 05_GP14_E3_Cour, 06_GP24_Bath_Fight, 06_GP24_E3_Long; at 0x00028FD0 and
 * elsewhere, scripted runs with audio). */
#define MSG_KIND_CHANGE_MAP 1000u
#define MSG_MENU_ID         50u

static void native_bind(void)
{
    int i, j, ok = 0, all = 0;
    if (!s_native_built || s_native_bound)
        return;
    s_native_bound = 1;
    for (i = 0; i < P_PAGES; i++)
        for (j = 0; j < s_pages[i].n; j++) {
            NativeChoice *c = &s_pages[i].c[j];
            all++;
            if (i >= P_MAP0 && i <= P_MAP1 && s_maps[i - P_MAP0][j].key != RESOT_MAP_NAME_ONLY)
                ok += menu_bind_kind(c->choice, MSG_KIND_CHANGE_MAP, s_maps[i - P_MAP0][j].key,
                                     MSG_MENU_ID);
            else
                ok += c->what == DO_OPEN ? menu_bind_open_page(c->choice, s_pages[c->arg].page)
                                         : menu_bind_message(c->choice, (uint32_t)c->arg);
        }
    fprintf(stderr, "[MENU] reSOT Options: %d of %d choices bound\n", ok, all);
}

/* Labels. 0x0023EB10 gives each choice's object (+0x9C, stored at
 * 0x0023ED5B) a text object whose text action (0x00060770 -> 0x00060160,
 * vtable 0x0032380C, TEXT reference at +0x34/+0x38) is asked for its string
 * (slot 1, 0x00060210 -> 0x001104E0) only when 0x000605C0 runs it: on page
 * changes, not when a value changes. 0x000605C0 (esi = text object, skipped
 * while +0x28 is 0) is what 0x00017D10 runs over every text object; it is
 * run here for our own choices once the options' revision moves. The text
 * object is checked to still carry our reference before it is touched. */
extern void sub_000605C0(void);
#define TEXT_MANAGER       0x0064D1E4u   /* +0x44: objects by choice handle */

/* Probed reads, as the retail's: the cheats label is refreshed from the
 * per-frame poll, where a main-page handle can outlive its page. */
static int native_text_object(uint32_t choice, uint32_t *out)
{
    uint32_t mgr, table, obj, text, it, end;
    if (!choice || !resot_cheats_word(TEXT_MANAGER, &mgr) || !mgr ||
            !resot_cheats_word(mgr + 0x44, &table) || !table ||
            choice > 0x3FFFFFFFu || !resot_cheats_word(table + choice * 4, &obj) || !obj ||
            !resot_cheats_word(obj + 0x9C, &text) || !text ||
            !resot_cheats_word(text + 0x0C, &it) || !resot_cheats_word(text + 0x10, &end))
        return 0;
    /* Host traversal limit, not an XBE constant: reject stale vector bounds. */
    if (!it || end < it || ((it | end) & 3) || end - it > 65536u)
        return 0;
    for (; it < end; it += 4) {
        uint32_t action, vtable, group;
        if (!resot_cheats_word(it, &action))
            return 0;
        if (action && resot_cheats_word(action, &vtable) && vtable == TEXT_ACTION_VTABLE &&
                resot_cheats_word(action + 0x34, &group) && group == RESOT_TEXT_GROUP) {
            *out = text;
            return 1;
        }
    }
    return 0;
}

static void native_refresh_text(uint32_t text)
{
    GuestRegs saved;
    regs_save(&saved);
    g_esi = text;
    guest_cdecl(sub_000605C0, NULL, 0);
    regs_load(&saved);
}

static void native_refresh(void)
{
    static long seen;
    long revision;
    int i, j, n = 0;
    uint32_t cheats_text;
    resot_universe_watch();
    resot_prince_watch();
    resot_game_behavior_frame();
    resot_game_skin_frame();
    resot_test_map();
    /* The cheats switch: kept as chosen, and its labels follow it. */
    if (resot_cheats_frame() && s_native_bound)
        for (i = P_ROOT; i <= P_ROOT_PAUSE; i += P_ROOT_PAUSE - P_ROOT)
            if (native_text_object(s_pages[i].c[2].choice, &cheats_text))
                native_refresh_text(cheats_text);
    if (!s_native_bound || (revision = resot_native_revision()) == seen)
        return;
    seen = revision;
    for (i = 0; i < P_PAGES; i++)
        for (j = 0; j < s_pages[i].n; j++) {
            GuestRegs saved;
            uint32_t text;
            if (s_pages[i].c[j].what != DO_MSG
                    || !native_text_object(s_pages[i].c[j].choice, &text))
                continue;
            regs_save(&saved);
            g_esi = text;
            guest_cdecl(sub_000605C0, NULL, 0);
            regs_load(&saved);
            n++;
        }
    if (menu_trace())
        fprintf(stderr, "[MENU] reSOT labels refreshed (%d, revision %ld)\n", n, revision);
}

/* Message action execute: this = ecx, the descriptor copied at +0x24. */
void sub_00061470(void)
{
    uint32_t self = g_ecx, id;
    if (GMEM32(self + 0x24 + 0x28) != RESOT_MSG_KIND) { sub_00061470_gen(); return; }
    id = GMEM32(self + 0x24 + 0x30);
    if (menu_trace())
        fprintf(stderr, "[MENU] reSOT choice %04X self=%08X ret=%08X\n", id, self, GMEM32(g_esp));
    if (id == MSG_CHEATS)
        resot_cheats_toggle();
    else if (id == MSG_RESET)
        resot_native_reset_bindings();
    else if ((id >> 8) == P_GFX)
        resot_native_activate(RESOT_NATIVE_GRAPHICS, (int)(id & 0xFF));
    else if ((id >> 8) == P_CTRL)
        resot_native_activate(RESOT_NATIVE_CONTROLS, (int)(id & 0xFF));
    else if ((id >> 8) >= P_MAP0 && (id >> 8) <= P_MAP1 && (id & 0xFF) < MAP_PER_PART) {
        const ResotMap *m = &s_maps[(id >> 8) - P_MAP0][id & 0xFF];
        if (m->key != RESOT_MAP_NAME_ONLY)
            resot_change_map(m->key);
    }
    else if ((id >> 8) >= P_K0 && (id >> 8) <= P_J2)
        resot_native_activate((id >> 8) >= P_J0 ? RESOT_NATIVE_JOY : RESOT_NATIVE_KEYS,
                              (int)(id & 0xFF));
    g_esp += 8;                           /* ret 4 */
}

/* The game's string for a text reference in guest memory, or "": 0x001104E0
 * with edi = &{group, index} and esi = the current language's table, which
 * 0x0023EB66 loads from 0x00614FCC. */
static void menu_text(uint32_t ref, char *out, unsigned size)
{
    GuestRegs saved;
    uint32_t s;
    unsigned i;
    out[0] = 0;
    if (!ref || GMEM32(ref) == 0xFFFFFFFFu || !GMEM32(0x00614FCCu))
        return;
    regs_save(&saved);
    g_edi = ref;
    g_esi = GMEM32(0x00614FCCu);
    g_esp -= 4; GMEM32(g_esp) = 0;
    sub_001104E0();
    s = g_eax;
    regs_load(&saved);
    for (i = 0; s && i + 1 < size; i++) {
        char c = *(volatile char *)((uintptr_t)g_xbox_mem_offset + s + i);
        if (!c) break;
        out[i] = (c >= 32 && c < 127) ? c : '?';
    }
    out[s ? i : 0] = 0;
}

/* RESOT_TEXT_DUMP=<group>[,<group>...]: print every string of those text
 * groups once, at the first page the menu library opens (with the trace). */
static void text_dump(void)
{
    static int done;
    const char *e = getenv("RESOT_TEXT_DUMP");
    if (done || !e || !*e) return;
    done = 1;
    while (*e) {
        char *next;
        uint32_t group = (uint32_t)strtoul(e, &next, 16), i, empty = 0;
        GuestRegs saved;
        if (next == e) break;
        e = next;
        regs_save(&saved);
        g_esp -= 0x20;
        for (i = 0; i < 400 && empty < 8; i++) {
            char t[120];
            GMEM32(g_esp + 0x10) = group;
            GMEM32(g_esp + 0x14) = i;
            menu_text(g_esp + 0x10, t, sizeof t);
            empty = t[0] ? 0 : empty + 1;
            if (t[0])
                fprintf(stderr, "[TEXT] %08X:%u \"%s\"\n", group, i, t);
        }
        regs_load(&saved);
        while (*e == ',' || *e == ' ') e++;
    }
}
