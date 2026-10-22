/* RE-SoT: include inside SDL_gpu_d3d12.c. Actual D3D12 occlusion counters,
 * resolved to readback memory; lifetime is guarded by SDL submission fences.
 * MIT, see repository LICENSE. */
#include "resot_gpu_query.h"
/* RE-SoT: ID3D12QueryHeap IID from the Windows SDK d3d12.h. */
static const IID resot_d12_query_heap_iid = {0x0d9658ae,0xed45,0x469e,{0xa6,0x1d,0x97,0x0e,0xc5,0x83,0xca,0xb4}};
typedef struct ResotD3D12Query {
    ID3D12QueryHeap *heap;
    ID3D12Resource *readback;
} ResotD3D12Query;
static bool SDLCALL resot_d12_healthy(SDL_GPUDevice *device)
{
    D3D12Renderer *r = (D3D12Renderer *)device->driverData;
    HRESULT hr = ID3D12Device_GetDeviceRemovedReason(r->device);
    if (FAILED(hr)) return SDL_SetError("RE-SoT D3D12 device removed: 0x%08lx", (unsigned long)hr);
    return true;
}
static void SDLCALL resot_d12_destroy(SDL_GPUDevice *device, void *opaque)
{
    ResotD3D12Query *q = opaque;
    (void)device;
    if (q->readback) ID3D12Resource_Release(q->readback);
    if (q->heap) ID3D12QueryHeap_Release(q->heap);
    SDL_free(q);
}
static void *SDLCALL resot_d12_create(SDL_GPUDevice *device)
{
    D3D12Renderer *r = (D3D12Renderer *)device->driverData;
    ResotD3D12Query *q = SDL_calloc(1, sizeof *q);
    D3D12_QUERY_HEAP_DESC heap = {0};
    D3D12_HEAP_PROPERTIES properties = {0};
    D3D12_RESOURCE_DESC buffer = {0};
    HRESULT hr;
    if (!q) return NULL;
    heap.Type = D3D12_QUERY_HEAP_TYPE_OCCLUSION; heap.Count = 1;
    hr = ID3D12Device_CreateQueryHeap(r->device, &heap, D3D_GUID(resot_d12_query_heap_iid), (void **)&q->heap);
    if (FAILED(hr)) goto fail;
    properties.Type = D3D12_HEAP_TYPE_READBACK;
    properties.CreationNodeMask = properties.VisibleNodeMask = 1;
    buffer.Dimension = D3D12_RESOURCE_DIMENSION_BUFFER;
    buffer.Width = sizeof(Uint64); buffer.Height = 1;
    buffer.DepthOrArraySize = buffer.MipLevels = 1;
    buffer.SampleDesc.Count = 1; buffer.Layout = D3D12_TEXTURE_LAYOUT_ROW_MAJOR;
    hr = ID3D12Device_CreateCommittedResource(r->device, &properties, D3D12_HEAP_FLAG_NONE,
        &buffer, D3D12_RESOURCE_STATE_COPY_DEST, NULL, D3D_GUID(D3D_IID_ID3D12Resource), (void **)&q->readback);
    if (FAILED(hr)) goto fail;
    return q;
fail:
    SDL_SetError("RE-SoT D3D12 query allocation failed: 0x%08lx", (unsigned long)hr);
    resot_d12_destroy(device,q); return NULL;
}
static void SDLCALL resot_d12_reset(SDL_GPUCommandBuffer *cmd, void *query)
{
    (void)cmd; (void)query; /* BeginQuery resets this single-use counter. */
}
static void SDLCALL resot_d12_begin(SDL_GPUCommandBuffer *cmd, void *opaque)
{
    D3D12CommandBuffer *c = (D3D12CommandBuffer *)cmd;
    ResotD3D12Query *q = opaque;
    ID3D12GraphicsCommandList_BeginQuery(c->graphicsCommandList,q->heap,D3D12_QUERY_TYPE_OCCLUSION,0);
}
static void SDLCALL resot_d12_end(SDL_GPUCommandBuffer *cmd, void *opaque)
{
    D3D12CommandBuffer *c = (D3D12CommandBuffer *)cmd;
    ResotD3D12Query *q = opaque;
    ID3D12GraphicsCommandList_EndQuery(c->graphicsCommandList,q->heap,D3D12_QUERY_TYPE_OCCLUSION,0);
}
static void SDLCALL resot_d12_resolve(SDL_GPUCommandBuffer *cmd, void *opaque)
{
    D3D12CommandBuffer *c = (D3D12CommandBuffer *)cmd;
    ResotD3D12Query *q = opaque;
    ID3D12GraphicsCommandList_ResolveQueryData(c->graphicsCommandList,q->heap,D3D12_QUERY_TYPE_OCCLUSION,
                                            0,1,q->readback,0);
}
static bool SDLCALL resot_d12_read(SDL_GPUDevice *device, void *opaque, Uint64 *samples)
{
    ResotD3D12Query *q = opaque;
    D3D12_RANGE range = {0,sizeof(Uint64)}, written = {0,0};
    void *mapped = NULL;
    HRESULT hr;
    if (!resot_d12_healthy(device)) return false;
    hr = ID3D12Resource_Map(q->readback,0,&range,&mapped);
    if (FAILED(hr)) return SDL_SetError("RE-SoT D3D12 query map failed: 0x%08lx",(unsigned long)hr);
    SDL_memcpy(samples,mapped,sizeof *samples);
    ID3D12Resource_Unmap(q->readback,0,&written);
    return true;
}
__declspec(dllexport) const ResotGpuQueryAPI *SDLCALL RESOT_GetD3D12QueryAPI(Uint32 version)
{
    static const ResotGpuQueryAPI api = {RESOT_GPU_QUERY_ABI,sizeof(ResotGpuQueryAPI),"direct3d12",
        resot_d12_create,resot_d12_destroy,resot_d12_reset,resot_d12_begin,resot_d12_end,
        resot_d12_resolve,resot_d12_read,resot_d12_healthy};
    return version == RESOT_GPU_QUERY_ABI ? &api : NULL;
}
