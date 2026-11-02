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

static void resot_triggers_view(void);
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
    if (GMEM32(g_esp) == 0x000EF5AAu && g_edx == 0x00650C20u)
        resot_triggers_view();
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
 * ff0b3xxx is 0x1B00xxxx, ff0f53xx 0x0F0053xx). Bin entries in the comments. */
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
      /* 6201_PrisonA_wol_ff02e124 (0x2200E124) lists the three area worlds
       * but no PrinceCostume05 and no E3 world: no Prince set-up in the user's
       * log, the menu Prince's head stayed. 08_GP62_E3_Cour lists the same
       * areas with both, and did set him up (log 20261028-000147). */
      { "6201_PrisonA", 0x0F0053EFu },                    /* ff0f53ef */
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

/* F8 Show triggers (port/game/resot_invisible.h). The demo inlines the visibility
 * test in sub_000295F0: it calls sub_00021810 with the GAO in esi (0x000296B5),
 * reads GAO+4 (0x000296BF), tests ForceInvisible (0x000296C6) and inserts with
 * sub_000BFB80 (0x000296D7). GEO+0x4C is the vertex resource (0x0008E139, passed
 * to sub_000F1700). */
#include "../../port/game/resot_triggers.h"
extern RESOT_TLS uint32_t g_esi;
void sub_00021810_enter(void)
{
    resot_invisible_pass(g_esi, 0x4C);
}
void sub_000BFB80_enter(void)
{
    resot_invisible_restore();
}
/* The camera whose projection sub_000EF340 builds: its argument, read at
 * 0x000EF376 as [esp+0x18] after 0x14 bytes of frame. */
void sub_000EF340_enter(void)
{
    s_trigger_camera = GMEM32(g_esp + 4);
}
static void resot_triggers_view(void)
{
    resot_triggers_frame(RESOT_JADE_WORLD_LOADED, 0x00650C20u);
}

/* -- Indexed draws without the pushbuffer (docs/DIRECT-RENDERER.md) --
 *
 * sub_002A2A20 is D3D's DrawIndexedVertices(prim, count, indices), ret 0xC, 80% of
 * the demo's draws in Entree (RESOT_DRAW_CENSUS), called by Jade at 0x000F1950. It
 * flushes state with the device's base vertex index (0x002A2A2E..0x002A2A38), sets
 * device +8 bit 0x800, copies the list into the ring as ARRAY_ELEMENT packets, then
 * clears bits 0x1800 and, if 0x1000 was set, issues a fence (0x002A2C4F..0x002A2C6C).
 * What replaces the copy keeps all of that. Not taken: while recording (device +8
 * bit 2), where the words must land in the recorded buffer. */
#include "../../port/third_party/xboxrecomp/src/kernel/nv2a_direct.h"
extern void sub_002A2A20_gen(void);
extern void sub_002A2250(void);
extern void sub_0029D550(void);
extern void sub_0029D1E0(void);
static void census(int kind, uint32_t units);
void sub_002A2A20(void)
{
    uint32_t prim = GMEM32(g_esp + 4), count = GMEM32(g_esp + 8), indices = GMEM32(g_esp + 12);
    uint32_t dev = GMEM32(D3D_DEVICE_GLOBAL), token, flags, put;

    census(0, count);
    if (!nv2a_direct_mode() || (GMEM32(dev + 8) & 4) ||
        !(token = nv2a_direct_prepare(prim, count, indices))) {
        sub_002A2A20_gen();
        return;
    }
    g_ecx = dev;
    g_esp -= 4; GMEM32(g_esp) = GMEM32(dev + 0x1C);
    g_esp -= 4; GMEM32(g_esp) = 0x002A2A3Du;
    sub_002A2250();
    GMEM32(dev + 8) |= 0x800u;
    g_esp -= 4; GMEM32(g_esp) = 2;
    g_esp -= 4; GMEM32(g_esp) = 0x002A2A53u;
    sub_0029D550();
    put = g_eax;
    GMEM32(put) = 0x00040000u | NV097_RESOT_DIRECT_RUN;
    GMEM32(put + 4) = token;
    GMEM32(dev) = put + 8;
    flags = GMEM32(dev + 8);
    GMEM32(dev + 8) = flags & 0xFFFFE7FFu;
    if (flags & 0x1000u) {
        g_esp -= 4; GMEM32(g_esp) = 1;
        g_esp -= 4; GMEM32(g_esp) = 0x002A2C71u;
        sub_0029D1E0();
    }
    g_esp += 16;                         /* ret 0xC */
}

/* RESOT_DRAW_CENSUS=1: who calls D3D's three draw entries, every 5 s: sub_002A2A20
 * DrawIndexedVertices(prim, count, indices), sub_002A2980 DrawVertices(prim, start,
 * count), sub_002A2810 DrawVerticesUP(prim, count, data, stride). Diagnostic only. */
#define CENSUS_CALLERS 64
static struct { uint32_t ret; uint64_t calls, units, recording; } s_census[3][CENSUS_CALLERS];
static void census(int kind, uint32_t units)
{
    static int on = -1;
    static uint64_t last;
    uint32_t ret;
    if (on < 0) on = getenv("RESOT_DRAW_CENSUS") != NULL;
    if (!on) return;
    ret = GMEM32(g_esp);
    for (int i = 0; i < CENSUS_CALLERS; i++) {
        if (s_census[kind][i].ret == ret || !s_census[kind][i].ret) {
            s_census[kind][i].ret = ret;
            s_census[kind][i].calls++; s_census[kind][i].units += units;
            if (GMEM32(GMEM32(D3D_DEVICE_GLOBAL) + 8) & 4) s_census[kind][i].recording++;
            break;
        }
    }
    {
        uint64_t now = GetTickCount64();
        if (now - last < 5000) return;
        last = now;
        for (int k = 0; k < 3; k++)
            for (int i = 0; i < CENSUS_CALLERS && s_census[k][i].ret; i++)
                if (s_census[k][i].calls > 16)
                    fprintf(stderr, "[CENSUS] %s ret %08X: %llu calls, %llu units, %llu recording\n",
                        k == 0 ? "indexed" : k == 1 ? "arrays" : "up", s_census[k][i].ret,
                        (unsigned long long)s_census[k][i].calls, (unsigned long long)s_census[k][i].units,
                        (unsigned long long)s_census[k][i].recording);
    }
}

/* sub_002A2980 is DrawVertices(prim, start, count), ret 0xC. It flushes state with
 * base index 0 (0x002A298B..0x002A298D) and writes BEGIN, DRAW_ARRAYS runs and END,
 * with no device flag or fence. The token carries the same three values. */
extern void sub_002A2980_gen(void);
void sub_002A2980(void)
{
    uint32_t prim = GMEM32(g_esp + 4), start = GMEM32(g_esp + 8), count = GMEM32(g_esp + 12);
    uint32_t dev = GMEM32(D3D_DEVICE_GLOBAL), put;

    census(1, count);
    if (!nv2a_direct_mode() || (GMEM32(dev + 8) & 4) || !count || count > 0xFFFFu || start > 0xFFFFu ||
        start + count > 0x10000u) {
        sub_002A2980_gen();
        return;
    }
    g_ecx = dev;
    g_esp -= 4; GMEM32(g_esp) = 0;
    g_esp -= 4; GMEM32(g_esp) = 0x002A2992u;
    sub_002A2250();
    g_esp -= 4; GMEM32(g_esp) = 3;
    g_esp -= 4; GMEM32(g_esp) = 0x002A29A6u;
    sub_0029D550();
    put = g_eax;
    GMEM32(put) = 0x00080000u | NV097_RESOT_DIRECT_ARRAYS;
    GMEM32(put + 4) = prim;
    GMEM32(put + 8) = start << 16 | count;
    GMEM32(dev) = put + 12;
    g_esp += 16;                         /* ret 0xC */
}

/* sub_002A2810 is DrawVerticesUP(prim, count, data, stride), ret 0x10. 0x002A23F0
 * computes the walk: words per vertex at device +0xBB8, skip to the first at +0xBBC,
 * skip added to the stride at +0xBC0, count of (words, skip) pairs at +0xC44, pairs
 * from +0xBC4, whose last skip takes the stride sum (0x002A2881). Words are copied
 * here as the original copied them into INLINE_ARRAY packets (0x002A2916..0x002A2924);
 * flags and fence as 0x002A2852 and 0x002A2952..0x002A296A. A refusal after the flush
 * runs the flush again in the original: it recomputes the same values. */
extern void sub_002A2810_gen(void);
extern void sub_002A23F0(void);
void sub_002A2810(void)
{
    uint32_t prim = GMEM32(g_esp + 4), count = GMEM32(g_esp + 8), data = GMEM32(g_esp + 12);
    uint32_t stride = GMEM32(g_esp + 16), dev = GMEM32(D3D_DEVICE_GLOBAL);
    uint32_t pairs, skip, token, flags, put, from, *to;

    census(2, count);
    if (!nv2a_direct_mode() || (GMEM32(dev + 8) & 4)) {
        sub_002A2810_gen();
        return;
    }
    g_ecx = dev;
    g_esp -= 4; GMEM32(g_esp) = 0x002A2829u;
    sub_002A23F0();
    if (!(to = nv2a_direct_up_begin(prim, count * GMEM32(dev + 0xBB8), &token))) {
        sub_002A2810_gen();
        return;
    }
    pairs = GMEM32(dev + 0xC44);
    from = GMEM32(dev + 0xBBC) + data;
    skip = GMEM32(dev + 0xBC0) + stride;
    GMEM32(dev + 0xBC4 + pairs * 8 - 4) = skip;
    for (uint32_t v = 0; v < count; v++) {
        for (uint32_t p = 0; p < pairs; p++) {
            uint32_t words = GMEM32(dev + 0xBC4 + p * 8);
            for (uint32_t w = 0; w < words; w++, from += 4) *to++ = GMEM32(from);
            from += GMEM32(dev + 0xBC8 + p * 8);
        }
    }
    GMEM32(dev + 8) |= 0x800u;
    g_esp -= 4; GMEM32(g_esp) = 2;
    g_esp -= 4; GMEM32(g_esp) = 0x002A28C4u;
    sub_0029D550();
    put = g_eax;
    GMEM32(put) = 0x00040000u | NV097_RESOT_DIRECT_UP;
    GMEM32(put + 4) = token;
    GMEM32(dev) = put + 8;
    flags = GMEM32(dev + 8);
    GMEM32(dev + 8) = flags & 0xFFFFE7FFu;
    if (flags & 0x1000u) {
        g_esp -= 4; GMEM32(g_esp) = 1;
        g_esp -= 4; GMEM32(g_esp) = 0x002A296Fu;
        sub_0029D1E0();
    }
    g_esp += 20;                         /* ret 0x10 */
}

/* sub_002A39A0 is RunPushBuffer(buffer, fixup), ret 8. Where it thinks the buffer idle
 * (0x002A3A31, from the GPU time) it writes a JUMP into the ring and patches the
 * buffer's closing JUMP to return after it (0x002A3900). Fences are published ahead
 * of the walk here (resot_ordered_fences), so a second run can repatch the same
 * buffer before the executor has read the first: the first run then returned past
 * its PUT into the ring's previous lap, consumed tokens and all, and floats were read
 * as commands (logs: JUMP at 0x8002B5B8, closing JUMP to 0x8002B7A0, PUT
 * 0x8002B698, then a black scene). Tokens make that likely by leaving the title far
 * less to write between runs. So with them on, what was written is consumed first.
 *
 * That wait held the title for a quarter to a third of its samples (RESOT_PROFILE_MS,
 * retail, 2026-11-02): it drained the executor at every call. So the buffer is no longer run
 * where it lies. Its fix-ups are applied as 0x002A3900 applies them, then its words
 * are copied behind one token, as D3D itself copies buffers flagged so (0x002A3C10):
 * nothing in the ring points into the buffer, and it may be patched again at once.
 * The bookkeeping is the idle branch's: run stamp +0x14 from device +0x50
 * (0x002A3A78), device +0x3C and the fence past 0x002AAC20 (0x002A3B79..0x002A3B9E),
 * time stamps +8 (0x002A3BF2..0x002A3C06). A buffer whose words are not plain method
 * packets (a JUMP, CALL or RETURN in it), or too long for a slot, takes the old way. */
