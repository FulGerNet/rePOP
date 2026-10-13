/* Prince of Persia: The Sands of Time, Xbox retail (NTSC, title 0x5553001D).
 *
 * default.xbe: 4,603,904 bytes, built 2003-10-20, disc version 42753,
 * SHA-256 753C58B191279BF4D1A8B28A936DF36AA222ED566487AB1FBDFCD090E91EE379.
 * Every address below is a virtual address in that file.
 */
#ifndef RESOT_TARGET_H
#define RESOT_TARGET_H

#define RESOT_TARGET_ID    "xbox-retail"
#define RESOT_TARGET_NAME  "Prince of Persia: The Sands of Time (Xbox retail)"

/* XBE entry point. */
#define RESOT_ENTRY_POINT  0x00335753

/* D3D fences: sub_00370080 issues one (it writes method 0x00041D70 at
 * 0x003700BD) and sub_00370140 waits, reading the device pointer from
 * 0x0037B648, the last time issued at +0x2C and the GPU-time pointer at +0x30.
 * Same layout as the demo's D3D. */
#define RESOT_D3D_DEVICE_GLOBAL  0x0037B648
#define RESOT_D3D_FENCE_ISSUED   0x2C
#define RESOT_D3D_FENCE_GPU_PTR  0x30

#endif
