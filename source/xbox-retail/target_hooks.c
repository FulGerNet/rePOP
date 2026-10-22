/* Warrior Within retail XDK integration. See docs/WW-HOOKS.md for evidence.
 * These addresses belong to SHA-256 8747A410...64599C only.
 * Code adapted from reSOT's verified XDK wrappers; no Jade/menu/projection
 * addresses or layout are imported. RECOMP_USB=1 selects original XAPI.
 */
#include <stdint.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include "target.h"
#if defined(_MSC_VER)
#define RESOT_TLS __declspec(thread)
#else
#define RESOT_TLS __thread
#endif
extern RESOT_TLS uint32_t g_eax,g_ecx,g_edx,g_esp,g_esi;
extern ptrdiff_t g_xbox_mem_offset;
#define GMEM32(va) (*(volatile uint32_t *)((uintptr_t)g_xbox_mem_offset+(uint32_t)(va)))

extern void xbox_Nv2aKick(void);
extern void xbox_Nv2aWaitClear(uint32_t va, uint32_t mask);
extern void sub_004905A0(void);

#define D3D_DEVICE_GLOBAL  0x004A0F58u   /* [dev] +0x1C28: NV register base */
#define NV_PFB_WC_FLUSH    0x00100410u
#define D3D_SYNC_FLAG      0x004A0AB0u   /* nonzero: wait for an idle GPU */

static void wait_gpu_idle(uint32_t ret)
{
    do {
        g_esp -= 4;
        GMEM32(g_esp) = ret;
        sub_004905A0();                  /* eax != 0 while PGRAPH is busy */
    } while (g_eax);
}

void sub_00495620(void)
{
    uint32_t dev = g_ecx, flags, put, regs;

    g_esp -= 4;
    GMEM32(g_esp) = g_esi;               /* push esi */
    g_esi = dev;
    flags = GMEM32(dev + 8);
    g_eax = flags;
    put = (flags & 4) ? GMEM32(dev + 0x770) : GMEM32(dev);
    g_edx = put;
    if (flags & 0x2000) {                /* 0x00495696 */
        g_eax = GMEM32(dev);
        g_ecx = 0x004A0AA0u - 0x40u;
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
        xbox_Nv2aWaitClear(regs + NV_PFB_WC_FLUSH, 0x10000u);   /* 0x00495660 */
        g_ecx = GMEM32(dev + 0x1C20);
        g_edx = put & 0x0FFFFFFFu;
        GMEM32(g_ecx + 0x40) = g_edx;    /* DMA_PUT */
        xbox_Nv2aKick();
        g_eax = GMEM32(D3D_SYNC_FLAG);
        if (g_eax) {
            wait_gpu_idle(0x00495689u);
            GMEM32(dev + 8) |= 0x2000u;
        }
    }
    g_esi = GMEM32(g_esp);               /* pop esi */
    g_esp += 4;
    g_esp += 4;                          /* ret */
}

void sub_004956D0(void)
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
        xbox_Nv2aWaitClear(regs + NV_PFB_WC_FLUSH, 0x10000u);   /* 0x00495710 */
        g_ecx = GMEM32(dev + 0x1C20);
        g_esi = put & 0x0FFFFFFFu;
        GMEM32(g_ecx + 0x40) = g_esi;    /* DMA_PUT */
        xbox_Nv2aKick();
        wait_gpu_idle(0x00495735u);
    }
    g_esi = GMEM32(g_esp);               /* pop esi */
    g_esp += 4;
    g_esp += 4;                          /* ret */
}

extern uint32_t xbox_HlePadState(uint32_t port, uint8_t *out);
extern void     xbox_HlePadRumble(uint32_t port, uint16_t left, uint16_t right);

extern void sub_00543A59_gen(void);
extern void sub_00543A7B_gen(void);
extern void sub_00543AE8_gen(void);
extern void sub_00543B3E_gen(void);
extern void sub_00543B4A_gen(void);
extern void sub_00543D22_gen(void);
extern void sub_00543D95_gen(void);

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
void sub_00543A59(void)
{
    if (usb_input()) { sub_00543A59_gen(); return; }
    stdcall_return(1u, 1);                 /* a gamepad on port 0 */
}

