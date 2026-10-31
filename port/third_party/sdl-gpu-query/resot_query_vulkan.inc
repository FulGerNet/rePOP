/* RE-SoT: include inside SDL_gpu_vulkan.c. Precise hardware occlusion
 * queries; reset outside the render pass, begin/end inside it, read only
 * after the submission fence. MIT, see repository LICENSE. */
#include "resot_gpu_query.h"
typedef struct ResotVulkanQuery {
    VkQueryPool pool;
    VkQueryControlFlags flags; /* RE-SoT: precise counting is optional in Vulkan. */
    PFN_vkDestroyQueryPool destroy;
    PFN_vkCmdResetQueryPool reset;
    PFN_vkCmdBeginQuery begin;
    PFN_vkCmdEndQuery end;
    PFN_vkGetQueryPoolResults read;
} ResotVulkanQuery;
static void SDLCALL resot_vk_destroy(SDL_GPUDevice *device, void *opaque)
{
    VulkanRenderer *r = (VulkanRenderer *)device->driverData;
    ResotVulkanQuery *q = opaque;
    if (q->pool) q->destroy(r->logicalDevice,q->pool,NULL);
    SDL_free(q);
}
static void *SDLCALL resot_vk_create(SDL_GPUDevice *device)
{
    VulkanRenderer *r = (VulkanRenderer *)device->driverData;
    VkPhysicalDeviceFeatures features;
    VkQueryPoolCreateInfo ci = {0};
    VkResult result;
    PFN_vkCreateQueryPool create;
    ResotVulkanQuery *q;
    r->vkGetPhysicalDeviceFeatures(r->physicalDevice,&features);
    q = SDL_calloc(1,sizeof *q);
    if (!q) return NULL;
    /* RE-SoT: ordinary occlusion queries are available without the optional
     * precise feature. They return hardware visibility, but their nonzero
     * counts may be conservative. Preserve real results and fence ordering;
     * never make retail startup depend on this optional capability. */
    q->flags = features.occlusionQueryPrecise && !SDL_GetHintBoolean("RESOT_GPU_NONPRECISE_QUERIES", false)
        ? VK_QUERY_CONTROL_PRECISE_BIT : 0;
    if (!q->flags) {
        static bool warned;
        if (!warned) SDL_Log("RE-SoT: conservative hardware occlusion counts; light intensity may differ");
        warned = true;
    }
#define RESOT_VK_LOAD(type,field,name) q->field = (type)r->vkGetDeviceProcAddr(r->logicalDevice,name)
    RESOT_VK_LOAD(PFN_vkDestroyQueryPool,destroy,"vkDestroyQueryPool");
    RESOT_VK_LOAD(PFN_vkCmdResetQueryPool,reset,"vkCmdResetQueryPool");
    RESOT_VK_LOAD(PFN_vkCmdBeginQuery,begin,"vkCmdBeginQuery");
    RESOT_VK_LOAD(PFN_vkCmdEndQuery,end,"vkCmdEndQuery");
    RESOT_VK_LOAD(PFN_vkGetQueryPoolResults,read,"vkGetQueryPoolResults");
#undef RESOT_VK_LOAD
    create = (PFN_vkCreateQueryPool)r->vkGetDeviceProcAddr(r->logicalDevice,"vkCreateQueryPool");
    if (!create || !q->destroy || !q->reset || !q->begin || !q->end || !q->read) {
        SDL_SetError("RE-SoT Vulkan query entry points missing"); SDL_free(q); return NULL;
    }
    ci.sType = VK_STRUCTURE_TYPE_QUERY_POOL_CREATE_INFO;
    ci.queryType = VK_QUERY_TYPE_OCCLUSION; ci.queryCount = 1;
    result = create(r->logicalDevice,&ci,NULL,&q->pool);
    if (result != VK_SUCCESS) {
        SDL_SetError("RE-SoT Vulkan query allocation failed: %d",(int)result); SDL_free(q); return NULL;
    }
    return q;
}
static void SDLCALL resot_vk_reset(SDL_GPUCommandBuffer *cmd, void *opaque)
{
    VulkanCommandBuffer *c = (VulkanCommandBuffer *)cmd;
    ResotVulkanQuery *q = opaque;
    q->reset(c->commandBuffer,q->pool,0,1);
}
static void SDLCALL resot_vk_begin(SDL_GPUCommandBuffer *cmd, void *opaque)
{
    VulkanCommandBuffer *c = (VulkanCommandBuffer *)cmd;
    ResotVulkanQuery *q = opaque;
    q->begin(c->commandBuffer,q->pool,0,q->flags);
}
static void SDLCALL resot_vk_end(SDL_GPUCommandBuffer *cmd, void *opaque)
{
    VulkanCommandBuffer *c = (VulkanCommandBuffer *)cmd;
    ResotVulkanQuery *q = opaque;
    q->end(c->commandBuffer,q->pool,0);
}
static void SDLCALL resot_vk_resolve(SDL_GPUCommandBuffer *cmd, void *opaque)
{
    (void)cmd; (void)opaque; /* vkGetQueryPoolResults reads the completed native pool. */
}
static bool SDLCALL resot_vk_read(SDL_GPUDevice *device, void *opaque, Uint64 *samples)
{
    VulkanRenderer *r = (VulkanRenderer *)device->driverData;
    ResotVulkanQuery *q = opaque;
    VkResult result = q->read(r->logicalDevice,q->pool,0,1,sizeof *samples,samples,sizeof *samples,VK_QUERY_RESULT_64_BIT);
    if (result != VK_SUCCESS) return SDL_SetError("RE-SoT Vulkan completed query read failed: %d",(int)result);
    return true;
}
static bool SDLCALL resot_vk_healthy(SDL_GPUDevice *device)
{
    VulkanRenderer *r = (VulkanRenderer *)device->driverData;
    VkResult result = VK_SUCCESS;
    /* SDL keeps its submission fences native; GetFenceStatus also exposes
     * VK_ERROR_DEVICE_LOST without blocking or submitting anything. */
    SDL_LockMutex(r->submitLock);
    if (r->submittedCommandBufferCount) {
        VulkanCommandBuffer *c = r->submittedCommandBuffers[0];
        result = r->vkGetFenceStatus(r->logicalDevice,c->inFlightFence->fence);
    }
    SDL_UnlockMutex(r->submitLock);
    if (result != VK_SUCCESS && result != VK_NOT_READY)
        return SDL_SetError("RE-SoT Vulkan submission failed: %d",(int)result);
    return true;
}
/* RE-SoT: exported from the shared SDL on Windows and on Android, whose
 * SDL is built with hidden visibility. */
#if defined(_WIN32)
__declspec(dllexport)
#else
__attribute__((visibility("default")))
#endif
const ResotGpuQueryAPI *SDLCALL RESOT_GetVulkanQueryAPI(Uint32 version)
{
    static const ResotGpuQueryAPI api = {RESOT_GPU_QUERY_ABI,sizeof(ResotGpuQueryAPI),"vulkan",
        resot_vk_create,resot_vk_destroy,resot_vk_reset,resot_vk_begin,resot_vk_end,
        resot_vk_resolve,resot_vk_read,resot_vk_healthy};
    return version == RESOT_GPU_QUERY_ABI ? &api : NULL;
}