extern void sub_002A39A0_gen(void);
extern int xbox_Nv2aCaughtUp(void);
static uint32_t ring_room(uint32_t dev, uint32_t ret);
static int pushbuffer_is_methods(uint32_t from, uint32_t n)
{
    for (uint32_t at = 0; at < n; ) {
        uint32_t w = GMEM32(from + at * 4), count = (w >> 18) & 0x7FFu;
        if ((w & 0x00030003u) || ((w & 0xE0000000u) && (w & 0xE0000000u) != 0x40000000u) || at + 1 + count > n)
            return 0;
        at += 1 + count;
    }
    return 1;
}
void sub_002A39A0(void)
{
    uint32_t dev = GMEM32(D3D_DEVICE_GLOBAL), buffer = GMEM32(g_esp + 4), fixup = GMEM32(g_esp + 8);
    uint32_t data, bytes, n, token = 0, put, *to = NULL;
    static unsigned copied, refused;
    static int in_place;                 /* a run in place may still be read from the buffer */

    if (!nv2a_direct_mode() || (GMEM32(dev + 8) & 4) || (int32_t)GMEM32(buffer) < 0) {
        sub_002A39A0_gen();
        return;
    }
    g_ecx = dev;
    g_esp -= 4; GMEM32(g_esp) = 0;
    g_esp -= 4; GMEM32(g_esp) = 0x002A39B7u;
    sub_002A2250();
    if (in_place) {                      /* before any fix-up: as the old way */
        g_ecx = dev;
        g_esp -= 4; GMEM32(g_esp) = 0x002A39A0u;
        sub_0029D0C0();
        while (!xbox_Nv2aCaughtUp()) Sleep(0);
        in_place = 0;
    }
    data = GMEM32(buffer + 4);
    bytes = GMEM32(buffer + 0xC) - 4;
    n = bytes / 4;
    if (fixup) {
        uint32_t rec = GMEM32(fixup + 4) + GMEM32(fixup + 0xC), size;
        while ((size = GMEM32(rec)) != 0xFFFFFFFFu) {
            memcpy((uint8_t *)(uintptr_t)g_xbox_mem_offset + data + GMEM32(rec + 4),
                   (const uint8_t *)(uintptr_t)g_xbox_mem_offset + rec + 8, size);
            rec += 8 + size;
        }
    }
    if (!n || !pushbuffer_is_methods(data, n) || !(to = nv2a_direct_up_begin(0, n, &token))) {
        if (refused++ < 4)
            fprintf(stderr, "[DIRECT] RunPushBuffer %08X (%u words) run in place\n", buffer, n);
        g_ecx = dev;
        g_esp -= 4; GMEM32(g_esp) = 0x002A39A0u;
        sub_0029D0C0();
        while (!xbox_Nv2aCaughtUp()) Sleep(0);
        sub_002A39A0_gen();
        in_place = 1;
        return;
    }
    if (!copied++)
        fprintf(stderr, "[DIRECT] RunPushBuffer: buffers copied behind a token\n");
    memcpy(to, (const uint8_t *)(uintptr_t)g_xbox_mem_offset + data, (size_t)n * 4);
    put = ring_room(dev, 0x002A3A18u);
    GMEM32(put) = 0x00040000u | NV097_RESOT_DIRECT_PACKETS;
    GMEM32(put + 4) = token;
    GMEM32(dev) = put + 8;
    GMEM32(buffer + 0x14) = GMEM32(dev + 0x50);
    GMEM32(dev + 0x3C) += bytes;
    if (GMEM32(dev + 0x3C) > GMEM32(0x002AAC20u)) {
        g_esp -= 4; GMEM32(g_esp) = 0;
        g_esp -= 4; GMEM32(g_esp) = 0x002A3B9Eu;
        sub_0029D1E0();
    }
    GMEM32(buffer + 8) = GMEM32(dev + 0x2C);
    if (fixup) GMEM32(fixup + 8) = GMEM32(dev + 0x2C);
    g_esp += 12;                         /* ret 8 */
}

/* sub_002A12F0 is the state flush's fog step (device), ret 4, called only from
 * 0x002A2213, so a token here sits exactly where its packets sat. It calls 0x0029A9F0,
 * then derives the fog from 0x002A8370 enable, 0x002A8374 mode, 0x002A8378 start,
 * 0x002A837C end, 0x002A8380 density (0x002A130C..0x002A13CA). Methods 0x02A0 and 0x09C8
 * have no consumer in the runtime and are not carried. The final combiner it may
 * write (0x002A1432..0x002A1452, 0x002A149E..0x002A14BC) is its own token. Recording
 * stays in the original. */
extern void sub_002A12F0_gen(void);
extern void sub_0029A9F0(void);
extern void sub_0029D550(void);
static double fog_float(uint32_t va) { uint32_t v = GMEM32(va); float f; memcpy(&f, &v, 4); return f; }
void sub_002A12F0(void)
{
    uint32_t dev = GMEM32(g_esp + 4), enable, mode = 0x2601, token, put, *to, p0, p1;
    float f0 = 1.0f, f1 = 1.0f;

    if (!nv2a_direct_mode() || (GMEM32(dev + 8) & 4)) {
        sub_002A12F0_gen();
        return;
    }
    g_ecx = dev;
    g_esp -= 4; GMEM32(g_esp) = 0x002A12FFu;
    sub_0029A9F0();
    enable = GMEM32(0x002A8370u);
    if (enable) {
        uint32_t table = GMEM32(0x002A8374u);
        double start = fog_float(0x002A8378u), end = fog_float(0x002A837Cu), density = fog_float(0x002A8380u);
        if (table == 3) {
            double one = fog_float(0x003337A0u);
            double k = start == end ? fog_float(0x002A7188u) : one / (end - start);
            f0 = (float)(end * k + one);
            f1 = (float)-k;
        } else if (table) {
            f0 = 1.5f;                       /* 0x002A13A8 */
            f1 = (float)(density * fog_float(table == 1 ? 0x0031CE5Cu : 0x0031CE58u));
            mode = table == 1 ? 0x800u : 0x801u;
        }
    }
    if (!(to = nv2a_direct_up_begin(0, 4, &token))) {
        sub_002A12F0_gen();
        return;
    }
    memcpy(&p0, &f0, 4); memcpy(&p1, &f1, 4);
    to[0] = enable ? 1u : 0u; to[1] = mode; to[2] = p0; to[3] = p1;
    g_esp -= 4; GMEM32(g_esp) = 5;
    g_esp -= 4; GMEM32(g_esp) = 0x002A13DAu;
    sub_0029D550();
    put = g_eax;
    GMEM32(put) = 0x00040000u | NV097_RESOT_DIRECT_FOG;
    GMEM32(put + 4) = token;
    put += 8;
    if (!GMEM32(dev + 0x780) || !GMEM32(dev + 0x784)) {
        uint32_t two_sided = GMEM32(0x002A839Cu) != 0;
        GMEM32(put) = 0x00040000u | NV097_RESOT_DIRECT_FINAL;
        GMEM32(put + 4) = enable ? 0x130C0300u + (two_sided ? 0x20000u : 0u) : 0xCu + (two_sided ? 2u : 0u);
        put += 8;
    }
    GMEM32(dev) = put;
    g_esp += 8;                          /* ret 4 */
}

/* sub_00297C20 is SetRenderTarget(colour, zeta), ret 8; a null colour keeps the current
 * one. Everything but its surface packets is called as the original calls it, in order
 * (0x00297C44..0x00297CBB, 0x00297DE5, 0x00297E67..0x00297E85). The packets at
 * 0x00297D00..0x00297DD5 write pitch and both offsets twice with NOPs and waits, which
 * nothing in the runtime reads; so does 0x032C. The pitch's derivation is 0x00297D09..
 * 0x00297D7B. FLIP_STALL (0x00297E35..0x00297E58) and 0x0290 stay in the ring. */
extern void sub_00297C20_gen(void);
extern void sub_00298F70(void);
extern void sub_002990D0(void);
extern void sub_0029EAB0(void);
extern void sub_00297BB0(void);
extern void sub_0029BBF0(void);
extern void sub_0029E990(void);
extern void sub_0029BD20(void);
extern void sub_0029B3C0(void);
extern void sub_0029D540(void);
static void surface_release(uint32_t dev, uint32_t surface, uint32_t ret)
{
    uint32_t owner = GMEM32(surface + 0x14) ? GMEM32(surface + 0x14) : surface;
    GMEM32(owner + 8) = GMEM32(dev + 0x2C);
    g_esp -= 4; GMEM32(g_esp) = surface;
    g_esp -= 4; GMEM32(g_esp) = ret;
    sub_002990D0();
}
void sub_00297C20(void)
{
    uint32_t colour = GMEM32(g_esp + 4), zeta = GMEM32(g_esp + 8), dev = GMEM32(D3D_DEVICE_GLOBAL);
    uint32_t token, put, pitch, flags, *to;

    if (!nv2a_direct_mode() || (GMEM32(dev + 8) & 4) || !(to = nv2a_direct_up_begin(0, 4, &token))) {
        sub_00297C20_gen();
        return;
    }
    if (!colour) colour = GMEM32(dev + 0x19F4);
    g_esp -= 4; GMEM32(g_esp) = colour;
    g_esp -= 4; GMEM32(g_esp) = 0x00297C49u;
    sub_00298F70();
    if (GMEM32(dev + 0x19F4)) surface_release(dev, GMEM32(dev + 0x19F4), 0x00297C6Eu);
    {
        uint32_t old_zeta = GMEM32(dev + 0x19F8);
        GMEM32(dev + 0x19F4) = colour;
        if (old_zeta) surface_release(dev, old_zeta, 0x00297C99u);
    }
    GMEM32(dev + 0x19F8) = zeta;
    if (zeta) {
        g_esp -= 4; GMEM32(g_esp) = zeta;
        g_esp -= 4; GMEM32(g_esp) = 0x00297CADu;
        sub_00298F70();
        g_esp -= 4; GMEM32(g_esp) = dev + 0x944;
        g_esp -= 4; GMEM32(g_esp) = zeta;
        g_esp -= 4; GMEM32(g_esp) = 0x00297CBAu;
        sub_0029EAB0();
        g_esp -= 4; GMEM32(g_esp) = zeta;
        g_esp -= 4; GMEM32(g_esp) = 0x00297CC0u;
        sub_00297BB0();
        GMEM32(dev + 0x948) = g_eax;
    }
    if (GMEM32(colour + 0x10)) {
        pitch = ((GMEM32(colour + 0x10) >> 24) + 1) << 6;
    } else {
        uint32_t width = 1u << ((GMEM32(colour + 0xC) >> 20) & 0xF);
        uint32_t format = (GMEM32(colour + 0xC) >> 8) & 0xFF;
        if (format == 0xC) pitch = width * 2;
        else if (format == 0xE || format == 0xF) pitch = width * 4;
        else pitch = (((GMEM32(0x002A6040u + (format & ~3u)) >> ((format & 3) * 8)) & 0x3C) * width) >> 3;
    }
    to[0] = (GMEM32(dev + 0x948) << 16) | (pitch & 0xFFFFu);
    to[1] = GMEM32(colour + 4);
    to[2] = zeta ? GMEM32(zeta + 4) : 0;
    to[3] = GMEM32(0x002A843Cu) && GMEM32(dev + 0x19F8);
    put = GMEM32(dev);
    if (put >= GMEM32(dev + 4)) {
        g_esp -= 4; GMEM32(g_esp) = 0x00297CD2u;
        sub_0029D540();
        put = g_eax;
    }
    GMEM32(put) = 0x00040000u | NV097_RESOT_DIRECT_SURFACE;
    GMEM32(put + 4) = token;
    put += 8;
    flags = GMEM32(dev + 8);
    if ((flags & 0x100u) && colour == GMEM32(dev + 0x1A04)) {
        GMEM32(dev + 8) = flags & 0xFFFFFEFFu;
        GMEM32(put) = 0x00040130u;
        GMEM32(put + 4) = 0;
        put += 8;
    }
    GMEM32(dev) = put;
    g_esp -= 4; GMEM32(g_esp) = zeta;
    g_esp -= 4; GMEM32(g_esp) = colour;
    g_esp -= 4; GMEM32(g_esp) = 0x00297E6Cu;
    sub_0029E990();
    GMEM32(dev + 0x19FC) = g_eax;
    g_ecx = dev; g_edx = 0x002A5FA8u;
    g_esp -= 4; GMEM32(g_esp) = 0x00297E7Eu;
    sub_0029BD20();
    g_esp -= 4; GMEM32(g_esp) = GMEM32(0x002A847Cu);
    g_esp -= 4; GMEM32(g_esp) = 0x00297E8Au;
    sub_0029B3C0();
    g_esp += 12;                         /* ret 8 */
}

