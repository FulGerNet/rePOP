/* Warrior Within retail, title 5553003B, XDK 5849.
 * Facts from the local XBE header; never import SoT virtual addresses. */
#ifndef REWW_TARGET_H
#define REWW_TARGET_H
#define RESOT_TARGET_ID "xbox-retail"
#define RESOT_TARGET_NAME "Prince of Persia: Warrior Within (Xbox retail)"
#define RESOT_XBE_SHA256 "8747A4104EB359DC76C410770FA2F3F64B547077A26E8EA308B2BCCFC964599C"
/* Header +0x128, retail XOR decoding. */
#define RESOT_ENTRY_POINT 0x003D674C
#define RESOT_DEFAULT_EXT_VMA 1
/* DSOUND 0x00519D45..4B obtains GP scratch; 0x00519E97 adds
 * 0x810, writes command 3 at 0x00519E9F and polls for zero at
 * 0x00519EA1/EA4. GP SG table is published to FE802040 at 0051F5A9.
 * Unique normalized matches to the independently verified SoT XDK path. */
#define RESOT_APU_DSP_ACK "gp+0x810"
/* DSOUND section header: [virtual address, virtual address + virtual size). */
#define RESOT_DSOUND_CODE_BEGIN 0x00515720
#define RESOT_DSOUND_CODE_END 0x005342B4
/* WW D3D fence issuer 0x00495740: loads device at 0x00495741,
 * reads +0x2C at 0x00495754 and emits 0x00041D70 at 0x0049577D.
 * Waiter 0x00495800 reads GPU pointer +0x30 at 0x00495807, then
 * issued +0x2C at 0x0049580C. Independently disassembled in this XBE. */
#define RESOT_D3D_DEVICE_GLOBAL 0x004A0F58
#define RESOT_D3D_FENCE_ISSUED 0x2C
#define RESOT_D3D_FENCE_GPU_PTR 0x30
#endif