/* XGetDeviceChanges */
void sub_00543A7B(void)
{
    uint32_t ins, rem;
    if (usb_input()) { sub_00543A7B_gen(); return; }
    ins = stdcall_arg(1);
    rem = stdcall_arg(2);
    if (ins) GMEM32(ins) = 0;              /* nothing comes or goes */
    if (rem) GMEM32(rem) = 0;
    stdcall_return(0, 3);
}

/* XInputOpen */
void sub_00543AE8(void)
{
    if (usb_input()) { sub_00543AE8_gen(); return; }
    stdcall_return(stdcall_arg(1) == 0 ? PAD_HANDLE : 0, 4);
}

/* XInputClose */
void sub_00543B3E(void)
{
    if (usb_input()) { sub_00543B3E_gen(); return; }
    stdcall_return(0, 1);
}

/* XInputGetCapabilities */
void sub_00543B4A(void)
{
    uint32_t caps, i;
    if (usb_input()) { sub_00543B4A_gen(); return; }
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

/* XInputGetState: the unchanged XDK argument/state layout is verified in WW. */


void sub_00543D22(void)
{
    uint32_t st;
    if (usb_input()) { sub_00543D22_gen(); return; }
    st = stdcall_arg(1);
    if (stdcall_arg(0) != PAD_HANDLE || !st) {
        stdcall_return(1167, 2);
        return;
    }
    {
        uint8_t *state=(uint8_t *)((uintptr_t)g_xbox_mem_offset+st);
        uint32_t result=xbox_HlePadState(0,state);
        stdcall_return(result,2);
    }
}

/* XInputSetState */
void sub_00543D95(void)
{
    uint32_t fb;
    if (usb_input()) { sub_00543D95_gen(); return; }
    fb = stdcall_arg(1);
    if (stdcall_arg(0) != PAD_HANDLE || !fb) {
        stdcall_return(1167, 2);
        return;
    }
    /* XINPUT_FEEDBACK: the header's dwStatus, then the rumble at +0x42. The
     * game sends again once dwStatus has left ERROR_IO_PENDING
     * so the request completes at once. */
    xbox_HlePadRumble(0, *(volatile uint16_t *)((uintptr_t)g_xbox_mem_offset + fb + 0x42),
                      *(volatile uint16_t *)((uintptr_t)g_xbox_mem_offset + fb + 0x44));
    GMEM32(fb) = 0;
    stdcall_return(997, 2);                /* ERROR_IO_PENDING, already done */
}

/* RE-WW: observed callback registered at XBE 0x000477BE in slot 0x005BF214.
 * Exact 0x00088730..0x00088765 body: keep its register writes and cdecl RET,
 * or replace the first argument and tail-jump to 0x003A53D0. That entry
 * overwrites flags with TEST EAX,EAX at 0x003A53D4 before its first branch.
 * No synthetic guest return address belongs on the tail path. */
extern void sub_003A53D0(void);
void sub_00088730(void)
{
    g_ecx = GMEM32(g_esp + 4);
    g_eax = GMEM32(g_ecx + 0x0C);
    g_eax = GMEM32(g_eax + 0x134);
    if (g_eax) goto tail;
    g_eax = GMEM32(g_ecx + 0x18);
    if (!g_eax) goto done;
    g_eax = GMEM32(g_eax + 0x14);
    if (!g_eax) goto done;
    g_eax = GMEM32(g_eax);
    if (!g_eax) goto done;
    g_eax = GMEM32(g_eax + 4);
    if (!g_eax) goto done;
tail:
    GMEM32(g_esp + 4) = g_eax;  /* 0x0008875C */
    sub_003A53D0();             /* 0x00088760: JMP, not CALL */
    return;
done:
    g_esp += 4;                /* 0x00088765: RET, caller owns arguments */
}