/* sub_0029E6F0(resource, flags), ret 8: 0x1710 at 0x0029E70D has no consumer in the
 * runtime, so with the direct path it is not written. The rest is 0x0029E71F..0x0029E738. */
extern void sub_0029E6F0_gen(void);
extern void sub_0029D640(void);
void sub_0029E6F0(void)
{
    uint32_t resource = GMEM32(g_esp + 4), flags = GMEM32(g_esp + 8);

    if (!nv2a_direct_mode() || (GMEM32(GMEM32(D3D_DEVICE_GLOBAL) + 8) & 4)) {
        sub_0029E6F0_gen();
        return;
    }
    if (!(flags & 0xA0u)) {
        g_esp -= 4; GMEM32(g_esp) = resource;
        g_esp -= 4; GMEM32(g_esp) = 0x0029E72Eu;
        sub_0029D640();
    }
    g_eax = GMEM32(resource + 4) | 0x80000000u;
    g_esp += 12;                         /* ret 8 */
}

/* -- Render state setters (0x0029B130..0x0029C4B0) --
 *
 * Each keeps its stores and calls. A method the runtime reads becomes a token in the
 * same place in the ring; one it does not read (no case in nv2a_pb_exec.c or
 * nv2a_hw_d3d11.inc, and listed unhandled in the logs) is no longer written. Recording
 * stays in the original: those words must land in the recorded buffer. */
#define DIRECT_OFF(dev) (!nv2a_direct_mode() || (GMEM32((dev) + 8) & 4))
#define D3D_DEV GMEM32(D3D_DEVICE_GLOBAL)
static uint32_t ring_room(uint32_t dev, uint32_t ret)
{
    uint32_t put = GMEM32(dev);
    if (put >= GMEM32(dev + 4)) {
        g_esp -= 4; GMEM32(g_esp) = ret;
        sub_0029D540();
        put = g_eax;
    }
    return put;
}
static void direct_token(uint32_t dev, uint32_t ret, uint32_t method, uint32_t param)
{
    uint32_t put = ring_room(dev, ret);
    GMEM32(put) = 0x00040000u | method;
    GMEM32(put + 4) = param;
    GMEM32(dev) = put + 8;
}
/* Keeps a routine's ring words out of the ring: they go to a slot behind one token.
 * Room first, so that the routine does not kick what it is writing; a kick all the
 * same (seen from the count) means the words stay where they are, which is the old
 * path. Not for routines that can reach a fence: D3D patches those words in the ring
 * (0x0029D344). Nested captures belong to the outermost. */
extern long xbox_Nv2aKickTotal(void);
static int s_capture_depth;
static uint32_t s_capture_put;
static long s_capture_kicks;
static void capture_begin(uint32_t dev, uint32_t ret)
{
    uint32_t ecx = g_ecx, edx = g_edx;   /* some of these routines take them as arguments */
    if (s_capture_depth++) return;
    g_esp -= 4; GMEM32(g_esp) = 0x400;
    g_esp -= 4; GMEM32(g_esp) = ret;
    sub_0029D550();
    s_capture_put = ring_room(dev, ret);
    GMEM32(dev) = s_capture_put;
    s_capture_kicks = xbox_Nv2aKickTotal();
    g_ecx = ecx; g_edx = edx;
}
static void capture_end(uint32_t dev, uint32_t ret)
{
    uint32_t end = GMEM32(dev), saved = g_eax, n, token, *to;
    if (--s_capture_depth) return;
    if (end <= s_capture_put || xbox_Nv2aKickTotal() != s_capture_kicks) return;
    n = (end - s_capture_put) / 4;
    if (n > 65536u) return;
    while (!(to = nv2a_direct_up_begin(0, n, &token))) Sleep(1);
    for (uint32_t i = 0; i < n; i++) to[i] = GMEM32(s_capture_put + i * 4);
    GMEM32(s_capture_put) = 0x00040000u | NV097_RESOT_DIRECT_PACKETS;
    GMEM32(s_capture_put + 4) = token;
    GMEM32(dev) = s_capture_put + 8;
    g_eax = saved;
    (void)ret;
}
static uint32_t guest_byte(uint32_t va) { return (GMEM32(va & ~3u) >> ((va & 3) * 8)) & 0xFFu; }
extern void sub_0029B130_gen(void);
void sub_0029B130(void)                  /* 0x0320, 0x0324 */
{
    if (DIRECT_OFF(D3D_DEV)) { sub_0029B130_gen(); return; }
    GMEM32(0x002A845Cu) = GMEM32(g_esp + 4);
    g_esp += 8;
}
extern void sub_0029B170_gen(void);
void sub_0029B170(void)                  /* 0x1E6C */
{
    if (DIRECT_OFF(D3D_DEV)) { sub_0029B170_gen(); return; }
    GMEM32(0x002A8470u) = GMEM32(g_esp + 4);
    g_esp += 8;
}
extern void sub_0029B1B0_gen(void);
void sub_0029B1B0(void)                  /* FOG_COLOR, R and B swapped as 0x0029B1C8..0x0029B1E8 */
{
    uint32_t dev = D3D_DEV, v = GMEM32(g_esp + 4);
    if (DIRECT_OFF(dev)) { sub_0029B1B0_gen(); return; }
    direct_token(dev, 0x0029B1C4u, NV097_RESOT_DIRECT_FOG_COLOR,
        ((v >> 16) & 0xFFu) | ((v & 0xFFu) << 16) | (v & 0xFF00FF00u));
    GMEM32(0x002A8428u) = v;
    g_esp += 8;
}
static void cull_state(uint32_t dev, uint32_t v, uint32_t ret)
{
    direct_token(dev, ret, NV097_RESOT_DIRECT_CULL,
        v ? ((0x404u + (v != GMEM32(0x002A8448u))) << 16) | 1u : 0u);
    GMEM32(0x002A844Cu) = v;
}
extern void sub_0029B200_gen(void);
void sub_0029B200(void)                  /* CULL_FACE_ENABLE, CULL_FACE */
{
    uint32_t dev = D3D_DEV;
    if (DIRECT_OFF(dev)) { sub_0029B200_gen(); return; }
    cull_state(dev, GMEM32(g_esp + 4), 0x0029B213u);
    g_esp += 8;
}
extern void sub_0029B270_gen(void);
void sub_0029B270(void)                  /* FRONT_FACE, then 0x0029B200 with the current cull */
{
    uint32_t dev = D3D_DEV, v = GMEM32(g_esp + 4);
    if (DIRECT_OFF(dev)) { sub_0029B270_gen(); return; }
    direct_token(dev, 0x0029B283u, NV097_RESOT_DIRECT_FRONT, v);
    GMEM32(0x002A8448u) = v;
    cull_state(dev, GMEM32(0x002A844Cu), 0x0029B213u);
    g_esp += 8;
}
extern void sub_0029B2B0_gen(void);
void sub_0029B2B0(void)                  /* 0x03A4 */
{
    if (DIRECT_OFF(D3D_DEV)) { sub_0029B2B0_gen(); return; }
    GMEM32(0x002A7FF8u) |= 0x200u;
    GMEM32(0x002A8438u) = GMEM32(g_esp + 4);
    g_esp += 8;
}
extern void sub_0029B350_gen(void);
void sub_0029B350(void)                  /* 0x0380; its value is derived only for the method */
{
    if (DIRECT_OFF(D3D_DEV)) { sub_0029B350_gen(); return; }
    GMEM32(0x002A8474u) = GMEM32(g_esp + 4);
    g_esp += 8;
}
extern void sub_0029B3C0_gen(void);
void sub_0029B3C0(void)                  /* 0x0110 and NOP 8 or 0x28, which only the logs read */
{
    uint32_t dev = D3D_DEV, v = GMEM32(g_esp + 4), want = 0;
    if (DIRECT_OFF(dev)) { sub_0029B3C0_gen(); return; }
    if ((guest_byte(0x002A6040u + guest_byte(GMEM32(dev + 0x19F4) + 0xD)) & 0x3Cu) == 0x20u) want = v;
    if (want != (GMEM32(dev + 8) & 1u)) GMEM32(dev + 8) ^= 1u;
    GMEM32(0x002A847Cu) = v;
    g_esp += 8;
}
extern void sub_0029B4C0_gen(void);
void sub_0029B4C0(void)                  /* 0x17BC */
{
    if (DIRECT_OFF(D3D_DEV)) { sub_0029B4C0_gen(); return; }
    GMEM32(0x002A8458u) = GMEM32(g_esp + 4);
    g_esp += 8;
}
extern void sub_0029B520_gen(void);
void sub_0029B520(void)                  /* 0x038C */
{
    if (DIRECT_OFF(D3D_DEV)) { sub_0029B520_gen(); return; }
    GMEM32(0x002A842Cu) = GMEM32(g_esp + 4);
    g_esp += 8;
}
extern void sub_0029B570_gen(void);
void sub_0029B570(void)                  /* 0x038C */
{
    if (DIRECT_OFF(D3D_DEV)) { sub_0029B570_gen(); return; }
    GMEM32(0x002A8430u) = GMEM32(g_esp + 4);
    g_esp += 8;
}
extern void sub_0029B5D0_gen(void);
void sub_0029B5D0(void)                  /* 0x17C4, 0x038C */
{
    uint32_t v = GMEM32(g_esp + 4);
    if (DIRECT_OFF(D3D_DEV)) { sub_0029B5D0_gen(); return; }
    if (v) GMEM32(0x002A7FF8u) |= 0x9000u;
    GMEM32(0x002A8434u) = v;
    g_esp += 8;
}
extern void sub_0029B650_gen(void);
void sub_0029B650(void)                  /* 0x0328 */
{
    if (DIRECT_OFF(D3D_DEV)) { sub_0029B650_gen(); return; }
    GMEM32(0x002A7FF8u) |= 0x200u;
    GMEM32(0x002A8424u) = GMEM32(g_esp + 4);
    g_esp += 8;
}
extern void sub_0029C080_gen(void);
extern void sub_0029AFF0(void);
extern void sub_0029BA00(void);
void sub_0029C080(void)                  /* DEPTH_TEST_ENABLE; 0x1D78 unread. Tail as 0x0029C0CC.. */
{
    uint32_t dev = D3D_DEV, v = GMEM32(g_esp + 4), old;
    if (DIRECT_OFF(dev)) { sub_0029C080_gen(); return; }
    direct_token(dev, 0x0029C093u, NV097_RESOT_DIRECT_DEPTH_TEST, v && GMEM32(dev + 0x19F8));
    old = GMEM32(0x002A843Cu);
    GMEM32(0x002A843Cu) = v;
    if (old == 2 || v == 2) {
        g_esp -= 4; GMEM32(g_esp) = 0x0029C0E6u;
        sub_0029AFF0();
        g_ecx = dev;
        g_esp -= 4; GMEM32(g_esp) = 0x0029C0EDu;
        sub_0029A9F0();
        capture_begin(dev, 0x0029C0F9u);
        g_edx = GMEM32(dev); g_ecx = dev;
        g_esp -= 4; GMEM32(g_esp) = 0x0029C109u;
        sub_0029BA00();
        GMEM32(dev) = g_eax;
        capture_end(dev, 0x0029C109u);
    }
    g_esp += 8;
}
extern void sub_0029C110_gen(void);
void sub_0029C110(void)                  /* 0x1D84, 0x032C */
{
    if (DIRECT_OFF(D3D_DEV)) { sub_0029C110_gen(); return; }
    GMEM32(0x002A8440u) = GMEM32(g_esp + 4);
    g_esp += 8;
}
extern void sub_0029C1A0_gen(void);
void sub_0029C1A0(void)                  /* 0x1D84, 0x0370 */
{
    if (DIRECT_OFF(D3D_DEV)) { sub_0029C1A0_gen(); return; }
    GMEM32(0x002A8444u) = GMEM32(g_esp + 4);
    g_esp += 8;
}
extern void sub_0029C240_gen(void);
void sub_0029C240(void)                  /* 0x1D84 */
{
    if (DIRECT_OFF(D3D_DEV)) { sub_0029C240_gen(); return; }
    GMEM32(0x002A8484u) = GMEM32(g_esp + 4);
    g_esp += 8;
}
extern void sub_0029C2B0_gen(void);
void sub_0029C2B0(void)                  /* 0x1D84 */
{
    if (DIRECT_OFF(D3D_DEV)) { sub_0029C2B0_gen(); return; }
    GMEM32(0x002A8488u) = GMEM32(g_esp + 4);
    g_esp += 8;
}
extern void sub_0029C3E0_gen(void);
void sub_0029C3E0(void)                  /* 0x1D7C unread; the calls as 0x0029C3F3, 0x0029C446 */
{
    uint32_t dev = D3D_DEV;
    if (DIRECT_OFF(dev)) { sub_0029C3E0_gen(); return; }
    GMEM32(0x002A8460u) = GMEM32(g_esp + 4);
    g_ecx = dev;
    g_esp -= 4; GMEM32(g_esp) = 0x0029C3F8u;
    sub_0029A9F0();
    capture_begin(dev, 0x0029C442u);
    g_edx = GMEM32(dev); g_ecx = dev;
    g_esp -= 4; GMEM32(g_esp) = 0x0029C44Bu;
    sub_0029BA00();
    GMEM32(dev) = g_eax;
    capture_end(dev, 0x0029C44Bu);
    g_esp += 8;
}
extern void sub_0029C460_gen(void);
void sub_0029C460(void)                  /* 0x1D7C */
{
    if (DIRECT_OFF(D3D_DEV)) { sub_0029C460_gen(); return; }
    GMEM32(0x002A8464u) = GMEM32(g_esp + 4);
    g_esp += 8;
}
extern void sub_0029C4B0_gen(void);
void sub_0029C4B0(void)                  /* 0x1D7C */
{
    if (DIRECT_OFF(D3D_DEV)) { sub_0029C4B0_gen(); return; }
    GMEM32(0x002A8478u) = GMEM32(g_esp + 4);
    g_esp += 8;
}

