/* reSOT: the volumes of the F8 "Show triggers" view. Jade's editor draws these
 * (GEOzone.c), but its display is compiled out of the Xbox builds, and release
 * memory keeps no object names, so they are recognised by what objects hold:
 *   cyan     a detection zone (ZDE) of an object with no mesh
 *   green    the bounding box of a logic object: AI and no mesh, no zones (how
 *            "TEC" triggers are made; the PoP tools draw that box for them)
 *   magenta  the bounding box of an object with a mesh and ForceInvisible
 * Read only. Layouts: Jade's OBJstruct.h, COLstruct.h and CAMera.h; the world's
 * entries as each XBE walks them (retail 0x00030FB0 and demo 0x00029602, +0x20
 * to +0x14 in eight-byte steps). Zones on bones and solid collision (ColMap) are
 * not drawn. The world's volumes are collected every few views, so a walk costs
 * little; their lines are projected for every view and rasterised by fb_present.c. */
#ifndef RESOT_TRIGGERS_H
#define RESOT_TRIGGERS_H
#include <math.h>
#include "resot_invisible.h"

typedef struct { float x0, y0, x1, y1; uint32_t color; } ResotDebugSegment;
extern void xbox_FramebufferSetDebugSegments(const void *segments, uint32_t count);

#define RESOT_TRIGGER_CYAN    0xFF20FFFFu
#define RESOT_TRIGGER_GREEN   0xFF40FF40u
#define RESOT_TRIGGER_MAGENTA 0xFFFF40FFu
#define RESOT_TRIGGER_SEGMENTS 16384u
#define RESOT_ZONE_ZDE 0x04
#define RESOT_ZONE_BOX 1
#define RESOT_ZONE_SPHERE 2
#define RESOT_ZONE_CYLINDER 3

typedef struct { float m[16]; int scaled; } ResotTriggerMatrix;
typedef struct { float a[3], b[3]; uint32_t color; } ResotTriggerLine;
typedef struct {
    ResotTriggerLine *out;
    uint32_t count;
} ResotTriggerFrame;

static uint32_t s_trigger_camera, s_cheats_frames_for_triggers;

static int resot_trigger_word(uint32_t address, uint32_t *word)
{
    return address && resot_guest_word(address, word);
}
static int resot_trigger_floats(uint32_t address, float *out, unsigned count)
{
    unsigned i;
    for (i = 0; i < count; i++) {
        uint32_t word;
        if (!resot_trigger_word(address + i*4u, &word)) return 0;
        memcpy(&out[i], &word, 4);
        if (!(fabsf(out[i]) < 1000000.0f)) return 0;
    }
    return 1;
}
static void resot_trigger_line(ResotTriggerFrame *f, const float a[3], const float b[3], uint32_t color)
{
    ResotTriggerLine *l;
    if (f->count >= RESOT_TRIGGER_SEGMENTS) return;
    l = &f->out[f->count++];
    memcpy(l->a, a, sizeof l->a); memcpy(l->b, b, sizeof l->b);
    l->color = color;
}
/* One world line into the view; 0 when it lies behind the near plane. */
static int resot_trigger_project(const float *view, float px, float py, float pw,
                                 const ResotTriggerLine *l, ResotDebugSegment *s)
{
    float ca[3], cb[3], wa, wb;
    unsigned i;
    for (i = 0; i < 3; i++) {
        ca[i] = l->a[0]*view[i] + l->a[1]*view[4+i] + l->a[2]*view[8+i] + view[12+i];
        cb[i] = l->b[0]*view[i] + l->b[1]*view[4+i] + l->b[2]*view[8+i] + view[12+i];
    }
    wa = ca[2]*pw; wb = cb[2]*pw;
    if (wa < 0.05f && wb < 0.05f) return 0;
    /* Cut at the near plane, or the far end would mirror across the screen. */
    if (wa < 0.05f || wb < 0.05f) {
        float t = (0.05f - wa)/(wb - wa);
        float x = ca[0] + (cb[0]-ca[0])*t, y = ca[1] + (cb[1]-ca[1])*t;
        if (wa < 0.05f) { ca[0] = x; ca[1] = y; wa = 0.05f; }
        else { cb[0] = x; cb[1] = y; wb = 0.05f; }
    }
    s->x0 = 0.5f + 0.5f*px*ca[0]/wa; s->y0 = 0.5f - 0.5f*py*ca[1]/wa;
    s->x1 = 0.5f + 0.5f*px*cb[0]/wb; s->y1 = 0.5f - 0.5f*py*cb[1]/wb;
    s->color = l->color;
    return 1;
}
/* Row vectors, as Jade's MATH_TransformVertex; the scale stands in Sx, Sy, Sz. */
static void resot_trigger_point(const ResotTriggerMatrix *m, float x, float y, float z, float out[3])
{
    unsigned i;
    if (m->scaled) { x *= m->m[3]; y *= m->m[7]; z *= m->m[11]; }
    for (i = 0; i < 3; i++)
        out[i] = x*m->m[i] + y*m->m[4+i] + z*m->m[8+i] + m->m[12+i];
}
static void resot_trigger_box(ResotTriggerFrame *f, const ResotTriggerMatrix *m,
                              const float lo[3], const float hi[3], uint32_t color)
{
    static const unsigned char edges[12][2] = {{0,1},{1,3},{3,2},{2,0},{4,5},{5,7},{7,6},{6,4},{0,4},{1,5},{2,6},{3,7}};
    float corner[8][3];
    unsigned i;
    for (i = 0; i < 8; i++)
        resot_trigger_point(m, i&1?hi[0]:lo[0], i&2?hi[1]:lo[1], i&4?hi[2]:lo[2], corner[i]);
    for (i = 0; i < 12; i++) resot_trigger_line(f, corner[edges[i][0]], corner[edges[i][1]], color);
}
/* axis 0..2: the circle's normal. */
static void resot_trigger_circle(ResotTriggerFrame *f, const ResotTriggerMatrix *m,
                                 const float c[3], float r, unsigned axis, uint32_t color)
{
    enum { STEPS = 20 };
    float last[3] = {0,0,0};
    unsigned i;
    for (i = 0; i <= STEPS; i++) {
        float a = 6.2831853f*i/STEPS, u = r*cosf(a), v = r*sinf(a), now[3];
        resot_trigger_point(m, c[0] + (axis==0 ? 0 : u), c[1] + (axis==1 ? 0 : axis==0 ? u : v),
                            c[2] + (axis==2 ? 0 : v), now);
        if (i) resot_trigger_line(f, last, now, color);
        memcpy(last, now, sizeof last);
    }
}
/* COL_tdst_Base +4 instance: count at +4, COL_tdst_ZDx pointers at +8. A ZDx is
 * flag, type, bone, design, then its shape at +4 (8 bytes outside the editor).
 * Returns the number of detection zones drawn. */
