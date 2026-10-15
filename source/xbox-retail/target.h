/* Prince of Persia: The Sands of Time, Xbox retail (NTSC, title 0x5553001D).
 *
 * default.xbe: 4,603,904 bytes, built 2003-10-20, disc version 42753,
 * SHA-256 753C58B191279BF4D1A8B28A936DF36AA222ED566487AB1FBDFCD090E91EE379.
 * Every address below is a virtual address in that file.
 */
#ifndef RESOT_TARGET_H
#define RESOT_TARGET_H

/* UI uses the projection built at 0x007682B0 by sub_000CFC10 (copied to
 * 0x00440C00 before sub_000CD970), the one target_hooks.c narrows for Hor+.
 * As in the demo, flat pause layers undo that narrowing on the host. */
#define RESOT_PROJECTED_UI 1

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

/* Jade world bookkeeping, for crash reports. sub_0001F7E0 (the demo's
 * 0x00019890) stores the current world at 0x0001F7EE and reads the state
 * object at 0x0001F847, its state at +0x50 (demo +0x3C) at 0x0001F84C;
 * sub_0001F990 (the demo's 0x00019A40) loads the active list end/begin at
 * 0x0001FA01/0x0001FA07; the pending mode byte gets 0xFE at 0x000112F1. */
#define RESOT_JADE_WORLD_CURRENT  0x0044AA20
#define RESOT_JADE_ACTIVE_BEGIN   0x0044AA38
#define RESOT_JADE_ACTIVE_END     0x0044AA2C
#define RESOT_JADE_PENDING_MODE   0x0044AA44
#define RESOT_JADE_STATE_PTR      0x007584F4
#define RESOT_JADE_STATE_FIELD    0x50

/* DSOUND section at 0x003E53A0, virtual size 0x1CD84. Its calls to the
 * MmGetPhysicalAddress thunk (0x00418210) are at 0x003EA0C6, 0x003ED53A,
 * 0x003EDC9F, 0x003EDCE5, 0x003EDD7B and 0x003EE788. */
#define RESOT_DSOUND_CODE_BEGIN  0x003E53A0
#define RESOT_DSOUND_CODE_END    0x00402124

#endif
