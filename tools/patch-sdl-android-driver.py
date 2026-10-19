"""reSOT: pass libadrenotools' isolated Vulkan loader into SDL on Android."""
from pathlib import Path
import sys

root = Path(sys.argv[1])
path = root / "src/video/android/SDL_androidvulkan.c"
text = path.read_text(encoding="utf-8")
if "RESOT_SetAndroidVulkanGetInstanceProcAddr" not in text:
    marker = "bool Android_Vulkan_LoadLibrary(SDL_VideoDevice *_this, const char *path)"
    assert text.count(marker) == 1
    text = text.replace(marker, '''/* RE-SoT: the app owns this loader for its process lifetime. Keep SDL's
 * ordinary loader object for refcount/unload bookkeeping, but resolve every
 * Vulkan entry through the chosen loader (including Android surfaces). */
static PFN_vkGetInstanceProcAddr resot_custom_gipa;
SDL_DECLSPEC void SDLCALL RESOT_SetAndroidVulkanGetInstanceProcAddr(SDL_FunctionPointer proc)
{
    resot_custom_gipa = (PFN_vkGetInstanceProcAddr)proc;
}

''' + marker)
    marker = '''    vkGetInstanceProcAddr = (PFN_vkGetInstanceProcAddr)SDL_LoadFunction(
        _this->vulkan_config.loader_handle, "vkGetInstanceProcAddr");'''
    assert text.count(marker) == 1
    text = text.replace(marker, '''    vkGetInstanceProcAddr = resot_custom_gipa ? resot_custom_gipa :
        (PFN_vkGetInstanceProcAddr)SDL_LoadFunction(
            _this->vulkan_config.loader_handle, "vkGetInstanceProcAddr");''')
    path.write_text(text, encoding="utf-8")
sym = root / "src/dynapi/SDL_dynapi.sym"
text = sym.read_text(encoding="utf-8")
if "RESOT_SetAndroidVulkanGetInstanceProcAddr;" not in text:
    text = text.replace("  global:\n", "  global:\n    RESOT_SetAndroidVulkanGetInstanceProcAddr;\n")
    sym.write_text(text, encoding="utf-8")
