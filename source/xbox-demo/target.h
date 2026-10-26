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
#define RESOT_XBE_SHA256   "79C1A47828630AB0D4E5DD19B1FD036FFA58EA2C0FE729B0D3456DAC3E79D4F5"

/* XBE entry point (XAPI start-up; the game's own main is 0x000110B0). */
#define RESOT_ENTRY_POINT  0x0027FC6C

/* D3D fences: device pointer global, last fence issued (sub_0029D1E0) and
 * pointer to the GPU-written time (sub_0029D290 spins on it at 0x0029D3C0). */
#define RESOT_D3D_DEVICE_GLOBAL  0x002A8498
#define RESOT_D3D_FENCE_ISSUED   0x2C
#define RESOT_D3D_FENCE_GPU_PTR  0x30
/* When the GPU is 0x2400 bytes or more behind the fence, sub_0029D290 writes
 * NO_OPERATION 5 after WAIT_FOR_IDLE (0x0029D344-0x0029D359), spins in
 * sub_0029D010 until ([fence] ^ [0xFD400B10]) & 0x1F is zero (0x0029D030)
 * and waits on the KEVENT at device+0x1DBC (0x0029D3D1-0x0029D3EB), whose
 * SignalState it clears at 0x0029D334. Retail's layout differs (target.h). */
#define RESOT_D3D_NOTIFY_EVENT   0x1DBC
#define RESOT_D3D_FENCE_STATUS_SHIFT 0

/* Jade world bookkeeping (0x00019890 / 0x00019A40), for crash reports. */
#define RESOT_JADE_WORLD_CURRENT  0x0034AC38
#define RESOT_JADE_ACTIVE_BEGIN   0x0034AC50
#define RESOT_JADE_ACTIVE_END     0x0034AC44
#define RESOT_JADE_PENDING_MODE   0x0034AC5C
#define RESOT_JADE_STATE_PTR      0x0064D1DC
#define RESOT_JADE_STATE_FIELD    0x3C   /* read at 0x000198F8 */

/* Main loaded world (read at 0x00012782, set after load at 0x0002A4D6),
 * distinct from the world temporarily being updated above. The WOW loader
 * copies 60 name bytes to world+0x184 at 0x000656D0..0x000656F0 and terminates
 * byte 59. This is the name in the BF payload, including scene transitions. */
#define RESOT_JADE_WORLD_LOADED   0x0034A75C
#define RESOT_JADE_WORLD_NAME     0x184
#define RESOT_JADE_WORLD_NAME_SIZE 60

/* The initial load merges WOWs into a synthetic SuperWorld. Resolve its
 * primary WOW key as the game does at 0x0002A0D0..0x0002A126: key -> BF index
 * -> loaded address. Each sorted table is {pair pointer, pair count, ...},
 * with 8-byte key/value pairs (0x000C0F60). The registry has 256 tables. */
#define RESOT_JADE_PRIMARY_WOW_KEY 0x00350D48
#define RESOT_JADE_KEY_INDEX_TABLE 0x00493610
#define RESOT_JADE_LOADED_TABLES   0x0047EC30

/* Streaming root WOW accessor 0x0002DEF0 reads worker+0x400C; the worker
 * pointer is published at 0x0002A6C1. 0x0002D372 writes the root WOW key
 * returned by the WOL parser, separately from its helper dependencies. */
#define RESOT_JADE_STREAM_WORKER  0x00350D4C
#define RESOT_JADE_STREAM_WOW_KEY 0x400C
#define RESOT_JADE_DYNAMIC_LOAD   0x0064D33C /* read at 0x0002DF05 */
#define RESOT_JADE_LOAD_MODE      0x0064D3A4 /* read at 0x0002DF12 */
#define RESOT_JADE_COMPILED_BF    0x003400FC /* read at 0x0002DF1B */

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
