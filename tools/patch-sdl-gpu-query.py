"""Apply reSOT's published query extension to the pinned SDL build tree.

The downloaded upstream tree is ignored. Only these marked additions are made;
the upstream zlib licence is preserved. No private structures enter reSOT's ABI.
"""
import argparse
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
EXTENSION = ROOT / "port/third_party/sdl-gpu-query"


def patch_vulkan_bindings(text):
    """Keep graphics descriptors alive within one native command buffer.

    RE-SoT: identical cached resource-layout identity proves complete Vulkan
    layout compatibility. SDL already invalidates changed bindings and UBO
    backing buffers; a pass boundary alone does not disturb descriptor state.
    """
    marker = "/* RE-SoT: command-buffer graphics descriptor continuity. */"
    if marker in text:
        return text
    field = "    VulkanGraphicsPipeline *currentGraphicsPipeline;"
    assert text.count(field) == 1
    text = text.replace(field, field + "\n    " + marker +
                        "\n    VulkanGraphicsPipelineResourceLayout *resotGraphicsLayout;")
    reset = "    commandBuffer->currentGraphicsPipeline = NULL;"
    assert text.count(reset) == 1
    text = text.replace(reset, reset + "\n    commandBuffer->resotGraphicsLayout = NULL; /* RE-SoT: fresh recording, no bound sets. */")
    start = text.index("static void VULKAN_BindGraphicsPipeline(")
    end = text.index("static void VULKAN_BindVertexBuffers(", start)
    function = text[start:end]
    flags = """    // Mark bindings as needed
    vulkanCommandBuffer->needNewVertexResourceDescriptorSet = true;
    vulkanCommandBuffer->needNewFragmentResourceDescriptorSet = true;
    vulkanCommandBuffer->needNewVertexUniformDescriptorSet = true;
    vulkanCommandBuffer->needNewFragmentUniformDescriptorSet = true;
    vulkanCommandBuffer->needNewVertexUniformOffsets = true;
    vulkanCommandBuffer->needNewFragmentUniformOffsets = true;"""
    assert function.count(flags) == 1
    replacement = """    /* RE-SoT: shader/PSO changes with the identical cached layout do not
     * invalidate descriptors. Preserve any dirty flags set by resource/UBO
     * updates; never clear them here. An incompatible layout rebuilds all sets. */
    if (vulkanCommandBuffer->resotGraphicsLayout != pipeline->resourceLayout) {
        vulkanCommandBuffer->resotGraphicsLayout = pipeline->resourceLayout;
        vulkanCommandBuffer->needNewVertexResourceDescriptorSet = true;
        vulkanCommandBuffer->needNewFragmentResourceDescriptorSet = true;
        vulkanCommandBuffer->needNewVertexUniformDescriptorSet = true;
        vulkanCommandBuffer->needNewFragmentUniformDescriptorSet = true;
        vulkanCommandBuffer->needNewVertexUniformOffsets = true;
        vulkanCommandBuffer->needNewFragmentUniformOffsets = true;
    }"""
    text = text[:start]+function.replace(flags,replacement)+text[end:]
    start = text.index("static void VULKAN_EndRenderPass(")
    end = text.index("static void VULKAN_BeginComputePass(", start)
    function = text[start:end]
    for stage in ("vertex", "fragment"):
        for name in ("ResourceDescriptorSet", "UniformDescriptorSet"):
            old = f"    vulkanCommandBuffer->{stage}{name} = VK_NULL_HANDLE;\n"
            assert function.count(old) == 1
            function = function.replace(old, "")
        for name in ("SamplerBindings", "SamplerTextureViewBindings", "StorageTextureViewBindings", "StorageBufferBindings"):
            old = f"    SDL_zeroa(vulkanCommandBuffer->{stage}{name});\n"
            assert function.count(old) == 1
            function = function.replace(old, "")
    anchor = "    // Reset bind state"
    function = function.replace(anchor, """    /* RE-SoT: retain descriptor handles and tracked resource identities.
     * Vulkan graphics bindings survive render-pass/copy/compute boundaries;
     * resource cycling is detected by the normal Bind* setters. Command-buffer
     * acquisition still resets every identity and dirty flag. */
""" + anchor)
    text = text[:start]+function+text[end:]
    # Uniform-only changes require a descriptor bind with new offsets, but no
    # vkUpdateDescriptorSets call when none of the backing resources changed.
    start = text.index("static void VULKAN_INTERNAL_BindGraphicsDescriptorSets(")
    end = text.index("static void VULKAN_DrawIndexedPrimitives(", start)
    function = text[start:end]
    call = """    renderer->vkUpdateDescriptorSets(
        renderer->logicalDevice,
        writeCount,
        writeDescriptorSets,
        0,
        NULL);"""
    assert function.count(call) == 1
    function = function.replace(call, "    /* RE-SoT: offset-only updates have no descriptor writes. */\n    if (writeCount) {\n"+call+"\n    }")
    return text[:start]+function+text[end:]