/* -- State flush steps whose methods nothing reads (called from 0x002A21D0) --
 *
 * Fixed-function state: the runtime has no case for these methods, and each routine
 * only writes the ring. Fog is 0x002A12F0 above; the texture, combiner and vertex
 * array steps have consumers and are separate. */
extern void sub_002A0C10_gen(void);
void sub_002A0C10(void)                  /* 0x0318, 0x043C, 0x0A30 */
{
    if (DIRECT_OFF(GMEM32(g_esp + 4))) { sub_002A0C10_gen(); return; }
    g_esp += 8;
}
extern void sub_002A14D0_gen(void);
void sub_002A14D0(void)                  /* 0x0420 and the texture matrices */
{
    if (DIRECT_OFF(GMEM32(g_esp + 4))) { sub_002A14D0_gen(); return; }
    g_esp += 8;
}
extern void sub_002A1FD0_gen(void);
void sub_002A1FD0(void)                  /* 0x0480, 0x0580, 0x0680 */
{
    if (DIRECT_OFF(GMEM32(g_esp + 4))) { sub_002A1FD0_gen(); return; }
    g_esp += 12;
}
/* sub_002A1C80(device, flags), lighting: 0x0294, 0x0298, 0x0314, 0x03B8, 0x03BC and the
 * lights through 0x002A1B40, 0x002A1980, 0x002A1890. Its one store is the result of
 * 0x002A0B70 at device +0x7CC (0x002A1D2D), under the tests 0x002A1C9C..0x002A1CE3. */
extern void sub_002A1C80_gen(void);
extern void sub_002A0B70(void);
void sub_002A1C80(void)
{
    uint32_t dev = GMEM32(g_esp + 4), flags = GMEM32(g_esp + 8);
    if (DIRECT_OFF(dev)) { sub_002A1C80_gen(); return; }
    if ((flags & 0x1000u) && !(GMEM32(GMEM32(dev + 0x790) + 4) & 0x12u) && GMEM32(0x002A8398u) &&
        (GMEM32(dev + 0x1918) & 0xFFFFFFEFu) != 1u) {
        g_esp -= 4; GMEM32(g_esp) = 0x002A1D2Du;
        sub_002A0B70();
        GMEM32(dev + 0x7CC) = g_eax;
    }
    g_esp += 12;
}

/* -- Vertex arrays and texture stages --
 *
 * A slot request cannot fail for want of slots (nv2a_direct.inc); these routines have
 * already changed device state by the time they need one, so they wait instead. */
static uint32_t *direct_slot(uint32_t words, uint32_t *token)
{
    uint32_t *to;
    while (!(to = nv2a_direct_up_begin(0, words, token))) Sleep(1);
    return to;
}
extern void sub_002A21D0(void);
/* sub_002A2250(base index), ecx device, ret 4: 0x002A2284..0x002A23D5. Formats come from the
 * vertex shader's attribute table, offsets from each attribute's stream at the table
 * 0x002AA930 (stride, offset, buffer). A base index of 0 only skips the multiply. */
extern void sub_002A2250_gen(void);
void sub_002A2250(void)
{
    uint32_t dev = g_ecx, base = GMEM32(g_esp + 4), dirty, shader, map, *to, token;

    if (DIRECT_OFF(dev)) { sub_002A2250_gen(); return; }
    dirty = GMEM32(0x002A7FF8u);
    GMEM32(0x002A7FF8u) = dirty & 0xFFFFFFAFu;
    if (dirty & 0x3FFFFF8Fu) {
        g_esp -= 4; GMEM32(g_esp) = 0x002A2278u;
        sub_002A21D0();
    }
    if ((dirty & 0x40000000u) || (!(dirty & 0x40u) && GMEM32(dev + 0x20) == base)) {
        g_esp += 8;
        return;
    }
    GMEM32(dev + 0x20) = base;
    shader = GMEM32(dev + 0x790);
    map = 0x00336620u + (GMEM32(shader + 4) & 0x10u);
    to = direct_slot(34, &token);
    to[0] = (dirty & 0x10u) != 0;
    to[17] = 0;
    for (uint32_t i = 0; i < 16; i++) {
        uint32_t attr = shader + guest_byte(map + i) * 16, stream = 0x002AA930u + GMEM32(attr + 0x14) * 12;
        uint32_t format = GMEM32(attr + 0x1C), buffer = GMEM32(stream + 8);
        to[1 + i] = (GMEM32(stream) << 8) + format;
        if (format != 2 && buffer) {
            to[17] |= 1u << i;
            to[18 + i] = GMEM32(stream) * base + GMEM32(buffer + 4) + GMEM32(attr + 0x18) + GMEM32(stream + 4);
        }
    }
    direct_token(dev, 0x002A22BFu, NV097_RESOT_DIRECT_VERTEX_STATE, token);
    g_esp += 8;                          /* ret 4 */
}
/* sub_002A23F0, ecx device, ret: the formats for inline vertices, and the walk through
 * them that DrawVerticesUP copies by (0x002A2414..0x002A2522). */
extern void sub_002A23F0_gen(void);
void sub_002A23F0(void)
{
    uint32_t dev = g_ecx, dirty = GMEM32(0x002A7FF8u), shader, map, *to, token;
    uint32_t pairs = 0, words = 0, end = 0, first = 0;

    if (DIRECT_OFF(dev)) { sub_002A23F0_gen(); return; }
    if (dirty & 0x3FFFFF8Fu) {
        g_esp -= 4; GMEM32(g_esp) = 0x002A2407u;
        sub_002A21D0();
        dirty = GMEM32(0x002A7FF8u);
    }
    if (!(dirty & 0x20u)) {
        g_esp += 4;
        return;
    }
    GMEM32(0x002A7FF8u) = (dirty & 0xFFFFFFDFu) | 0x50u;
    shader = GMEM32(dev + 0x790);
    map = 0x00336620u + (GMEM32(shader + 4) & 0x10u);
    to = direct_slot(34, &token);
    to[0] = 1;
    to[17] = 0;
    for (uint32_t i = 0; i < 16; i++) {
        uint32_t attr = shader + guest_byte(map + i) * 16, format = GMEM32(attr + 0x1C);
        to[1 + i] = format;
        if (format != 2) {
            uint32_t at = GMEM32(attr + 0x18);
            uint32_t n = (guest_byte(0x002A61E8u + ((format >> 4) & 0xF)) * guest_byte(0x002A61E0u + (format & 0xF)) + 3) >> 2;
            if (!pairs) {
                first = at;
                GMEM32(dev + 0xBC4) = n;
                pairs = 1;
            } else if (at == end) {
                GMEM32(dev + 0xBBC + pairs * 8) += n;
            } else {
                GMEM32(dev + 0xBC0 + pairs * 8) = at - end;
                GMEM32(dev + 0xBC4 + pairs * 8) = n;
                pairs++;
            }
            words += n;
            end = at + n * 4;
        }
    }
    GMEM32(dev + 0xBB8) = words;
    GMEM32(dev + 0xC44) = pairs;
    GMEM32(dev + 0xBBC) = first;
    GMEM32(dev + 0xBC0) = first - end;
    direct_token(dev, 0x002A2450u, NV097_RESOT_DIRECT_VERTEX_STATE, token);
    g_esp += 4;                          /* ret */
}
/* sub_0029AC50(declaration, streams, table), ret 0xC: a null declaration has no ring
 * words and stays as it is. Otherwise 0x0029ACCC..0x0029ADF4. */
