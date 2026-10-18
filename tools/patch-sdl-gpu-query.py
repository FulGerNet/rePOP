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
        path.write_text(text, encoding="utf-8")


if __name__ == "__main__":
    main()
