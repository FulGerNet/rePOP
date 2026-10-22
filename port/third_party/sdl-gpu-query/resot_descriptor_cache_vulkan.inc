/* RE-SoT: command-local immutable material descriptors. Include after SDL's
 * VulkanCommandBuffer definition. No ownership crosses a recording/fence:
 * SDL's descriptor pools and resource tracking retain every cached handle.
 * A hash collision evicts only a lookup entry, never an in-flight set. */
static bool resot_fragment_descriptor_key(VulkanCommandBuffer *cmd,
    VulkanGraphicsPipelineResourceLayout *layout, ResotFragmentDescriptorKey *key, Uint32 *bucket)
{
    Uint64 hash = 14695981039346656037ull;
    if (!layout->fragmentSamplerCount || layout->fragmentSamplerCount > 8 ||
        layout->fragmentStorageTextureCount || layout->fragmentStorageBufferCount) return false;
    SDL_memset(key,0,sizeof *key);
    key->layout = layout->descriptorSetLayouts[2];
    key->count = layout->fragmentSamplerCount;
    hash = (hash ^ (Uint64)(uintptr_t)key->layout)*1099511628211ull;
    for (Uint32 i=0;i<key->count;i++) {
        Uint64 bits;
        key->views[i] = cmd->fragmentSamplerTextureViewBindings[i];
        key->samplers[i] = cmd->fragmentSamplerBindings[i];
        SDL_memcpy(&bits,&key->views[i],sizeof bits);
        hash = (hash ^ bits)*1099511628211ull;
        SDL_memcpy(&bits,&key->samplers[i],sizeof bits);
        hash = (hash ^ bits)*1099511628211ull;
    }
    *bucket = (Uint32)(hash ^ (hash>>32)) & 63;
    return true;
}
static bool resot_restore_fragment_descriptor(VulkanCommandBuffer *cmd,
                                             VulkanGraphicsPipelineResourceLayout *layout)
{
    ResotFragmentDescriptorKey key;
    Uint32 bucket;
    if (!resot_fragment_descriptor_key(cmd,layout,&key,&bucket)) return false;
    ResotFragmentDescriptorEntry *entry = &cmd->resotFragmentDescriptors[bucket];
    if (!entry->key.layout || SDL_memcmp(&entry->key,&key,sizeof key)) return false;
    cmd->fragmentResourceDescriptorSet = entry->set;
    cmd->needNewFragmentResourceDescriptorSet = false;
    return true;
}
static void resot_store_fragment_descriptor(VulkanCommandBuffer *cmd,
                                           VulkanGraphicsPipelineResourceLayout *layout)
{
    ResotFragmentDescriptorKey key;
    Uint32 bucket;
    if (!resot_fragment_descriptor_key(cmd,layout,&key,&bucket)) return;
    ResotFragmentDescriptorEntry *entry = &cmd->resotFragmentDescriptors[bucket];
    SDL_memcpy(&entry->key,&key,sizeof key);
    entry->set = cmd->fragmentResourceDescriptorSet;
}
