/* RE-SoT: bind only changed graphics descriptor sets and their dynamic
 * offsets. All four sets are rebound on a different full pipeline layout.
 * Compute has a separate bind point; render-pass boundaries preserve state. */
static void resot_bind_changed_graphics_sets(VulkanRenderer *renderer,
    VulkanCommandBuffer *cmd, VulkanGraphicsPipelineResourceLayout *layout,
    const VkDescriptorSet oldSets[4], const VkDescriptorSet sets[4], const Uint32 *offsets)
{
    Uint32 first = 4, last = 0;
    if (cmd->resotBoundGraphicsLayout != layout) {
        first = 0; last = 3;
    } else {
        for (Uint32 i=0;i<4;i++) {
            bool changed = oldSets[i] != sets[i] ||
                (i==1 && cmd->needNewVertexUniformOffsets) ||
                (i==3 && cmd->needNewFragmentUniformOffsets);
            if (changed) { if (i<first) first=i; last=i; }
        }
    }
    if (first < 4) {
        Uint32 offsetStart = first >= 2 ? layout->vertexUniformBufferCount : 0;
        Uint32 count = (first <= 1 && last >= 1 ? layout->vertexUniformBufferCount : 0) +
                       (last >= 3 ? layout->fragmentUniformBufferCount : 0);
        renderer->vkCmdBindDescriptorSets(cmd->commandBuffer,VK_PIPELINE_BIND_POINT_GRAPHICS,
            layout->pipelineLayout,first,last-first+1,sets+first,count,offsets+offsetStart);
        cmd->resotBoundGraphicsLayout = layout;
    }
}
