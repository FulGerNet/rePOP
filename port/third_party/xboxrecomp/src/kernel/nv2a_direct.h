/* RE-SoT: contract between the title's graphics calls and the host renderers,
 * for operations recognised before any Xbox command is built for them. See
 * docs/DIRECT-RENDERER.md.
 *
 * Why it exists: nearly all of the demo's draws are D3D's DrawIndexedVertices.
 * It copies the whole index list into the ring, and the executor walks those
 * words back out and re-derives what it derived for the same list last frame.
 *
 * Threads and ownership:
 * - The title thread calls nv2a_direct_prepare with the guest's list. It compares
 *   the list with the record for that address, exactly, and writes one
 *   NV097_RESOT_DIRECT_RUN method to the ring in place of the list. State methods
 *   before it, surfaces, clears and queries stay in the ring, so the token runs
 *   in guest order and every existing wait and fence applies to it.
 * - A record is immutable from the moment prepare returns; the guest may then
 *   change or free its list: nothing reads guest indices afterwards. A changed
 *   list makes a new record.
 * - The executor thread consumes tokens and owns each record's resident entry.
 *   It frees a dropped record once no token for it is pending.
 * - Consuming a token means "encoded into the host queue", as consuming the same
 *   words did: the fence the title waits on follows it in the ring. GPU ranges
 *   in use are protected by SDL (cycled on reset, appended otherwise).
 * - Vertex data is the title's and is compared exactly at each draw. */
#ifndef NV2A_DIRECT_H
#define NV2A_DIRECT_H
#include <stdint.h>
#include "resot_geometry_cache.h"

/* Not a Kelvin method: never reaches anything but the executor's switch. */
#define NV097_RESOT_DIRECT_RUN 0x1FF0
/* Fog state: the parameter is a slot holding enable, mode and the two fog params. */
#define NV097_RESOT_DIRECT_FOG 0x1FEC
/* Immediate mode's end; the flip, with 1 to stall; the colour surface alone. */
#define NV097_RESOT_DIRECT_END 0x1F88
#define NV097_RESOT_DIRECT_FLIP 0x1F84
#define NV097_RESOT_DIRECT_COLOR 0x1F80
/* Holds the final combiner's first word; the second is always 0x1C80 here (0x002A1452). */
#define NV097_RESOT_DIRECT_FINAL 0x1F8C
/* Holds the shader stage program. */
#define NV097_RESOT_DIRECT_STAGES 0x1F94
/* Fixed-function combiners: a slot of control, then colour inputs, colour outputs,
 * alpha inputs and alpha outputs, 8 each. */
#define NV097_RESOT_DIRECT_FIXED_COMBINER 0x1F90
/* Viewport: a slot of a flag (scale present), offset[4], scale[4]. */
#define NV097_RESOT_DIRECT_VIEWPORT 0x1F98
/* Vertex programs. PROGRAM: a slot of load slot and words. START holds the slot. MODE holds
 * mode << 8, and if bit 31 is set the context-write flag in bit 0. */
#define NV097_RESOT_DIRECT_PROGRAM 0x1FA4
#define NV097_RESOT_DIRECT_START 0x1FA0
#define NV097_RESOT_DIRECT_MODE 0x1F9C
/* Vertex constants: a slot of the first register, then the words. */
#define NV097_RESOT_DIRECT_CONSTANTS 0x1FA8
/* Slots, see the matching direct_execute_ function; FACTOR and BEGIN hold the value. */
#define NV097_RESOT_DIRECT_COMBINER 0x1FC8
#define NV097_RESOT_DIRECT_FACTOR 0x1FC4
#define NV097_RESOT_DIRECT_BUMP 0x1FC0
#define NV097_RESOT_DIRECT_IMMEDIATE 0x1FBC
#define NV097_RESOT_DIRECT_BEGIN 0x1FB8
#define NV097_RESOT_DIRECT_CLIP 0x1FB4
#define NV097_RESOT_DIRECT_CLEAR 0x1FB0
#define NV097_RESOT_DIRECT_FORMAT 0x1FAC
/* Words a D3D routine wrote, kept out of the ring: a slot of whole packets, applied in
 * order. Still NV2A methods, decoded by the executor: the bridge for routines not yet
 * rewritten by hand, not their translation. */
