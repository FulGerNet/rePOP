/* Prince of Persia: The Sands of Time, Xbox demo (E3 2003 build).
 *
 * default.xbe: 3,526,656 bytes, built 2003-07-18, XDK 5558,
 * SHA-256 79C1A47828630AB0D4E5DD19B1FD036FFA58EA2C0FE729B0D3456DAC3E79D4F5.
 * Every address below is a virtual address in that file.
 */
#ifndef RESOT_TARGET_H
#define RESOT_TARGET_H

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

#endif
