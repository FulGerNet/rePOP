/* RE-WW: distinguish GPU render-target aliases from later CPU RAM uploads.
 * This sampled fingerprint is an approximation, not a CPU write tracker.
 * GPU writes leave guest RAM unchanged; compare against the stored footprint
 * before choosing an alias, and claim only after its GPU write is recorded.
 */
#ifndef REWW_SURFACE_OWNERSHIP_H
#define REWW_SURFACE_OWNERSHIP_H

#include <stdint.h>
#include <string.h>

typedef struct RewwSurfaceOwnership {
    uint32_t fingerprint, bytes;
    int gpu_owned;
} RewwSurfaceOwnership;

static inline uint32_t reww_surface_fingerprint(const void *ram, uint32_t bytes)
{
    const unsigned char *p = (const unsigned char *)ram;
    uint32_t words = bytes / 4, step = words > 2048 ? words / 2048 : 1;
    uint32_t h = 2166136261u, i, word;
    /* Match hw_tex_hash's bounded-cost sampling policy. memcpy permits
     * unaligned RAM views; every read stays inside the claimed footprint. */
    for (i = 0; i < words; i += step) {
        memcpy(&word, p + (size_t)i * 4, 4);
        h = (h ^ word) * 16777619u;
    }
    /* Always include the last complete word and any non-dword tail. */
    if (words) {
        memcpy(&word, p + (size_t)(words - 1) * 4, 4);
        h = (h ^ word) * 16777619u;
    }
    for (i = words * 4; i < bytes; ++i)
        h = (h ^ p[i]) * 16777619u;
    return (h ^ bytes) * 16777619u;
}

static inline void reww_surface_claim(RewwSurfaceOwnership *owner,
                                       const void *ram, uint32_t bytes)
{
    owner->bytes = bytes;
    owner->gpu_owned = ram != NULL && bytes != 0;
    owner->fingerprint = owner->gpu_owned ? reww_surface_fingerprint(ram, bytes) : 0;
}

static inline int reww_surface_changed(const RewwSurfaceOwnership *owner,
                                       const void *ram)
{
    return owner->gpu_owned &&
        (!ram || owner->fingerprint != reww_surface_fingerprint(ram, owner->bytes));
}

static inline void reww_surface_invalidate(RewwSurfaceOwnership *owner)
{
    owner->gpu_owned = 0;
}

#endif /* REWW_SURFACE_OWNERSHIP_H */