extern void sub_0029AC50_gen(void);
extern void sub_00298E90(void);
void sub_0029AC50(void)
{
    uint32_t decl = GMEM32(g_esp + 4), count = GMEM32(g_esp + 8), table = GMEM32(g_esp + 12);
    uint32_t dev = D3D_DEV, held, *to, token;

    if (!decl || DIRECT_OFF(dev)) { sub_0029AC50_gen(); return; }
    for (uint32_t i = 0; i < count; i++) GMEM32(GMEM32(table + i * 12)) += 0x80000u;
    held = 0;
    while (held < GMEM32(dev + 0xAF4)) {
        uint32_t buffer = GMEM32(dev + 0xAF8 + held * 12), refs;
        GMEM32(buffer + 8) = GMEM32(dev + 0x2C);
        refs = GMEM32(buffer) + 0xFFF80000u;
        GMEM32(buffer) = refs;
        if (!(refs & 0x0078FFFFu)) {
            g_esp -= 4; GMEM32(g_esp) = buffer;
            g_esp -= 4; GMEM32(g_esp) = 0x0029AD26u;
            sub_00298E90();
        }
        held++;
    }
    GMEM32(0x002A7FF8u) = (GMEM32(0x002A7FF8u) & 0xFFFFFF8Fu) | 0x40000000u;
    GMEM32(dev + 0xAF0) = decl;
    GMEM32(dev + 0xAF4) = count;
    for (uint32_t i = 0; i < count * 3; i++) GMEM32(dev + 0xAF8 + i * 4) = GMEM32(table + i * 4);
    to = direct_slot(34, &token);
    to[0] = 1;
    to[17] = 0xFFFFu;
    for (uint32_t i = 0; i < 16; i++) {
        uint32_t at = decl + 0x13 + i * 16;
        uint32_t stream = table + GMEM32(at) * 12;
        to[18 + i] = GMEM32(at + 4) + GMEM32(GMEM32(stream) + 4) + GMEM32(stream + 8);
        to[1 + i] = (GMEM32(stream + 4) << 8) + GMEM32(at + 8);
    }
    direct_token(dev, 0x0029AD89u, NV097_RESOT_DIRECT_VERTEX_STATE, token);
    g_esp += 16;                         /* ret 0xC */
}
/* sub_002A1100(device, stages), ret 8: for each set bit, a stage's address, control0 and
 * filter from its render-state block at 0x002A8004 + 0x80 per stage, and the copy at
 * device +0x770 (0x002A113B..0x002A12A8). */
extern void sub_002A1100_gen(void);
extern void sub_0029E7D0(void);
void sub_002A1100(void)
{
    uint32_t dev = GMEM32(g_esp + 4), stages = GMEM32(g_esp + 8);

    if (DIRECT_OFF(dev)) { sub_002A1100_gen(); return; }
    for (uint32_t i = 0; i < 4; i++) {
        uint32_t s = 0x002A8004u + i * 0x80, copy = dev + 0x770 + i * 4;
        uint32_t address, control, filter, mag, min, extra = 0x2000, bias, token, *to;
        float lod;
        if (!(stages >> i & 1)) continue;
        address = (((GMEM32(s + 4) << 8) | GMEM32(s)) << 8) |
            GMEM32(0x002A8388u + (GMEM32(s + 0x6C) & 0xFFFFu) * 4) | GMEM32(s - 4);
        control = (GMEM32(s + 0x18) << 26) | GMEM32(s + 0x28) | GMEM32(s + 0x20) | 0x3FFC0u;
        if (GMEM32(copy + 0x808)) control |= 0x40000000u;
        mag = GMEM32(s + 0xC);
        min = GMEM32(s + 8);
        if (mag >= 3 || min >= 3) {
            if (mag <= 3 && min <= 3) {
                uint32_t aniso = GMEM32(s + 0x1C);
                if (!aniso) mag = min = 1;
                else { control |= (aniso - 1) << 4; mag = min = 2; }
            } else {
                if (mag == 5 || min == 5) extra = 0x4000;
                extra |= 0x70000u;
                mag = 2; min = 4;
            }
        }
        GMEM32(copy) = control | 0x40000000u;
        lod = (float)(((double)fog_float(s + 0x14) + fog_float(dev + 0x964)) * fog_float(0x00333870u) + fog_float(0x003337D8u));
        memcpy(&bias, &lod, 4);
        g_esp -= 4; GMEM32(g_esp) = bias;
        g_esp -= 4; GMEM32(g_esp) = 0x002A1226u;
        sub_0029E7D0();
        bias = g_eax;
        if ((int32_t)bias < -4096) bias = 0xFFFFF000u;
        else if ((int32_t)bias > 0xFFF) bias = 0xFFFu;
        filter = (bias & 0x1FFFu) | GMEM32(0x002A61BCu + (GMEM32(s + 0x10) + mag * 3) * 4) | (min << 24) |
            (GMEM32(s + 0x2C) >= 0x19 ? 0xC0000000u : GMEM32(s + 0x24)) | extra;
        to = direct_slot(4, &token);
        to[0] = i; to[1] = address; to[2] = control; to[3] = filter;
        direct_token(dev, 0x002A1285u, NV097_RESOT_DIRECT_TEXTURE, token);
    }
    g_esp += 12;                         /* ret 8 */
}

/* -- Routines captured, not rewritten (capture_begin) --
 *
 * Checked: none of these reaches a fence, a kick or an indirect call through direct
 * calls. They still build NV2A methods; the executor decodes them from the slot. */

/* -- Combiner programs, immediate mode, scissor, clear -- */
static uint32_t round_guest(double v)
{
    float f = (float)v;
    uint32_t bits;
    memcpy(&bits, &f, 4);
    g_esp -= 4; GMEM32(g_esp) = bits;
    g_esp -= 4; GMEM32(g_esp) = 0x0029E7D0u;
    sub_0029E7D0();
    return g_eax;
}
/* 0x0029B990, bump-environment words: from the texture stage blocks, or the program's
 * shadow blocks when a combiner program is set. */
static void bump_state(uint32_t dev, uint32_t ret)
{
    uint32_t token, *to = direct_slot(18, &token), from = 0x002A8058u + (GMEM32(dev + 0x780) ? 0x80u : 0u);
    for (uint32_t s = 0; s < 3; s++, from += 0x80)
        for (uint32_t i = 0; i < 6; i++)
            to[s * 6 + i] = GMEM32(from + i * 4);
    direct_token(dev, ret, NV097_RESOT_DIRECT_BUMP, token);
}
/* sub_0029B2F0(factor), ret 4: both factors of all stages, when no program is set. */
extern void sub_0029B2F0_gen(void);
void sub_0029B2F0(void)
{
    uint32_t dev = D3D_DEV, v = GMEM32(g_esp + 4);
    if (DIRECT_OFF(dev)) { sub_0029B2F0_gen(); return; }
    if (!GMEM32(dev + 0x780))
        direct_token(dev, 0x0029B30Du, NV097_RESOT_DIRECT_FACTOR, v);
    GMEM32(0x002A8450u) = v;
    g_esp += 8;
}
/* sub_002A2580(program), ret 4, SetPixelShader: stores as the original; 0x1E74 and 0x1E78
 * have no consumer. */
extern void sub_002A2580_gen(void);
void sub_002A2580(void)
{
    uint32_t dev = D3D_DEV, program = GMEM32(g_esp + 4), old, object, combined, token, *to;

    if (DIRECT_OFF(dev)) { sub_002A2580_gen(); return; }
    old = GMEM32(dev + 0x780);
    GMEM32(dev + 0x780) = program;
    if (!program) {
        GMEM32(0x002A7FF8u) |= 0x4800u;
        if (GMEM32(dev + 0x784)) GMEM32(0x002A7FF8u) |= 0x2000u;
        g_esp -= 4; GMEM32(g_esp) = GMEM32(0x002A8450u);
        g_esp -= 4; GMEM32(g_esp) = 0x002A25D4u;
        sub_0029B2F0();
        bump_state(dev, 0x002A25E0u);
        g_esp += 8;
        return;
    }
    object = GMEM32(program + 8);
    combined = GMEM32(object + 0x24) | GMEM32(object + 0x20);
    if (!combined && GMEM32(dev + 0x784)) GMEM32(0x002A7FF8u) |= 0x2000u;
    GMEM32(dev + 0x784) = combined;
    GMEM32(dev + 0x788) = GMEM32(object + 0xEC) & 0x100u;
    GMEM32(dev + 0x78C) = GMEM32(object + 0xD8);
    GMEM32(0x002A7FF8u) |= 0x4000u;
    if (!(GMEM32(dev + 8) & 0x10u)) {
        for (uint32_t i = 0; i < 0x39; i++) GMEM32(0x002A8200u + i * 4) = GMEM32(object + i * 4);
        GMEM32(0x002A8420u) = GMEM32(object + 0xD8);
    }
    if (!old) bump_state(dev, 0x002A2661u);
    to = direct_slot(0x3A, &token);
    to[0] = combined != 0;
    for (uint32_t i = 0; i < 0x39; i++) to[1 + i] = GMEM32(object + i * 4);
    direct_token(dev, 0x002A2661u, NV097_RESOT_DIRECT_COMBINER, token);
    g_esp += 8;                          /* ret 4 */
}
static void immediate(uint32_t dev, uint32_t ret, uint32_t method, const uint32_t *v, uint32_t n)
{
    uint32_t token, *to = direct_slot(n + 1, &token);
    to[0] = method;
    for (uint32_t i = 0; i < n; i++) to[1 + i] = v[i];
    direct_token(dev, ret, NV097_RESOT_DIRECT_IMMEDIATE, token);
}
extern void sub_002A2C80_gen(void);
void sub_002A2C80(void)                  /* SetVertexData2f(register, x, y), ret 0xC */
{
    uint32_t dev = D3D_DEV, v[2];
    if (DIRECT_OFF(dev)) { sub_002A2C80_gen(); return; }
    v[0] = GMEM32(g_esp + 8); v[1] = GMEM32(g_esp + 12);
    immediate(dev, 0x002A2C93u, 0x1880 + GMEM32(g_esp + 4) * 8, v, 2);
    g_esp += 16;
}
extern void sub_002A2CC0_gen(void);
void sub_002A2CC0(void)                  /* SetVertexData4f(register or -1, x, y, z, w), ret 0x14 */
{
    uint32_t dev = D3D_DEV, reg = GMEM32(g_esp + 4), v[4];
    if (DIRECT_OFF(dev)) { sub_002A2CC0_gen(); return; }
    for (uint32_t i = 0; i < 4; i++) v[i] = GMEM32(g_esp + 8 + i * 4);
    immediate(dev, 0x002A2CD3u, reg == 0xFFFFFFFFu ? 0x1518u : (reg + 0x1A0u) << 4, v, 4);
    g_esp += 24;
}
extern void sub_002A2D20_gen(void);
void sub_002A2D20(void)                  /* SetVertexDataColor(register, colour), ret 8; R and B swap */
{
    uint32_t dev = D3D_DEV, c = GMEM32(g_esp + 8), v;
    if (DIRECT_OFF(dev)) { sub_002A2D20_gen(); return; }
    v = ((c >> 16) & 0xFFu) | ((c & 0xFFu) << 16) | (c & 0xFF00FF00u);
    immediate(dev, 0x002A2D34u, 0x1940 + GMEM32(g_esp + 4) * 4, &v, 1);
    g_esp += 12;
}
extern void sub_002A2D70_gen(void);
void sub_002A2D70(void)                  /* Begin(prim), ret 4 */
{
    uint32_t dev = D3D_DEV;
    if (DIRECT_OFF(dev)) { sub_002A2D70_gen(); return; }
    g_esp -= 4; GMEM32(g_esp) = 0x002A2D7Cu;
    sub_002A21D0();
    direct_token(dev, 0x002A2D88u, NV097_RESOT_DIRECT_BEGIN, GMEM32(g_esp + 4));
    GMEM32(dev + 8) |= 0x800u;
    g_esp += 8;
}
/* sub_002984B0(count, flags, rects), ret 0xC, SetScissors: only the surface clip has a
 * consumer (0x002984E0..0x0029861F, 0x00298675..0x00298696). Rectangles and count are
 * kept at device +0x1B70 and +0x1BF0, as 0x00298772..0x002987A2. */
