/* RE-SoT: asynchronous NV2A counters using native SDL GPU query extensions.
 * Queries are scoped to a render pass, and normalized to guest pixels.
 * CLEAR drops only the current counter's references; already issued reports
 * retain immutable snapshots. Native query objects retire only after their
 * submission fence, even if CLEAR happened before the command was submitted.
 * This generic controller has no game addresses; only retail enables it. */
#include "../../../sdl-gpu-query/resot_gpu_query.h"
#include <stdint.h>

typedef struct NgVisFence {
    SDL_GPUFence *gpu;
    uint32_t refs;
    int ready;
} NgVisFence;
typedef struct NgVisSegment {
    struct NgVisSegment *all_next, *pending_next;
    void *query;
    NgVisFence *fence;
    uint32_t refs;
    double pixel_scale;
    uint64_t samples;
    int ready;
} NgVisSegment;
typedef struct NgVisReport {
    struct NgVisReport *next;
    uint32_t address, count;
    uint64_t stamp;
    NgVisSegment *segments[1];
} NgVisReport;
typedef struct NgVisibility {
    SDL_GPUDevice *device;
    const ResotGpuQueryAPI *api;
    NgVisSegment *all, *pending, **counter;
    uint32_t count, capacity;
    NgVisReport *first, *last;
    uint64_t queries, reports, completed;
    /* RE-SoT: bounded reuse of completed native query resources. Retail can
     * issue thousands per second; allocating a Vulkan pool / D3D12 heap and
     * readback resource every time adds avoidable driver/allocator work. */
    void *idle_queries[64];
    uint32_t idle_count;
    int pool_disabled; /* RE-SoT: opt-in live A/B, bit 1 in the developer control. */
    uint64_t allocated, reused;
    int enabled, failed;
} NgVisibility;
typedef void (*NgVisComplete)(void *, uint32_t, uint64_t, uint32_t);

static NgVisSegment *ng_vis_prepare(NgVisibility *v, SDL_GPUCommandBuffer *cmd, double scale)
{
    NgVisSegment *s;
    if (!v->enabled) return NULL;
    if (v->failed) return NULL;
    if (v->count == v->capacity) {
        uint32_t capacity = v->capacity ? v->capacity*2 : 8;
        NgVisSegment **counter = (NgVisSegment **)realloc(v->counter,(size_t)capacity*sizeof *counter);
        if (!counter) { v->failed = 1; SDL_SetError("native visibility counter allocation failed"); return NULL; }
        v->counter = counter; v->capacity = capacity;
    }
    s = (NgVisSegment *)calloc(1,sizeof *s);
    if (!s) { v->failed = 1; SDL_SetError("native visibility segment allocation failed"); return NULL; }
    /* RE-SoT: only queries whose submission fence completed and whose samples
     * were copied into their immutable segment can enter this free list. */
    if (!v->pool_disabled && v->idle_count) { s->query = v->idle_queries[--v->idle_count]; v->reused++; }
    else { s->query = v->api->create(v->device); if (s->query) v->allocated++; }
    if (!s->query) { free(s); v->failed = 1; return NULL; }
    s->refs = 1; s->pixel_scale = scale > 0 ? scale : 1;
    s->all_next = v->all; v->all = s;
    s->pending_next = v->pending; v->pending = s;
    v->counter[v->count++] = s; v->queries++;
    v->api->reset(cmd,s->query); /* Vulkan reset is outside the render pass. */
    return s;
}
static void ng_vis_clear(NgVisibility *v)
{
    uint32_t i;
    for (i = 0; i < v->count; i++) v->counter[i]->refs--;
    v->count = 0;
}
/* Called once for a command buffer containing at least one query. The fence
 * belongs to the controller; the caller must not release it separately. */