def patch_vulkan_material_cache(text):
    """RE-SoT: reuse immutable sampler sets, including A -> B -> A draws."""
    marker = "/* RE-SoT: command-local material descriptor cache. */"
    if marker in text:
        return text
    typedef = "typedef struct VulkanCommandBuffer"
    assert text.count(typedef) == 1
    structs = marker + """
typedef struct ResotFragmentDescriptorKey {
    DescriptorSetLayout *layout;
    Uint32 count;
    VkImageView views[8];
    VkSampler samplers[8];
} ResotFragmentDescriptorKey;
typedef struct ResotFragmentDescriptorEntry {
    ResotFragmentDescriptorKey key;
    VkDescriptorSet set;
} ResotFragmentDescriptorEntry;

"""
    text = text.replace(typedef,structs+typedef)
    field = "    VulkanGraphicsPipelineResourceLayout *resotGraphicsLayout;"
    assert text.count(field) == 1
    text = text.replace(field,field+"\n    ResotFragmentDescriptorEntry resotFragmentDescriptors[64]; /* RE-SoT: bounded, command-owned. */")
    reset = "    commandBuffer->resotGraphicsLayout = NULL; /* RE-SoT: fresh recording, no bound sets. */"
    assert text.count(reset) == 1
    text = text.replace(reset,reset+"""
    /* RE-SoT: descriptor pools retire with this command buffer; never reuse a
     * cached set from its previous recording. Other key bytes are read only
     * after the non-NULL layout guard, so no bulk array clearing is needed. */
    for (Uint32 resotIndex=0;resotIndex<64;resotIndex++)
        commandBuffer->resotFragmentDescriptors[resotIndex].key.layout = NULL;
""")
    start = text.index("static void VULKAN_INTERNAL_BindGraphicsDescriptorSets(")
    end = text.index("static void VULKAN_DrawIndexedPrimitives(",start)
    fn = text[start:end]
    check = "    if (commandBuffer->needNewFragmentResourceDescriptorSet) {"
    assert fn.count(check) == 1
    fn = fn.replace(check,"""    /* RE-SoT: complete key comparison; the existing builder handles misses,
     * storage resources and larger layouts without changing their semantics. */
    if (commandBuffer->needNewFragmentResourceDescriptorSet &&
        !resot_restore_fragment_descriptor(commandBuffer,resourceLayout)) {""")
    store = "        commandBuffer->needNewFragmentResourceDescriptorSet = false;"
    assert fn.count(store) == 1
    fn = fn.replace(store,store+"\n        resot_store_fragment_descriptor(commandBuffer,resourceLayout); /* RE-SoT: immutable once written. */")
    include = f'#include "{(EXTENSION / "resot_descriptor_cache_vulkan.inc").as_posix()}"\n\n'
    return text[:start]+include+fn+text[end:]


