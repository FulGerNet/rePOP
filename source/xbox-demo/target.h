/* Prince of Persia: The Sands of Time, Xbox demo (E3 2003 build).
 *
 * default.xbe: 3,526,656 bytes, built 2003-07-18, XDK 5558,
 * SHA-256 79C1A47828630AB0D4E5DD19B1FD036FFA58EA2C0FE729B0D3456DAC3E79D4F5.
 * Every address below is a virtual address in that file.
 */
#ifndef RESOT_TARGET_H
#define RESOT_TARGET_H

/* UI uses the projection at 0x00650C20 (sub_000EF340 -> 0x000EF140).
 * Flat pause layers need to undo its Hor+ narrowing on the host; the HUD
 * must avoid a second narrowing. */
#define RESOT_PROJECTED_UI 1

#define RESOT_TARGET_ID    "xbox-demo"
#define RESOT_TARGET_NAME  "Prince of Persia: The Sands of Time (Xbox demo)"

/* XBE entry point (XAPI start-up; the game's own main is 0x000110B0). */
#define RESOT_ENTRY_POINT  0x0027FC6C

/* D3D fences: device pointer global, last fence issued (sub_0029D1E0) and
 * pointer to the GPU-written time (sub_0029D290 spins on it at 0x0029D3C0). */
#define RESOT_D3D_DEVICE_GLOBAL  0x002A8498
#define RESOT_D3D_FENCE_ISSUED   0x2C
#define RESOT_D3D_FENCE_GPU_PTR  0x30

/* Jade world bookkeeping (0x00019890 / 0x00019A40), for crash reports. */
#define RESOT_JADE_WORLD_CURRENT  0x0034AC38
#define RESOT_JADE_ACTIVE_BEGIN   0x0034AC50
#define RESOT_JADE_ACTIVE_END     0x0034AC44
#define RESOT_JADE_PENDING_MODE   0x0034AC5C
#define RESOT_JADE_STATE_PTR      0x0064D1DC
#define RESOT_JADE_STATE_FIELD    0x3C   /* read at 0x000198F8 */

/* Jade camera: field of view in radians at +0x0C, read with fptan by the
 * camera set-up sub_0008A820 (at 0x0008A94C) and the projection sub_000EF340
 * (at 0x000EF429). Widened for a wide picture by target_hooks.c. */
#define RESOT_JADE_CAMERA_FOV  0x0C

/* The DSOUND library section (0x002E9F00, 118,148 bytes). Its code asks the
 * kernel for the physical addresses it programs into the audio processor
 * (MmGetPhysicalAddress through the thunk at 0x0031C8D4, from 0x002EEC2B,
 * 0x002F209A, 0x002F27FF, 0x002F2845, 0x002F28DB and 0x002F32E8). */
#define RESOT_DSOUND_CODE_BEGIN  0x002E9F00
#define RESOT_DSOUND_CODE_END    0x00306C84

#endif
