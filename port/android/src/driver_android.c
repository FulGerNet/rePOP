/* reSOT: app-local Adreno driver selection, before SDL first loads Vulkan. */
#include <SDL3/SDL.h>
#include <adrenotools/driver.h>
#include <vulkan/vulkan.h>
#include <dlfcn.h>
#include <stdio.h>
#include <string.h>

extern void SDLCALL RESOT_SetAndroidVulkanGetInstanceProcAddr(SDL_FunctionPointer);
static void *s_driver; /* Keep the isolated namespace and hooks alive. */

void resot_android_driver_init(int argc, char **argv)
{
    const char *hooks=NULL, *dir=NULL, *name=NULL;
    for (int i=1;i+1<argc;i++) {
        if (!strcmp(argv[i],"--native-libs")) hooks=argv[++i];
        else if (!strcmp(argv[i],"--driver-dir")) dir=argv[++i];
        else if (!strcmp(argv[i],"--driver-lib")) name=argv[++i];
    }
    if (!dir || !name || !hooks) {
        fprintf(stderr,"[DRIVER] system Vulkan\n");
        return;
    }
    s_driver=adrenotools_open_libvulkan(RTLD_NOW|RTLD_LOCAL,ADRENOTOOLS_DRIVER_CUSTOM,
                                       NULL,hooks,dir,name,NULL,NULL);
    PFN_vkGetInstanceProcAddr get=s_driver ? (PFN_vkGetInstanceProcAddr)dlsym(s_driver,"vkGetInstanceProcAddr") : NULL;
    /* Probe before committing SDL to this loader. Some incompatible drivers
     * load as ELF but expose no physical device on the current kernel. */
    int ok=0;
    if (get) {
        PFN_vkCreateInstance create=(PFN_vkCreateInstance)get(VK_NULL_HANDLE,"vkCreateInstance");
        VkInstance instance=VK_NULL_HANDLE;
        VkApplicationInfo app={.sType=VK_STRUCTURE_TYPE_APPLICATION_INFO,.pApplicationName="reSOT driver probe",.apiVersion=VK_API_VERSION_1_0};
        VkInstanceCreateInfo ci={.sType=VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO,.pApplicationInfo=&app};
        if (create && create(&ci,NULL,&instance)==VK_SUCCESS) {
            PFN_vkEnumeratePhysicalDevices enumerate=(PFN_vkEnumeratePhysicalDevices)get(instance,"vkEnumeratePhysicalDevices");
            PFN_vkDestroyInstance destroy=(PFN_vkDestroyInstance)get(instance,"vkDestroyInstance");
            uint32_t count=0;
            ok=enumerate && enumerate(instance,&count,NULL)==VK_SUCCESS && count>0;
            if (ok) {
                VkPhysicalDevice device;
                count=1;
                VkResult result=enumerate(instance,&count,&device);
                PFN_vkGetPhysicalDeviceProperties properties=(PFN_vkGetPhysicalDeviceProperties)get(instance,"vkGetPhysicalDeviceProperties");
                if (properties && (result==VK_SUCCESS || result==VK_INCOMPLETE)) {
                    VkPhysicalDeviceProperties prop;
                    properties(device,&prop);
                    fprintf(stderr,"[DRIVER] probe GPU: %s vendor=%04X driver=%u\n",prop.deviceName,prop.vendorID,prop.driverVersion);
                }
            }
            if (destroy) destroy(instance,NULL);
        }
    }
    if (!ok) {
        fprintf(stderr,"[DRIVER] custom %s unavailable/incompatible; using system Vulkan (%s)\n",name,dlerror()?"loader error":"no Vulkan device");
        return;
    }
    RESOT_SetAndroidVulkanGetInstanceProcAddr((SDL_FunctionPointer)get);
    fprintf(stderr,"[DRIVER] custom Vulkan loader requested: %s from %s (check probe GPU and adrenotools logcat for fallback)\n",name,dir);
}