static unsigned resot_trigger_zones(ResotTriggerFrame *f, const ResotTriggerMatrix *m, uint32_t extended)
{
    uint32_t col = 0, instance = 0, head = 0, list = 0, i, drawn = 0;
    if (!resot_trigger_word(extended, &col) || !resot_trigger_word(col + 4, &instance) ||
        !resot_trigger_word(instance + 4, &head) || !resot_trigger_word(instance + 8, &list)) return 0;
    head &= 255;
    for (i = 0; i < head && i < 16; i++) {
        uint32_t zone = 0, kinds = 0, shape = 0;
        float s[6];
        if (!resot_trigger_word(list + i*4u, &zone) || !resot_trigger_word(zone, &kinds) ||
            !resot_trigger_word(zone + 4, &shape) || !(kinds & RESOT_ZONE_ZDE)) continue;
        switch ((kinds >> 8) & 255) {
        case RESOT_ZONE_BOX:     /* COL_tdst_Box: max, then min. */
            if (resot_trigger_floats(shape, s, 6)) { resot_trigger_box(f, m, s+3, s, RESOT_TRIGGER_CYAN); drawn++; }
            break;
        case RESOT_ZONE_SPHERE:  /* Centre, radius. */
            if (resot_trigger_floats(shape, s, 4)) {
                unsigned axis;
                for (axis = 0; axis < 3; axis++) resot_trigger_circle(f, m, s, s[3], axis, RESOT_TRIGGER_CYAN);
                drawn++;
            }
            break;
        case RESOT_ZONE_CYLINDER: /* Centre, radius, height along local z. */
            if (resot_trigger_floats(shape, s, 5)) {
                float top[3] = {s[0], s[1], s[2] + s[4]}, a[3], b[3];
                unsigned k;
                resot_trigger_circle(f, m, s, s[3], 2, RESOT_TRIGGER_CYAN);
                resot_trigger_circle(f, m, top, s[3], 2, RESOT_TRIGGER_CYAN);
                for (k = 0; k < 4; k++) {
                    float dx = k==0 ? s[3] : k==1 ? -s[3] : 0, dy = k==2 ? s[3] : k==3 ? -s[3] : 0;
                    resot_trigger_point(m, s[0]+dx, s[1]+dy, s[2], a);
                    resot_trigger_point(m, top[0]+dx, top[1]+dy, top[2], b);
                    resot_trigger_line(f, a, b, RESOT_TRIGGER_CYAN);
                }
                drawn++;
            }
            break;
        }
    }
    return drawn;
}
/* GMin, GMax follow the world's axes around the position; an oriented volume
 * (identity 0x00080000) also has LMin, LMax at +0x30, in the object's axes. */
