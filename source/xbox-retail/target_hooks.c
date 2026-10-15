/* Prince of Persia: The Sands of Time, Xbox retail NTSC entry hooks.
 * Addresses verified in SHA-256 753C58B1...1EE379 (2003-10-20).
 * XAPI entry/ret bytes, 25-byte caps and 22-byte state verified in retail XPP:
 *   0x0041172B XGetDevices; 0x0041174D XGetDeviceChanges;
 *   0x00417D4B XInputOpen; 0x00417DA1 XInputClose;
 *   0x00417DAD XInputGetCapabilities; 0x00417F85 XInputGetState;
 *   0x00417FF8 XInputSetState.
 * Retail game call sites: sub_000DBB50 (0x000DBB5C, 0x000DBBD5,
 * 0x000DBBE2, 0x000DBBEF) and sub_000DBC60 (0x000DBC76, 0x000DBCAA).
 * RECOMP_USB=1 runs the original XAPI routines instead.
 */
#include <math.h>
#include <stdint.h>
#include <stddef.h>
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

/* ── Widescreen: Hor+, as in the demo (source/xbox-demo/target_hooks.c) ──
 *
 * The renderer stretches the 640-pixel picture over a wider surface
 * (RECOMP_HW_ASPECT); the projection's horizontal scale shrinks by the same
 * factor so the proportions stay right and more scene shows at the sides.
 *
 * Retail differs from the demo in where the projection lives. sub_000CFC10
 * (the demo's sub_000EF340: same fptan of the camera's field of view at
 * 0x000CFD14) builds it at 0x007682B0 (x scale +0x00, y scale +0x14), copies
 * it inline (rep movsd at 0x000CFE7F) to 0x00440C00 = 0x00440BA0 + 0x60 and
 * calls sub_000CD970 with esi = 0x00440BA0, returning to 0x000CFE8B. The demo
 * narrowed the source before its copy; here both copies are narrowed, which
 * leaves the same values in both places. */
#define PROJ_BUILT    0x007682B0u
#define PROJ_HOLDER   0x00440BA0u
#define PROJ_RET      0x000CFE8Bu

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

void sub_000CD970_enter(void)
{
    if (widen_factor() > 1.0f && GMEM32(g_esp) == PROJ_RET && g_esi == PROJ_HOLDER) {
        GMEMF(PROJ_BUILT) /= s_widen;
        GMEMF(PROJ_HOLDER + 0x60) /= s_widen;
    }
}

/* Culling planes. sub_002FD810 is the demo's sub_0008A500 (Jade's
 * CAM_Engine_ComputePlans, byte for byte apart from addresses): half the field
 * of view (cam +0x0C times the constant at 0x00429354), then the side planes
 * from the cosine sub_000452F0 (returning to 0x002FD835) and the sine
 * sub_00045340 (returning to 0x002FD85C); the up/down calls return to
 * 0x002FD87C and 0x002FD896 and keep the original angle. The side calls get
 * the widened half angle atan(widen * tan h), so what lies only in the new
 * side strips is not culled. */
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

void sub_000452F0_enter(void)
{
    widen_side_plane_angle(0x002FD835u);
}

void sub_00045340_enter(void)
{
    widen_side_plane_angle(0x002FD85Cu);
}

/* Retail XDK KickOff at 0x0036FF60..0x0037000F and
 * 0x00370010..0x0037007A. These retain the retail stores/registers and
 * replace only the WC-flush spin with the host executor's wait/kick.
 * Retail differs from demo: device+0x770 (put), +0x1C20 (DMA),
 * +0x1C28 (NV registers), +0x2478 -> +0x1DE4 (saved put bookkeeping).
 * Busy query: 0x0036AE70; sync flag: 0x0037B1A0; dummy DMA: 0x0037B190.
 */
extern void xbox_Nv2aKick(void);
extern void xbox_Nv2aWaitClear(uint32_t va, uint32_t mask);
extern void sub_0036AE70(void);

#define D3D_DEVICE_GLOBAL  0x0037B648u   /* [dev] +0x1C28: NV register base */
#define NV_PFB_WC_FLUSH    0x00100410u
#define D3D_SYNC_FLAG      0x0037B1A0u   /* nonzero: wait for an idle GPU */

static void wait_gpu_idle(uint32_t ret)
{
    do {
        g_esp -= 4;
        GMEM32(g_esp) = ret;
        sub_0036AE70();                  /* eax != 0 while PGRAPH is busy */
    } while (g_eax);
}