extern void sub_002984B0_gen(void);
void sub_002984B0(void)
{
    uint32_t dev = D3D_DEV, count = GMEM32(g_esp + 4), flags = GMEM32(g_esp + 8), rects = GMEM32(g_esp + 12);
    uint32_t horizontal, vertical, token, *to;
    double sx = fog_float(dev + 0x958), sy = fog_float(dev + 0x95C), half = fog_float(0x003337D8u);

    if (DIRECT_OFF(dev)) { sub_002984B0_gen(); return; }
    if (!count) {
        uint32_t x = round_guest((double)GMEM32(dev + 0xED0) * sx + half);
        uint32_t y = round_guest((double)GMEM32(dev + 0xED4) * sy + half);
        uint32_t w = round_guest((double)GMEM32(dev + 0xED8) * sx + half);
        uint32_t h = round_guest((double)GMEM32(dev + 0xEDC) * sy + half);
        horizontal = (w << 16) | x; vertical = (h << 16) | y;
    } else if (count == 1 && !flags) {
        uint32_t x = round_guest((double)(int32_t)GMEM32(rects) * sx + half);
        uint32_t y = round_guest((double)(int32_t)GMEM32(rects + 4) * sy + half);
        uint32_t w = round_guest((double)(int32_t)GMEM32(rects + 8) * sx + half) - x;
        uint32_t h = round_guest((double)(int32_t)GMEM32(rects + 12) * sy + half) - y;
        horizontal = (w << 16) | x; vertical = (h << 16) | y;
    } else {
        horizontal = GMEM32(dev + 0x950) << 16; vertical = GMEM32(dev + 0x954) << 16;
    }
    to = direct_slot(2, &token);
    to[0] = horizontal; to[1] = vertical;
    direct_token(dev, 0x002984E0u, NV097_RESOT_DIRECT_CLIP, token);
    for (uint32_t i = 0; i < count * 4; i++) GMEM32(dev + 0x1B70 + i * 4) = GMEM32(rects + i * 4);
    GMEM32(dev + 0x1BF0) = count;
    GMEM32(dev + 0x1BF4) = flags;
    g_esp += 16;
}
/* sub_0029BC50, ret: 0x0029BCC3..0x0029BD17 pokes the GPU's microcode constants through
 * the clear registers; nothing models them, and the next clear rewrites those fields. */
extern void sub_0029BC50_gen(void);
void sub_0029BC50(void)
{
    uint32_t dev = D3D_DEV;
    if (DIRECT_OFF(dev)) { sub_0029BC50_gen(); return; }
    GMEM32(dev + 0x2418) = (GMEM32(dev + 0x2418) & 0xFFFFFFF7u) | (GMEM32(0x002A8494u) ? 8u : 0u);
    GMEM32(dev + 0x241C) = (GMEM32(dev + 0x241C) & 0xE7EFFFFFu) | (GMEM32(0x002A848Cu) ? 0x100000u : 0u) |
        (GMEM32(0x002A8490u) ? 0x8000000u : 0u);
    g_esp += 4;
}
/* sub_00298A50(count, rects, flags, colour, z, stencil), ret 0x18, Clear. The two jump
 * tables (0x00298DF0, 0x00298E18) are read where the original reads them. */
extern void sub_00298A50_gen(void);
extern void sub_0029E990(void);
void sub_00298A50(void)
{
    uint32_t dev = D3D_DEV, count = GMEM32(g_esp + 4), rects = GMEM32(g_esp + 8), flags = GMEM32(g_esp + 12);
    uint32_t colour = GMEM32(g_esp + 16), zbits = GMEM32(g_esp + 20), stencil = GMEM32(g_esp + 24);
    uint32_t target, zeta, format, restore = 0, depth = 0;
    int32_t left, top, right, bottom;
    uint32_t whole[4];

    if (DIRECT_OFF(dev)) { sub_00298A50_gen(); return; }
    zeta = GMEM32(dev + 0x19F8);
    target = GMEM32(dev + 0x19F4);
    format = guest_byte(target + 0xD);
    if (guest_byte(0x002A6040u + format) & 1u) {
        g_esp -= 4; GMEM32(g_esp) = zeta;
        g_esp -= 4; GMEM32(g_esp) = target;
        g_esp -= 4; GMEM32(g_esp) = 0x00298A89u;
        sub_0029E990();
        restore = g_eax;
        direct_token(dev, 0x00298AAAu, NV097_RESOT_DIRECT_FORMAT, (restore & 0xFFFFFDFFu) | 0x100u);
    }
    if ((flags & 0xF0u) && format >= 3 && format - 3 <= 0x19) {
        uint32_t to = GMEM32(0x00298DF0u + guest_byte(0x00298DFCu + format - 3) * 4);
        if (to == 0x00298ADEu)
            colour = ((((colour >> 3) & 0x1F0000u) | (colour & 0xFC00u)) >> 2 | (colour & 0xF8u)) >> 3;
        else if (to == 0x00298AFBu)
            colour = ((((colour >> 3) & 0x1F0000u) | (colour & 0xF800u)) >> 3 | (colour & 0xF8u)) >> 3;
    }
    if (!zeta) {
        flags &= 0xFFFFFFFCu;
        if (!flags) { g_esp += 28; return; }
    }
    if (flags & 1u) {
        uint32_t to = GMEM32(0x00298E18u + (guest_byte(zeta + 0xD) - 0x2A) * 4);
        float z;
        memcpy(&z, &zbits, 4);
        if (to == 0x00298B4Du) {
            int32_t v = (int32_t)round_guest((double)z * fog_float(0x0031CE4Cu));
            depth = v < 0 ? 0 : v > 0xFFFF ? 0xFFFFu : (uint32_t)v;
        } else if (to == 0x00298B7Fu) {
            int32_t v = (int32_t)round_guest((double)z * fog_float(0x0031CE48u));
            depth = (v < 0 ? 0 : v > 0xFFFFFF ? 0xFFFFFFu : (uint32_t)v) << 8;
        } else if ((to == 0x00298BB1u || to == 0x00298BE9u) && zbits != GMEM32(0x003337C0u)) {
            uint32_t words[2];
            double wide;
            memcpy(words, (const void *)((uintptr_t)g_xbox_mem_offset + (to == 0x00298BB1u ? 0x0031CE40u : 0x0031CE38u)), 8);
            memcpy(&wide, words, 8);
            wide *= (double)z;
            memcpy(words, &wide, 8);
            depth = to == 0x00298BB1u ? ((words[1] >> 8) - 0x8000u) & 0xFFFFu
                                      : ((words[1] + 0xF8000000u) & 0xFFFFFFF0u) << 4;
        }
    }
    left = (int32_t)GMEM32(dev + 0xED0); top = (int32_t)GMEM32(dev + 0xED4);
    right = left + (int32_t)GMEM32(dev + 0xED8); bottom = top + (int32_t)GMEM32(dev + 0xEDC);
    whole[0] = (uint32_t)left; whole[1] = (uint32_t)top; whole[2] = (uint32_t)right; whole[3] = (uint32_t)bottom;
    for (uint32_t i = 0; i < (count ? count : 1u); i++) {
        int32_t x0 = (int32_t)(count ? GMEM32(rects + i * 16) : whole[0]);
        int32_t y0 = (int32_t)(count ? GMEM32(rects + i * 16 + 4) : whole[1]);
        int32_t x1 = (int32_t)(count ? GMEM32(rects + i * 16 + 8) : whole[2]);
        int32_t y1 = (int32_t)(count ? GMEM32(rects + i * 16 + 12) : whole[3]);
        double sx = fog_float(dev + 0x958), sy = fog_float(dev + 0x95C), half = fog_float(0x003337D8u);
        uint32_t token, *to;
        if (x0 < left) x0 = left;
        if (y0 < top) y0 = top;
        if (x1 > right) x1 = right;
        if (y1 > bottom) y1 = bottom;
        if (x0 >= x1 || y0 >= y1) continue;
        {
            uint32_t ax = round_guest(x0 * sx + half), bx = round_guest(x1 * sx + half);
            uint32_t ay = round_guest(y0 * sy + half), by = round_guest(y1 * sy + half);
            to = direct_slot(5, &token);
            to[0] = ((bx << 16) - 0x10000u) | ax;
            to[1] = ((by << 16) - 0x10000u) | ay;
            to[2] = depth | stencil;
            to[3] = colour;
            to[4] = flags;
            direct_token(dev, 0x00298D4Du, NV097_RESOT_DIRECT_CLEAR, token);
        }
    }
    if (restore) direct_token(dev, 0x00298DD6u, NV097_RESOT_DIRECT_FORMAT, restore);
    g_esp += 28;                         /* ret 0x18 */
}

/* sub_0029A580(ecx first register, edx source, count words), ret 4: 0x0029A59A..0x0029A5C7,
 * and 0x0029A5CA.. for whole packets of 16. */
extern void sub_0029A580_gen(void);
void sub_0029A580(void)
{
    uint32_t dev = D3D_DEV, first = g_ecx, from = g_edx, count = GMEM32(g_esp + 4), token, *to;
    if (DIRECT_OFF(dev) || !count) { sub_0029A580_gen(); return; }
    to = direct_slot(count + 1, &token);
    to[0] = first;
    for (uint32_t i = 0; i < count; i++) to[1 + i] = GMEM32(from + i * 4);
    direct_token(dev, 0x0029A59Au, NV097_RESOT_DIRECT_CONSTANTS, token);
    g_esp += 8;
}

/* -- Vertex programs --
 *
 * RESOT_DIRECT_PROGRAMS=0 returns these to the captured form, for comparison. */
static int programs_typed(void)
{
    static int on = -1;
    if (on < 0) { const char *e = getenv("RESOT_DIRECT_PROGRAMS"); on = !(e && *e == '0'); }
    return on;
}
extern void sub_00299F70(void);
extern void sub_00299E30(void);
/* 0x0029BA00 takes the ring in edx and returns it: its callers each hold it open. */
static void viewport_captured(uint32_t dev, uint32_t ret)
{
    g_edx = ring_room(dev, ret); g_ecx = dev;
    g_esp -= 4; GMEM32(g_esp) = ret;
    sub_0029BA00();
    GMEM32(dev) = g_eax;
}
static void program_words_token(uint32_t dev, uint32_t ret, uint32_t slot, uint32_t from, uint32_t count)
{
    uint32_t token, *to = direct_slot(count + 1, &token);
    to[0] = slot;
    for (uint32_t i = 0; i < count; i++) to[1 + i] = GMEM32(from + i * 4);
    direct_token(dev, ret, NV097_RESOT_DIRECT_PROGRAM, token);
}
/* A shader object's body at +0x114 is ring words already: packets of up to 32 slots of
 * 0x0B00 (log: 00800B00 first, 205 words for 200 of program). Only their payload is
 * program; loaded whole, the headers shifted it and left a program with no inputs. */