static int resot_trigger_bounds(ResotTriggerFrame *f, const ResotTriggerMatrix *m, uint32_t identity,
                                uint32_t volume, uint32_t color)
{
    float b[6];
    if (identity & 0x00080000u) {
        if (!resot_trigger_floats(volume + 0x30, b, 6) || !(b[0] < b[3] || b[1] < b[4] || b[2] < b[5])) return 0;
        resot_trigger_box(f, m, b, b+3, color);
    } else {
        ResotTriggerMatrix axes;
        memset(&axes, 0, sizeof axes);
        axes.m[0] = axes.m[5] = axes.m[10] = 1;
        memcpy(&axes.m[12], &m->m[12], 12);
        if (!resot_trigger_floats(volume, b, 6) || !(b[0] < b[3] || b[1] < b[4] || b[2] < b[5])) return 0;
        resot_trigger_box(f, &axes, b, b+3, color);
    }
    return 1;
}
/* A target calls this when the main view's projection is finished: projection
 * x, y and w factors at built+0x00, +0x14 and +0x2C (retail 0x007682B0, demo
 * 0x00650C20). A matrix takes 0x50 bytes here, its type at +0x40 (retail
 * 0x002FDDE0): st_Matrix is camera+0x90 and st_InverseMatrix camera+0xE0
 * (sub_002FDD00, demo sub_0008A9F0), past Jade's source layout. */
static void resot_triggers_frame(uint32_t world_slot, uint32_t built)
{
    static ResotDebugSegment buffer[RESOT_TRIGGER_SEGMENTS];
    static ResotTriggerLine lines[RESOT_TRIGGER_SEGMENTS];
    static uint32_t line_count, last_mode, logged, views;
    ResotTriggerFrame f;
    float view[16], px, py, pw;
    uint32_t world = 0, begin = 0, end = 0, entry, flags = 0, shown = 0, i;
    unsigned zones = 0, logic = 0, hidden = 0, objects = 0;
    int mode = xbox_FramebufferRenderMode();
    if (mode != 3) {
        if (last_mode == 3) xbox_FramebufferSetDebugSegments(NULL, 0);
        last_mode = (uint32_t)mode;
        return;
    }
    last_mode = 3;
    if (!resot_trigger_word(s_trigger_camera, &flags) || !(flags & 1) ||
        !resot_trigger_floats(s_trigger_camera + 0xE0, view, 16) ||
        !resot_trigger_floats(built, &px, 1) || !resot_trigger_floats(built + 0x14, &py, 1) ||
        !resot_trigger_floats(built + 0x2C, &pw, 1) || pw == 0.0f) return;
    if (views++ % 6u) goto project; /* Only moving triggers can lag these few views. */
    resot_guest_ranges_forget();
    f.out = lines; f.count = 0;
    if (!resot_trigger_word(world_slot, &world) || !resot_trigger_word(world + 0x20, &begin) ||
        !resot_trigger_word(world + 0x14, &end) || !begin || (begin & 3) || end < begin ||
        (end - begin) % 8 || end - begin > 16384u*8u) { xbox_FramebufferSetDebugSegments(NULL, 0); return; }
    for (entry = begin; entry < end && f.count < RESOT_TRIGGER_SEGMENTS; entry += 8) {
        uint32_t object = 0, identity = 0, status = 0, matrix = 0, volume = 0, extended = 0, ai = 0;
        ResotTriggerMatrix m;
        uint32_t type = 0;
        if (!resot_trigger_word(entry, &object) || !object || (object & 3)) continue;
        if (!resot_trigger_word(object, &identity) || !resot_trigger_word(object + 4, &status) ||
            !resot_trigger_word(object + 0x0C, &matrix) || !resot_trigger_floats(matrix, m.m, 12) ||
            !resot_trigger_floats(matrix + 0x30, &m.m[12], 3)) continue;
        objects++;
        resot_trigger_word(matrix + 0x40, &type);
        m.scaled = (type & 8) != 0; /* MATH_Ci_Scale */
        resot_trigger_word(object + 0x10, &volume);
        resot_trigger_word(object + 0x18, &extended);
        if (extended) resot_trigger_word(extended + 4, &ai);
        if (identity & 0x00004000u) { /* OBJ_C_IdentityFlag_Visu */
            if ((status & RESOT_GAO_FORCE_INVISIBLE) && volume)
                hidden += (unsigned)resot_trigger_bounds(&f, &m, identity, volume, RESOT_TRIGGER_MAGENTA);
            continue;
        }
        if (identity & 0x00000010u) continue; /* Lights. */
        if ((identity & 0x00000400u) && extended) { /* OBJ_C_IdentityFlag_ZDE */
            unsigned drawn = resot_trigger_zones(&f, &m, extended);
            zones += drawn;
            if (drawn) continue;
        }
        if (ai && volume)
            logic += (unsigned)resot_trigger_bounds(&f, &m, identity, volume, RESOT_TRIGGER_GREEN);
    }
    line_count = f.count;
    if (logged < 6 && !(s_cheats_frames_for_triggers++ % 50u)) {
        logged++;
        fprintf(stderr, "[TRIGGERS] %u objects: %u zones, %u logic boxes, %u invisible meshes, %u lines;"
                        " projection %g %g %g\n", objects, zones, logic, hidden, f.count, px, py, pw);
    }
project:
    for (i = 0; i < line_count; i++)
        shown += (uint32_t)resot_trigger_project(view, px, py, pw, &lines[i], &buffer[shown]);
    xbox_FramebufferSetDebugSegments(buffer, shown);
}
#endif