def patch_vulkan_selective_bind(text):
    """RE-SoT: remove selective binds after Android user-reported regression."""
    marker = "/* RE-SoT: selective graphics descriptor binds. */"
    if marker not in text:
        return text
    text = text.replace("    "+marker+"\n    VulkanGraphicsPipelineResourceLayout *resotBoundGraphicsLayout;", "")
    text = text.replace("    commandBuffer->resotBoundGraphicsLayout = NULL; /* RE-SoT: separate actual bind identity. */", "")
    start = text.index("    /* RE-SoT: capture handles before builders/cache hits replace them. */")
    end = text.index("    resourceLayout = commandBuffer->currentGraphicsPipeline->resourceLayout;", start)
    text = text[:start]+text[end:]
    text = text.replace("    /* RE-SoT: dynamic offsets correspond only to the bound set interval. */\n    resot_bind_changed_graphics_sets(renderer,commandBuffer,resourceLayout,\n        resotOldSets,sets,dynamicOffsets);", """    renderer->vkCmdBindDescriptorSets(
        commandBuffer->commandBuffer,
        VK_PIPELINE_BIND_POINT_GRAPHICS,
        resourceLayout->pipelineLayout,
        0,
        4,
        sets,
        dynamicOffsetCount,
        dynamicOffsets);""")
    include = f'#include "{(EXTENSION / "resot_descriptor_bind_vulkan.inc").as_posix()}"\n\n'
    return text.replace(include, "")


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("source", type=Path)
    args = parser.parse_args()
    for backend in ("d3d12", "vulkan"):
        path = args.source / f"src/gpu/{backend}/SDL_gpu_{backend}.c"
        text = path.read_text(encoding="utf-8")
        marker = f"#endif // SDL_GPU_{backend.upper()}"
        include = f'#include "{(EXTENSION / f"resot_query_{backend}.inc").as_posix()}"'
        if include not in text:
            assert text.count(marker) == 1, path
            text = text.replace(marker, f"/* RE-SoT: native retail visibility reports. */\n{include}\n\n{marker}")
        if backend == "vulkan" and "RE-SoT: enable precise hardware occlusion" not in text:
            marker = "    VkPhysicalDeviceFeatures2 featureList;"
            assert text.count(marker) == 1
            text = text.replace(marker, """    /* RE-SoT: enable precise hardware occlusion when supported. The native
     * query extension refuses devices without it instead of returning booleans. */
    VkPhysicalDeviceFeatures resotQueryFeatures;
    renderer->vkGetPhysicalDeviceFeatures(renderer->physicalDevice, &resotQueryFeatures);
    features->desiredVulkan10DeviceFeatures.occlusionQueryPrecise = resotQueryFeatures.occlusionQueryPrecise;

""" + marker)
        if backend == "vulkan" and "resot_pipeline_cache_vulkan.inc" not in text:
            # RE-SoT: persistent VkPipelineCache (resot_pipeline_cache_vulkan.inc).
            include = f'#include "{(EXTENSION / "resot_pipeline_cache_vulkan.inc").as_posix()}"'
            marker = "static SDL_GPUGraphicsPipeline *VULKAN_CreateGraphicsPipeline("
            assert text.count(marker) == 1, path
            text = text.replace(marker, f"/* RE-SoT: persistent pipeline cache. */\n{include}\n\n{marker}")
            call = ("vulkanResult = renderer->vkCreateGraphicsPipelines(\n"
                    "        renderer->logicalDevice,\n"
                    "        VK_NULL_HANDLE,")
            assert text.count(call) == 1, path
            text = text.replace(call, call.replace("VK_NULL_HANDLE,", "resot_pipeline_cache(renderer),"))
        if backend == "vulkan":
            text = patch_vulkan_bindings(text)
            text = patch_vulkan_material_cache(text)
            text = patch_vulkan_selective_bind(text)
        path.write_text(text, encoding="utf-8")
    # Linux/Android link SDL with a version script that exports only SDL's own
    # API; the Vulkan query table must be exported too (Windows uses
    # __declspec(dllexport), the .sym file is not used there).
    sym = args.source / "src/dynapi/SDL_dynapi.sym"
    text = sym.read_text(encoding="utf-8")
    for export in ("RESOT_GetVulkanQueryAPI", "RESOT_SetVulkanPipelineCachePath",
                   "RESOT_SaveVulkanPipelineCache"):
        if f"{export};" not in text:
            marker = "  global:\n"
            assert text.count(marker) == 1, sym
            text = text.replace(marker, marker + f"    {export};\n")
    sym.write_text(text, encoding="utf-8")


if __name__ == "__main__":
    main()
