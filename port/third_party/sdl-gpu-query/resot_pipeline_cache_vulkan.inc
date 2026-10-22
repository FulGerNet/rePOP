/* RE-SoT: include inside SDL_gpu_vulkan.c, before VULKAN_CreateGraphicsPipeline.
 * SDL 3.4.18 creates every Vulkan pipeline without a VkPipelineCache. On
 * Adreno each pipeline using reSOT's NV2A pixel shader then took 0.5-1 s to
 * compile, on every run (2026-10-19 device logs). One cache per logical
 * device is loaded from, and saved to, the file named by
 * RESOT_SetVulkanPipelineCachePath; the driver validates the data's header
 * and ignores data from another device or driver. MIT, see repository LICENSE. */
static char resot_pc_path[1024];
static VkPipelineCache resot_pc;
static VkDevice resot_pc_device;
static SDL_AtomicInt resot_pc_dirty;

#if defined(_WIN32)
__declspec(dllexport)
#else
__attribute__((visibility("default")))
#endif
void SDLCALL RESOT_SetVulkanPipelineCachePath(const char *path)
{
    SDL_strlcpy(resot_pc_path, path ? path : "", sizeof(resot_pc_path));
}

static VkPipelineCache resot_pipeline_cache(VulkanRenderer *r)
{
    if (resot_pc_device != r->logicalDevice) {
        size_t size = 0;
        void *data = resot_pc_path[0] ? SDL_LoadFile(resot_pc_path, &size) : NULL;
        VkPipelineCacheCreateInfo ci;
        SDL_zero(ci);
        ci.sType = VK_STRUCTURE_TYPE_PIPELINE_CACHE_CREATE_INFO;
        ci.initialDataSize = data ? size : 0;
        ci.pInitialData = data;
        resot_pc = VK_NULL_HANDLE;
        if (r->vkCreatePipelineCache(r->logicalDevice, &ci, NULL, &resot_pc) != VK_SUCCESS) {
            ci.initialDataSize = 0;
            ci.pInitialData = NULL;
            size = 0;
            if (r->vkCreatePipelineCache(r->logicalDevice, &ci, NULL, &resot_pc) != VK_SUCCESS)
                resot_pc = VK_NULL_HANDLE;
        }
        SDL_free(data);
        resot_pc_device = r->logicalDevice;
        SDL_Log("RE-SoT pipeline cache: %u bytes loaded from %s", (unsigned)size,
                resot_pc_path[0] ? resot_pc_path : "(no file)");
    }
    SDL_SetAtomicInt(&resot_pc_dirty, 1);
    return resot_pc;
}

/* Writes the cache when pipelines were created since the last save. Returns
 * false only when a save was needed and failed. */
#if defined(_WIN32)
__declspec(dllexport)
#else
__attribute__((visibility("default")))
#endif
bool SDLCALL RESOT_SaveVulkanPipelineCache(SDL_GPUDevice *device)
{
    VulkanRenderer *r = (VulkanRenderer *)device->driverData;
    char tmp[1040];
    size_t size = 0;
    void *data;
    bool ok;
    if (!resot_pc || resot_pc_device != r->logicalDevice || !resot_pc_path[0])
        return true;
    if (!SDL_CompareAndSwapAtomicInt(&resot_pc_dirty, 1, 0))
        return true;
    if (r->vkGetPipelineCacheData(r->logicalDevice, resot_pc, &size, NULL) != VK_SUCCESS || !size)
        return false;
    data = SDL_malloc(size);
    if (!data)
        return false;
    ok = r->vkGetPipelineCacheData(r->logicalDevice, resot_pc, &size, data) == VK_SUCCESS;
    SDL_snprintf(tmp, sizeof(tmp), "%s.tmp", resot_pc_path);
    ok = ok && SDL_SaveFile(tmp, data, size);
    SDL_free(data);
    if (ok) {
        SDL_RemovePath(resot_pc_path);
        ok = SDL_RenamePath(tmp, resot_pc_path);
    }
    if (!ok)
        SDL_SetAtomicInt(&resot_pc_dirty, 1);
    return ok;
}