void sub_0036FF60(void)
{
    uint32_t dev = g_ecx, flags, put, regs;

    g_esp -= 4;
    GMEM32(g_esp) = g_esi;               /* push esi */
    g_esi = dev;
    flags = GMEM32(dev + 8);
    g_eax = flags;
    put = (flags & 4) ? GMEM32(dev + 0x770) : GMEM32(dev);
    g_edx = put;
    if (flags & 0x2000) {                /* 0x0036FFD6 */
        g_eax = GMEM32(dev);
        g_ecx = 0x0037B190u - 0x40u;
        GMEM32(dev + 0x1C20) = g_ecx;
        g_eax &= 0x0FFFFFFFu;
        GMEM32(g_ecx + 0x40) = g_eax;
        g_edx = GMEM32(dev + 0x1C20);
        GMEM32(g_edx + 0x44) = g_eax;
        g_eax = GMEM32(dev + 0x2C) - 2;
        g_ecx = GMEM32(dev + 0x30);
        GMEM32(g_ecx) = g_eax;
        g_edx = GMEM32(dev + 0x2478);
        GMEM32(dev + 0x1DE4) = g_edx;
    } else {
        regs = GMEM32(GMEM32(D3D_DEVICE_GLOBAL) + 0x1C28);
        g_eax = regs;
        g_ecx = GMEM32(regs + NV_PFB_WC_FLUSH) | 0x10000u;
        GMEM32(regs + NV_PFB_WC_FLUSH) = g_ecx;
        xbox_Nv2aWaitClear(regs + NV_PFB_WC_FLUSH, 0x10000u);   /* 0x0036FFA0 */
        g_ecx = GMEM32(dev + 0x1C20);
        g_edx = put & 0x0FFFFFFFu;
        GMEM32(g_ecx + 0x40) = g_edx;    /* DMA_PUT */
        xbox_Nv2aKick();
        g_eax = GMEM32(D3D_SYNC_FLAG);
        if (g_eax) {
            wait_gpu_idle(0x0036FFC9u);
            GMEM32(dev + 8) |= 0x2000u;
        }
    }
    g_esi = GMEM32(g_esp);               /* pop esi */
    g_esp += 4;
    g_esp += 4;                          /* ret */
}

void sub_00370010(void)
{
    uint32_t dev = g_ecx, flags, put, regs;

    flags = GMEM32(dev + 8);
    g_eax = flags;
    g_esp -= 4;
    GMEM32(g_esp) = g_esi;               /* push esi */
    put = (flags & 4) ? GMEM32(dev + 0x770) : GMEM32(dev);
    g_esi = put;
    if (!(flags & 0x2000)) {
        regs = GMEM32(GMEM32(D3D_DEVICE_GLOBAL) + 0x1C28);
        g_eax = regs;
        g_edx = GMEM32(regs + NV_PFB_WC_FLUSH) | 0x10000u;
        GMEM32(regs + NV_PFB_WC_FLUSH) = g_edx;
        xbox_Nv2aWaitClear(regs + NV_PFB_WC_FLUSH, 0x10000u);   /* 0x00370050 */
        g_ecx = GMEM32(dev + 0x1C20);
        g_esi = put & 0x0FFFFFFFu;
        GMEM32(g_ecx + 0x40) = g_esi;    /* DMA_PUT */
        xbox_Nv2aKick();
        wait_gpu_idle(0x00370075u);
    }
    g_esi = GMEM32(g_esp);               /* pop esi */
    g_esp += 4;
    g_esp += 4;                          /* ret */
}

extern uint32_t xbox_HlePadState(uint32_t port, uint8_t *out);
extern void     xbox_HlePadRumble(uint32_t port, uint16_t left, uint16_t right);

extern void sub_0041172B_gen(void);
extern void sub_0041174D_gen(void);
extern void sub_00417D4B_gen(void);
extern void sub_00417DA1_gen(void);
extern void sub_00417DAD_gen(void);
extern void sub_00417F85_gen(void);
extern void sub_00417FF8_gen(void);

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
void sub_0041172B(void)
{
    if (usb_input()) { sub_0041172B_gen(); return; }
    stdcall_return(1u, 1);                 /* a gamepad on port 0 */
}

/* XGetDeviceChanges */
void sub_0041174D(void)
{
    uint32_t ins, rem;
    if (usb_input()) { sub_0041174D_gen(); return; }
    ins = stdcall_arg(1);
    rem = stdcall_arg(2);
    if (ins) GMEM32(ins) = 0;              /* nothing comes or goes */
    if (rem) GMEM32(rem) = 0;
    stdcall_return(0, 3);
}

/* XInputOpen */
void sub_00417D4B(void)
{
    if (usb_input()) { sub_00417D4B_gen(); return; }
    stdcall_return(stdcall_arg(1) == 0 ? PAD_HANDLE : 0, 4);
}

/* XInputClose */
void sub_00417DA1(void)
{
    if (usb_input()) { sub_00417DA1_gen(); return; }
    stdcall_return(0, 1);
}

/* XInputGetCapabilities */
void sub_00417DAD(void)
{
    uint32_t caps, i;
    if (usb_input()) { sub_00417DAD_gen(); return; }
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
void sub_00417F85(void)
{
    uint32_t st;
    if (usb_input()) { sub_00417F85_gen(); return; }
    st = stdcall_arg(1);
    if (stdcall_arg(0) != PAD_HANDLE || !st) {
        stdcall_return(1167, 2);
        return;
    }
    stdcall_return(xbox_HlePadState(0, (uint8_t *)((uintptr_t)g_xbox_mem_offset + st)), 2);
}

/* XInputSetState */
void sub_00417FF8(void)
{
    uint32_t fb;
    if (usb_input()) { sub_00417FF8_gen(); return; }
    fb = stdcall_arg(1);
    if (stdcall_arg(0) != PAD_HANDLE || !fb) {
        stdcall_return(1167, 2);
        return;
    }
    /* XINPUT_FEEDBACK: the header's dwStatus, then the rumble at +0x42. The
     * game sends again once dwStatus has left ERROR_IO_PENDING
     * (retail call at 0x000DC2AC), so the request completes at once. */
    xbox_HlePadRumble(0, *(volatile uint16_t *)((uintptr_t)g_xbox_mem_offset + fb + 0x42),
                      *(volatile uint16_t *)((uintptr_t)g_xbox_mem_offset + fb + 0x44));
    GMEM32(fb) = 0;
    stdcall_return(997, 2);                /* ERROR_IO_PENDING, already done */
}