static int program_is_packets(uint32_t from, uint32_t count)
{
    for (uint32_t at = 0; at < count; ) {
        uint32_t w = GMEM32(from + at * 4), n = (w >> 18) & 0x7FFu;
        if ((w & 0xFFFC0003u & ~(0x7FFu << 18)) || (w & 0x1FFCu) != 0x0B00u || !n || at + 1 + n > count) return 0;
        at += 1 + n;
    }
    return 1;
}
static void program_packets_token(uint32_t dev, uint32_t ret, uint32_t slot, uint32_t from, uint32_t count)
{
    uint32_t token, *to = direct_slot(count + 1, &token), out = 1;
    to[0] = slot;
    for (uint32_t at = 0; at < count; ) {
        uint32_t n = (GMEM32(from + at * 4) >> 18) & 0x7FFu;
        at++;
        for (uint32_t i = 0; i < n; i++) to[out++] = GMEM32(from + at++ * 4);
    }
    /* The slot is freed by its own size: only what was copied is program. */
    nv2a_direct_up_trim(token, out);
    direct_token(dev, ret, NV097_RESOT_DIRECT_PROGRAM, token);
}
/* sub_0029A770(handle, slot), ret 8, LoadVertexShader. */
extern void sub_0029A770_gen(void);
void sub_0029A770(void)
{
    uint32_t dev = D3D_DEV, handle = GMEM32(g_esp + 4), slot = GMEM32(g_esp + 8), object = handle - 1;
    if (DIRECT_OFF(dev)) { sub_0029A770_gen(); return; }
    if (!programs_typed() || !program_is_packets(object + 0x114, GMEM32(object + 0xC))) {
        capture_begin(dev, 0x0029A770u); sub_0029A770_gen(); capture_end(dev, 0x0029A770u); return;
    }
    if (!(GMEM32(dev + 8) & 0x10u)) {
        g_esp -= 4; GMEM32(g_esp) = slot;
        g_esp -= 4; GMEM32(g_esp) = object;
        g_esp -= 4; GMEM32(g_esp) = 0x0029A791u;
        sub_00299F70();
    }
    program_packets_token(dev, 0x0029A79Du, slot, object + 0x114, GMEM32(object + 0xC));
    g_esp += 12;
}
/* sub_0029A990(words, count), ret 8. */
extern void sub_0029A990_gen(void);
void sub_0029A990(void)
{
    uint32_t dev = D3D_DEV;
    if (DIRECT_OFF(dev) || !GMEM32(g_esp + 8)) { sub_0029A990_gen(); return; }
    if (!programs_typed()) { capture_begin(dev, 0x0029A990u); sub_0029A990_gen(); capture_end(dev, 0x0029A990u); return; }
    program_words_token(dev, 0x0029A9A3u, 0, GMEM32(g_esp + 4), GMEM32(g_esp + 8));
    g_esp += 12;
}
/* sub_0029A7D0(handle, slot), ret 8, SelectVertexShader. */
extern void sub_0029A7D0_gen(void);
void sub_0029A7D0(void)
{
    uint32_t dev = D3D_DEV, handle = GMEM32(g_esp + 4), slot = GMEM32(g_esp + 8);
    if (DIRECT_OFF(dev)) { sub_0029A7D0_gen(); return; }
    if (!programs_typed()) { capture_begin(dev, 0x0029A7D0u); sub_0029A7D0_gen(); capture_end(dev, 0x0029A7D0u); return; }
    if (handle) {
        uint32_t was = GMEM32(GMEM32(dev + 0x790) + 4), object = handle - 1;
        GMEM32(dev + 0x790) = object;
        GMEM32(dev + 0x794) = handle;
        GMEM32(0x002A7FF8u) |= 0x70u;
        if ((GMEM32(object + 4) ^ was) & 0x13u) {
            GMEM32(0x002A7FF8u) |= 0x1000u;
            viewport_captured(dev, 0x0029A828u);
            direct_token(dev, 0x0029A81Fu, NV097_RESOT_DIRECT_MODE,
                0x80000000u | (6u << 8) | (GMEM32(object + 4) & 1u));
        }
    }
    direct_token(dev, 0x0029A850u, NV097_RESOT_DIRECT_START, slot);
    GMEM32(dev + 0x798) = slot;
    g_esp += 12;
}
/* sub_0029AAE0(handle), ret 4, SetVertexShader. 0x194C..0x1960 have no consumer. */
extern void sub_0029AAE0_gen(void);
void sub_0029AAE0(void)
{
    uint32_t dev = D3D_DEV, handle = GMEM32(g_esp + 4), shader, was, program, object, flags;

    if (DIRECT_OFF(dev)) { sub_0029AAE0_gen(); return; }
    if (!programs_typed()) { capture_begin(dev, 0x0029AAE0u); sub_0029AAE0_gen(); capture_end(dev, 0x0029AAE0u); return; }
    shader = GMEM32(dev + 0x790);
    was = GMEM32(shader + 4);
    program = GMEM32(shader + 0x10);
    if (handle & 1u) {
        object = handle - 1;
        if (guest_byte(handle + 3) & 0x10u) {
            g_esp -= 4; GMEM32(g_esp) = 0;
            g_esp -= 4; GMEM32(g_esp) = handle;
            g_esp -= 4; GMEM32(g_esp) = 0x0029AB17u;
            sub_0029A770();
            g_esp -= 4; GMEM32(g_esp) = 0;
            g_esp -= 4; GMEM32(g_esp) = handle;
            g_esp -= 4; GMEM32(g_esp) = 0x0029AB1Eu;
            sub_0029A7D0();
            g_esp += 8;
            return;
        }
    } else {
        object = 0x002AAB08u;
        g_esp -= 4; GMEM32(g_esp) = handle;
        g_esp -= 4; GMEM32(g_esp) = object;
        g_esp -= 4; GMEM32(g_esp) = 0x0029AB32u;
        sub_00299E30();
    }
    GMEM32(0x002A7FF8u) |= 0x70u;
    if (program != GMEM32(object + 0x10)) GMEM32(0x002A7FF8u) |= 0x400u;
    if (was != GMEM32(object + 4)) GMEM32(0x002A7FF8u) |= 0x1600u;
    GMEM32(dev + 0x790) = object;
    GMEM32(dev + 0x794) = handle;
    GMEM32(dev + 0x798) = 0;
    flags = GMEM32(object + 4);
    if (flags & 2u) {
        viewport_captured(dev, 0x0029ABEBu);
        direct_token(dev, 0x0029AB87u, NV097_RESOT_DIRECT_START, 0);
        direct_token(dev, 0x0029AB87u, NV097_RESOT_DIRECT_MODE, 0x80000000u | (6u << 8));
        g_ecx = dev;
        g_esp -= 4; GMEM32(g_esp) = 0x0029AC11u;
        sub_0029A9F0();
    } else if ((flags ^ was) & 0x12u) {
        direct_token(dev, 0x0029AB87u, NV097_RESOT_DIRECT_MODE, 4u << 8);
        viewport_captured(dev, 0x0029AC39u);
    }
    g_esp += 8;
}

/* -- Viewport -- */
static uint32_t float_bits(double v) { float f = (float)v; uint32_t b; memcpy(&b, &f, 4); return b; }
/* sub_0029BA00, ecx device, edx ring, returns the ring. 0x0394 has no consumer; its depth
 * values are kept at device +0x1BF8.. and +0x1C00.. as the original keeps them. */
extern void sub_0029BA00_gen(void);
extern void sub_0029AEC0(void);
void sub_0029BA00(void)
{
    uint32_t dev = g_ecx, ring = g_edx, mask = guest_byte(dev + 0x1C08), token, *to, have = 0;
    uint32_t offset[4] = {0, 0, 0, 0}, scale[4] = {0, 0, 0, 0}, sent = 1;
    double range = fog_float(dev + 0x940) * fog_float(dev + 0x938) * fog_float(dev + 0x944);

    if (DIRECT_OFF(dev)) { sub_0029BA00_gen(); return; }
    if (GMEM32(GMEM32(dev + 0x790) + 4) & 0x12u) {
        uint32_t buffers = g_esp - 0x20;
        g_esp = buffers;
        g_esp -= 4; GMEM32(g_esp) = buffers + 0x10;
        g_esp -= 4; GMEM32(g_esp) = buffers;
        g_esp -= 4; GMEM32(g_esp) = 0x0029BA28u;
        sub_0029AEC0();
        for (uint32_t i = 0; i < 4; i++) { offset[i] = GMEM32(buffers + i * 4); scale[i] = GMEM32(buffers + 0x10 + i * 4); }
        g_esp = buffers + 0x20;
        sent = !(GMEM32(dev + 8) & 0x200u);
        have = 1;
        if (!(mask & 2u)) {
            if (GMEM32(0x002A843Cu) == 2) {
                GMEM32(dev + 0x1C04) = GMEM32(dev + 0x944);
                GMEM32(dev + 0x1C00) = float_bits(range);
            } else {
                GMEM32(dev + 0x1C00) = 0;
                GMEM32(dev + 0x1C04) = GMEM32(dev + 0x944);
            }
        }
    } else {
        double x = (double)GMEM32(dev + 0xED0) * fog_float(dev + 0x958) + fog_float(dev + 0xEE8);
        double y = (double)GMEM32(dev + 0xED4) * fog_float(dev + 0x95C) + fog_float(dev + 0xEEC);
        if ((GMEM32(dev + 8) & 0x8000u) && GMEM32(0x002A8460u)) {
            x -= fog_float(0x003337D8u);
            y -= fog_float(0x003337D8u);
        }
        offset[0] = float_bits(x); offset[1] = float_bits(y);
        if (!(mask & 1u)) {
            if (GMEM32(0x002A843Cu) == 2) {
                GMEM32(dev + 0x1BFC) = GMEM32(dev + 0x944);
                GMEM32(dev + 0x1BF8) = float_bits(range);
            } else {
                GMEM32(dev + 0x1BF8) = float_bits(fog_float(dev + 0xEE0) * fog_float(dev + 0x944));
                GMEM32(dev + 0x1BFC) = float_bits(fog_float(dev + 0xEE4) * fog_float(dev + 0x944));
            }
        }
    }
    if (sent) {
        to = direct_slot(9, &token);
        to[0] = have;
        for (uint32_t i = 0; i < 4; i++) { to[1 + i] = offset[i]; to[5 + i] = scale[i]; }
        GMEM32(ring) = 0x00040000u | NV097_RESOT_DIRECT_VIEWPORT;
        GMEM32(ring + 4) = token;
        ring += 8;
    }
    g_eax = ring;
    g_esp += 4;                          /* ret */
}
/* sub_0029A9F0, ecx device, ret: the fixed-function vertex program's constants and body,
 * for shaders flagged so (0x0029A9F9). Table by fog mode, 0x0029AA11..0x0029AA2F. */
extern void sub_0029A9F0_gen(void);
void sub_0029A9F0(void)
{
    uint32_t dev = g_ecx, table, words, token, *to;
    double z, k;

    if (DIRECT_OFF(dev)) { sub_0029A9F0_gen(); return; }
    if (!programs_typed()) { capture_begin(dev, 0x0029A9F0u); sub_0029A9F0_gen(); capture_end(dev, 0x0029A9F0u); return; }
    if (!(GMEM32(GMEM32(dev + 0x790) + 4) & 2u)) { g_esp += 4; return; }
    if (!GMEM32(0x002A8374u)) { table = 0x002A63D0u; words = 0x30; }
    else if (GMEM32(dev + 8) & 2u) { table = 0x002A6320u; words = 0x2C; }
    else { table = 0x002A6260u; words = 0x30; }
    z = GMEM32(0x002A843Cu) == 2 ? fog_float(dev + 0x944) * fog_float(dev + 0x940) : fog_float(0x003337A0u);
    k = (GMEM32(dev + 8) & 0x8000u) && GMEM32(0x002A8460u) ? fog_float(0x003337D8u) : fog_float(0x003337C0u);
    to = direct_slot(9, &token);
    to[0] = 0;
    to[1] = GMEM32(dev + 0x958);
    to[2] = GMEM32(dev + 0x95C);
    to[3] = GMEM32(dev + 0x944);
    to[4] = float_bits(z);
    to[5] = float_bits(fog_float(dev + 0xEE8) - k);
    to[6] = float_bits(fog_float(dev + 0xEEC) - k);
    to[7] = 0;
    to[8] = 0;
    direct_token(dev, 0x0029AA3Du, NV097_RESOT_DIRECT_CONSTANTS, token);
    program_words_token(dev, 0x0029AA3Du, 0, table, words);
    g_esp += 4;                          /* ret */
}

