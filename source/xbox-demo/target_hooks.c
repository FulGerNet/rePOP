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

#if defined(_MSC_VER)
#define RESOT_TLS __declspec(thread)
#else
#define RESOT_TLS __thread
#endif
extern RESOT_TLS uint32_t g_eax, g_ecx, g_edx, g_esp, g_esi;
extern ptrdiff_t g_xbox_mem_offset;

#define GMEM32(va) (*(volatile uint32_t *)((uintptr_t)g_xbox_mem_offset + (uint32_t)(va)))
#define GMEMF(va)  (*(volatile float *)((uintptr_t)g_xbox_mem_offset + (uint32_t)(va)))

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
    uint8_t *mem = (uint8_t *)(uintptr_t)g_xbox_mem_offset;

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

/* XInputGetState */
void sub_0031C68A(void)
{
    uint32_t st;
    if (usb_input()) { sub_0031C68A_gen(); return; }
    st = stdcall_arg(1);
    if (stdcall_arg(0) != PAD_HANDLE || !st) {
        stdcall_return(1167, 2);
        return;
    }
    stdcall_return(xbox_HlePadState(0, (uint8_t *)((uintptr_t)g_xbox_mem_offset + st)), 2);
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
