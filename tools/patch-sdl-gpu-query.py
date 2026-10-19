"""Apply reSOT's published query extension to the pinned SDL build tree.

The downloaded upstream tree is ignored. Only these marked additions are made;
the upstream zlib licence is preserved. No private structures enter reSOT's ABI.
"""
import argparse
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
EXTENSION = ROOT / "port/third_party/sdl-gpu-query"


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