/* -- Shader stages and fixed-function combiners -- */
/* 0x002A0D94..0x002A0E2F, a stage with no program: its texture's kind. */
static uint32_t stage_kind(uint32_t mode, uint32_t address, int checks_address)
{
    if ((int32_t)mode < 0) return 0;
    if (checks_address && address == 0x19) return 6;
    if (checks_address && address == 0x1A) return 7;
    if (mode & 4u) return 3;
    if ((mode & 0x40000000u) || (mode & 0xF0u) == 0x30u) return 2;
    return 1;
}
/* 0x002A0EFA..0x002A0F6E, a stage in a program that adapts to its texture. */
static uint32_t program_kind(uint32_t kind, uint32_t mode)
{
    if ((int32_t)mode < 0 && kind != 4 && kind != 5 && kind != 0xA && kind != 0x11) return 0;
    if (kind >= 1 && kind <= 3) {
        if (mode & 4u) return 3;
        return (mode & 0x40000000u) || (mode & 0xF0u) == 0x30u ? 2 : 1;
    }
    if (kind == 0xD || kind == 0xE) return mode & 4u ? 0xEu : 0xDu;
    return kind;
}
/* sub_002A0D80(device), ret 4: SHADER_STAGE_PROGRAM. */
extern void sub_002A0D80_gen(void);
void sub_002A0D80(void)
{
    uint32_t dev = GMEM32(g_esp + 4), program;

    if (DIRECT_OFF(dev)) { sub_002A0D80_gen(); return; }
    if (!GMEM32(dev + 0x780)) {
        program = stage_kind(GMEM32(dev + 0x18), GMEM32(0x002A8130u), 1) << 15 |
            stage_kind(GMEM32(dev + 0x14), GMEM32(0x002A80B0u), 1) << 10 |
            stage_kind(GMEM32(dev + 0x10), GMEM32(0x002A8030u), 1) << 5 |
            stage_kind(GMEM32(dev + 0xC), 0, 0);
    } else {
        program = GMEM32(dev + 0x78C);
        if (GMEM32(dev + 0x788)) {
            program = program_kind((program >> 15) & 0x1Fu, GMEM32(dev + 0x18)) << 15 |
                program_kind((program >> 10) & 0x1Fu, GMEM32(dev + 0x14)) << 10 |
                program_kind((program >> 5) & 0x1Fu, GMEM32(dev + 0x10)) << 5 |
                program_kind(program & 0x1Fu, GMEM32(dev + 0xC));
        }
    }
    direct_token(dev, 0x002A10E9u, NV097_RESOT_DIRECT_STAGES, program);
    g_esp += 8;
}
/* sub_002A55F0(device, flags), ret 8, returns flags: compiles the stage states into
 * combiners, 1.3 KB of table-driven code kept as it is. Only its result moves: what it
 * wrote at 0x002A5ACA.. is read back here, here on the title's thread, and leaves as
 * fields. The executor sees no method. 0x03B8 after them has no consumer. */
extern void sub_002A55F0_gen(void);
void sub_002A55F0(void)
{
    uint32_t dev = GMEM32(g_esp + 4), at, token, *to, result;

    if (DIRECT_OFF(dev) || GMEM32(dev + 0x780) || s_capture_depth) { sub_002A55F0_gen(); return; }
    capture_begin(dev, 0x002A55F0u);
    sub_002A55F0_gen();
    result = g_eax;
    at = s_capture_put;
    if (GMEM32(at) == 0x00041E60u && GMEM32(at + 8) == 0x00200AC0u && GMEM32(at + 0x2C) == 0x00201E40u &&
        GMEM32(at + 0x50) == 0x00200260u && GMEM32(at + 0x74) == 0x00200AA0u &&
        xbox_Nv2aKickTotal() == s_capture_kicks) {
        s_capture_depth--;
        to = direct_slot(33, &token);
        to[0] = GMEM32(at + 4);
        for (uint32_t i = 0; i < 8; i++) {
            to[1 + i] = GMEM32(at + 0xC + i * 4);
            to[9 + i] = GMEM32(at + 0x30 + i * 4);
            to[17 + i] = GMEM32(at + 0x54 + i * 4);
            to[25 + i] = GMEM32(at + 0x78 + i * 4);
        }
        GMEM32(at) = 0x00040000u | NV097_RESOT_DIRECT_FIXED_COMBINER;
        GMEM32(at + 4) = token;
        GMEM32(dev) = at + 8;
    } else {
        capture_end(dev, 0x002A55F0u);
    }
    g_eax = result;
}

/* sub_0029BD20, ecx device, edx passed on, ret: the surface scale from the render target.
 * Stores as 0x0029BEDE..0x0029BFDE; 0x0380 and 0x1D7C have no consumer. */
extern void sub_0029BD20_gen(void);
extern void sub_00297F30(void);
static uint32_t surface_width(uint32_t s)
{
    uint32_t size = GMEM32(s + 0x10);
    return size ? (size & 0xFFFu) + 1 : 1u << ((GMEM32(s + 0xC) >> 20) & 0xF);
}
static uint32_t surface_height(uint32_t s)
{
    uint32_t size = GMEM32(s + 0x10);
    return size ? ((size >> 12) & 0xFFFu) + 1 : 1u << (guest_byte(s + 0xF) & 0xF);
}
void sub_0029BD20(void)
{
    uint32_t dev = g_ecx, arg = g_edx, target, antialias, width, height, format;
    double sx, sy, smallest, half = fog_float(0x003337D8u);

    if (DIRECT_OFF(dev)) { sub_0029BD20_gen(); return; }
    target = GMEM32(dev + 0x19F4);
    if (target == GMEM32(dev + 0x1A04)) {
        uint32_t from = GMEM32(dev + 0x1A08), limit;
        antialias = GMEM32(0x002A8468u);
        sx = fog_float(dev + 0x968);
        sy = fog_float(dev + 0x96C);
        width = round_guest((double)surface_width(from) * sx + half);
        height = round_guest((double)surface_height(from) * sy + half);
        limit = surface_width(target);
        if (width >= limit) width = limit;
        limit = surface_height(target);
        if (height >= limit) height = limit;
    } else {
        antialias = GMEM32(0x002A846Cu);
        sx = sy = fog_float(0x003337A0u);
        sx = 1.0;
        width = surface_width(target);
        height = surface_height(target);
    }
    format = GMEM32(dev + 0x19FC);
    GMEM32(dev + 8) &= 0xFFFF7FFFu;
    if (antialias && !(format & 0x200u)) {
        sx *= half;
        GMEM32(dev + 8) |= 0x8000u;
        width = (width + 1) >> 1;
        if (antialias == 2) {
            sy *= half;
            height = (height + 1) >> 1;
            format |= 0x2000u;
        } else {
            format |= 0x1000u;
        }
    }
    GMEM32(dev + 0x95C) = float_bits(sy);
    GMEM32(dev + 0x958) = float_bits(sx);
    GMEM32(dev + 0x950) = width;
    GMEM32(dev + 0x954) = height;
    smallest = sx < sy ? sx : sy;
    direct_token(dev, 0x0029BF74u, NV097_RESOT_DIRECT_FORMAT, format);
    if (float_bits(smallest) != GMEM32(dev + 0x960)) {
        GMEM32(dev + 0x960) = float_bits(smallest);
        GMEM32(dev + 0x964) = GMEM32(0x002A64A0u + round_guest(smallest + smallest + half) * 4);
        GMEM32(0x002A7FF8u) |= 0x10Fu;
    }
    if (GMEM32(GMEM32(dev + 0x790) + 4) & 2u) {
        g_ecx = dev;
        g_esp -= 4; GMEM32(g_esp) = 0x0029C063u;
        sub_0029A9F0();
    }
    g_esp -= 4; GMEM32(g_esp) = arg;
    g_esp -= 4; GMEM32(g_esp) = 0x0029C06Du;
    sub_00297F30();
    g_esp += 4;                          /* ret */
}

/* sub_0029A870(mode), ret 4: the lighting set-up. Only the constants at register 0x3C
 * (0x002A6230, 12 words) have a consumer: the matrices 0x0840.. through 0x0029CD80 and
 * 0x09D0, 0x0A50 do not. */
extern void sub_0029A870_gen(void);
void sub_0029A870(void)
{
    uint32_t dev = D3D_DEV, mode = GMEM32(g_esp + 4), token, *to;

    if (DIRECT_OFF(dev)) { sub_0029A870_gen(); return; }
    if (mode & 0x10u) GMEM32(dev + 8) |= 0x200u;
    else GMEM32(dev + 8) &= 0xFFFFFDFFu;
    mode &= 0xFFFFFFEFu;
    GMEM32(dev + 0x1918) = mode;
    if (!mode) {
        GMEM32(0x002A7FF8u) |= 0x1600u;
        to = direct_slot(13, &token);
        to[0] = 0x3C;
        for (uint32_t i = 0; i < 12; i++) to[1 + i] = GMEM32(0x002A6230u + i * 4);
        direct_token(dev, 0x0029A8B8u, NV097_RESOT_DIRECT_CONSTANTS, token);
    }
    g_esp += 8;
}
/* sub_002A2DB0, ret: immediate mode's end, flags and fence as 0x002A2DD5..0x002A2DEB. */
extern void sub_002A2DB0_gen(void);
void sub_002A2DB0(void)
{
    uint32_t dev = D3D_DEV, flags;

    if (DIRECT_OFF(dev)) { sub_002A2DB0_gen(); return; }
    direct_token(dev, 0x002A2DC3u, NV097_RESOT_DIRECT_END, 0);
    flags = GMEM32(dev + 8);
    GMEM32(dev + 8) = flags & 0xFFFFE7FFu;
    if (flags & 0x1000u) {
        g_esp -= 4; GMEM32(g_esp) = 1;
        g_esp -= 4; GMEM32(g_esp) = 0x002A2DF0u;
        sub_0029D1E0();
    }
    g_esp += 4;
}
/* sub_00299A50, esi device, ret: rotates the swap chain's surfaces and flips. NOP and 0x0110
 * go; the NOP's parameter is never 5, which is all the runtime reads there. */
extern void sub_00299A50_gen(void);
void sub_00299A50(void)
{
    uint32_t dev = g_esi, last, prev, first_addr, first_size;

    if (DIRECT_OFF(dev)) { sub_00299A50_gen(); return; }
    last = GMEM32(dev + 0x1A00);
    prev = GMEM32(dev + 0x1A00 + last * 4);
    first_addr = GMEM32(prev + 4);
    first_size = GMEM32(prev + 8);
    for (uint32_t i = last - 1; i; i--) {
        uint32_t next = GMEM32(dev + 0x1A00 + i * 4);
        GMEM32(prev + 4) = GMEM32(next + 4);
        GMEM32(prev + 8) = GMEM32(next + 8);
        prev = next;
    }
    GMEM32(prev + 4) = first_addr;
    GMEM32(prev + 8) = first_size;
    if (GMEM32(dev + 0x19F4) == GMEM32(dev + 0x1A04) || GMEM32(0x002A83FCu) == 0x80000000u) {
        direct_token(dev, 0x00299AA3u, NV097_RESOT_DIRECT_FLIP, 1);
    } else {
        GMEM32(dev + 8) |= 0x100u;
        direct_token(dev, 0x00299AA3u, NV097_RESOT_DIRECT_FLIP, 0);
    }
    direct_token(dev, 0x00299AA3u, NV097_RESOT_DIRECT_COLOR, GMEM32(GMEM32(dev + 0x1A04) + 4));
    g_esp += 4;
}