#define NV097_RESOT_DIRECT_PACKETS 0x1FCC
/* A pushbuffer D3D would copy into the ring whole (retail RunPushBuffer, 0x00376D40):
 * the parameter is a record of its words, kept across runs and compared word for word
 * by the title before each one. Its Begin, index and End packets are direct draws with
 * resident geometry; every other packet is still applied as an NV2A method, in order. */
#define NV097_RESOT_DIRECT_PUSHBUFFER 0x1F7C
/* Vertex arrays: a slot of 34 words, see direct_execute_arrays_state. */
#define NV097_RESOT_DIRECT_VERTEX_STATE 0x1FD4
/* One texture stage's address, filter and control: a slot of stage and three words. */
#define NV097_RESOT_DIRECT_TEXTURE 0x1FD0
/* Small state, carried in the token's own parameter. Cull: face << 16 | enable,
 * face 0 leaves it as it is. The others hold the value itself. */
#define NV097_RESOT_DIRECT_CULL 0x1FE4
#define NV097_RESOT_DIRECT_FRONT 0x1FE0
#define NV097_RESOT_DIRECT_FOG_COLOR 0x1FDC
#define NV097_RESOT_DIRECT_DEPTH_TEST 0x1FD8
/* Render target: the parameter is a slot holding pitch, colour and zeta offsets and depth test. */
#define NV097_RESOT_DIRECT_SURFACE 0x1FE8
/* DrawVertices: two parameters, prim, then start<<16 | count. Self-contained words. */
#define NV097_RESOT_DIRECT_ARRAYS 0x1FF4
#define NV097_RESOT_DIRECT_ARRAYS_RUN 0x1FF8
/* DrawVerticesUP: the parameter is a slot of copied vertex words, freed when run. */
#define NV097_RESOT_DIRECT_UP 0x1FFC
#define NV_DIRECT_SOURCE_BUDGET (32u<<20)
/* A list whose vertices keep changing (a skinned mesh) would only fill the
 * resident store: past this it stays in the append ring. */
#define NV_DIRECT_MAX_CHANGES 3

typedef struct {
    ResotGeometryKey key;     /* layout, formats, current values and source spans */
    uint8_t *source;          /* copy of the vertex source spans, compared exactly */
    uint32_t bytes;
    uint32_t generation;      /* resident store generation, 0 = never stored */
    uint32_t vertex_offset, index_offset, vertices, indices;
    uint32_t changes;
} NvDirectResident;

typedef struct {
    uint32_t prim, count;
    uint16_t lo, hi;
    NvDirectResident resident; /* executor thread only */
} NvDirectDraw;

/* Read by the host renderer while the executor replays one draw;
 * NULL for everything that arrived through the pushbuffer. */
extern NvDirectDraw *g_nv2a_direct_draw;

#ifdef __cplusplus
extern "C" {
#endif
/* Title thread. 0: use the original path. Otherwise the token's parameter. */
uint32_t nv2a_direct_prepare(uint32_t prim, uint32_t count, uint32_t indices_va);
/* Title thread: room for a user-pointer draw's words, which the caller fills before
 * writing the token. NULL: use the original path. */
uint32_t *nv2a_direct_up_begin(uint32_t prim, uint32_t words, uint32_t *token);
/* Fewer words than asked for turned out to be needed. */
void nv2a_direct_up_trim(uint32_t token, uint32_t words);
int nv2a_direct_mode(void);
/* Title thread: a record for the pushbuffer of `words` words at `va`. 0: use the
 * original path. Otherwise the parameter of NV097_RESOT_DIRECT_PUSHBUFFER. */
uint32_t nv2a_direct_pushbuffer(uint32_t va, uint32_t words);
/* Title thread, before writing a flip token: waits while the executor is more than
 * RESOT_FLIP_AHEAD flips (default 2) behind the title, at most 100 ms. */
void nv2a_direct_flip_wait(void);
/* Title thread: nonzero when nv2a_direct_flip_wait would wait; kick first then. */
int nv2a_direct_flip_behind(void);
#ifdef __cplusplus
}
#endif
#endif
