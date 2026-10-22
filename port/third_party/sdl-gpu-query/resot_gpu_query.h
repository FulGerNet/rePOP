/* RE-SoT: versioned SDL GPU extension for Xbox NV2A occlusion reports.
 * The implementation is compiled inside the pinned SDL native drivers; no
 * private SDL structure layouts cross this ABI. MIT, see repository LICENSE. */
#ifndef RESOT_GPU_QUERY_H
#define RESOT_GPU_QUERY_H
#include <SDL3/SDL_gpu.h>

#define RESOT_GPU_QUERY_ABI 1u
typedef struct ResotGpuQueryAPI {
    Uint32 version, size;
    const char *driver;
    void *(SDLCALL *create)(SDL_GPUDevice *device);
    void (SDLCALL *destroy)(SDL_GPUDevice *device, void *query);
    /* reset/resolve outside a render pass; begin/end inside the same pass.
     * The caller retains queries until their submission fence completes. */
    void (SDLCALL *reset)(SDL_GPUCommandBuffer *cmd, void *query);
    void (SDLCALL *begin)(SDL_GPUCommandBuffer *cmd, void *query);
    void (SDLCALL *end)(SDL_GPUCommandBuffer *cmd, void *query);
    void (SDLCALL *resolve)(SDL_GPUCommandBuffer *cmd, void *query);
    bool (SDLCALL *read)(SDL_GPUDevice *device, void *query, Uint64 *samples);
    bool (SDLCALL *healthy)(SDL_GPUDevice *device);
} ResotGpuQueryAPI;
typedef const ResotGpuQueryAPI *(SDLCALL *ResotGetGpuQueryAPI)(Uint32 version);
#endif