static int ng_vis_submitted(NgVisibility *v, SDL_GPUFence *gpu)
{
    NgVisFence *fence = (NgVisFence *)calloc(1,sizeof *fence);
    NgVisSegment *s;
    if (!fence) { v->failed = 1; SDL_SetError("native visibility fence allocation failed"); return 0; }
    fence->gpu = gpu;
    while ((s = v->pending) != NULL) {
        v->pending = s->pending_next; s->pending_next = NULL;
        s->fence = fence; fence->refs++;
    }
    return 1;
}
static int ng_vis_report(NgVisibility *v, uint32_t address, uint64_t stamp)
{
    uint32_t i;
    NgVisReport *r;
    if (v->failed) return 0;
    r = (NgVisReport *)calloc(1,sizeof *r+(size_t)v->count*sizeof r->segments[0]);
    if (!r) { SDL_SetError("native visibility report allocation failed"); v->failed = 1; return 0; }
    r->address = address; r->stamp = stamp; r->count = v->count;
    for (i = 0; i < r->count; i++) { r->segments[i] = v->counter[i]; r->segments[i]->refs++; }
    if (v->last) v->last->next = r; else v->first = r;
    v->last = r; v->reports++;
    return 1;
}
static int ng_vis_poll(NgVisibility *v, NgVisComplete complete, void *opaque)
{
    NgVisSegment **link = &v->all;
    /* RE-SoT: adjacent segments share one submission fence. A pending fence
     * needs one driver check per run, not one syscall per segment. */
    NgVisFence *checked = NULL;
    if (v->failed) return 0;
    if (v->all && !v->api->healthy(v->device)) { v->failed = 1; return 0; }
    while (*link) {
        NgVisSegment *s = *link;
        NgVisFence *fence = s->fence;
        if (!s->ready && fence) {
            if (!fence->ready && fence != checked)
                fence->ready = SDL_QueryGPUFence(v->device,fence->gpu);
            checked = fence; /* RE-SoT: retain only identity, never dereference after retirement. */
            if (fence->ready) {
                if (!v->api->read(v->device,s->query,&s->samples)) { v->failed = 1; return 0; }
                s->ready = 1;
                /* RE-SoT: reports retain samples/scale, not a native handle.
                 * Reusing the handle cannot overwrite an older report. Reset
                 * is still recorded outside the next render pass. */
                if (!v->pool_disabled && v->idle_count < 64) v->idle_queries[v->idle_count++] = s->query;
                else v->api->destroy(v->device,s->query);
                s->query = NULL;
                s->fence = NULL;
                if (--fence->refs == 0) { SDL_ReleaseGPUFence(v->device,fence->gpu); free(fence); }
            }
        }
        if (s->ready && !s->refs) { *link = s->all_next; free(s); }
        else link = &s->all_next;
    }
    while (v->first) {
        NgVisReport *r = v->first;
        uint32_t i;
        double pixels = 0;
        for (i = 0; i < r->count; i++) {
            if (!r->segments[i]->ready) return 1; /* pending: no spin or wait */
            pixels += (double)r->segments[i]->samples/r->segments[i]->pixel_scale;
        }
        complete(opaque,r->address,r->stamp,pixels >= 4294967295.0 ? 0xFFFFFFFFu : (uint32_t)(pixels+0.5));
        v->completed++;
        v->first = r->next;
        if (!v->first) v->last = NULL;
        for (i = 0; i < r->count; i++) r->segments[i]->refs--;
        free(r);
    }
    return 1;
}
/* Device must be idle, or its command buffers canceled, before destruction. */
static void ng_vis_destroy(NgVisibility *v)
{
    NgVisReport *r;
    NgVisSegment *s;
    while ((r = v->first) != NULL) { v->first = r->next; free(r); }
    while ((s = v->all) != NULL) {
        v->all = s->all_next;
        if (s->query) v->api->destroy(v->device,s->query);
        if (s->fence && --s->fence->refs == 0) {
            SDL_ReleaseGPUFence(v->device,s->fence->gpu); free(s->fence);
        }
        free(s);
    }
    /* RE-SoT: active and pooled resources have disjoint ownership. */
    while (v->idle_count) v->api->destroy(v->device,v->idle_queries[--v->idle_count]);
    free(v->counter); memset(v,0,sizeof *v);
}
