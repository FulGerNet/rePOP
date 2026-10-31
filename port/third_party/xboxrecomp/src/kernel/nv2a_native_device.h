/* RE-SoT: require only the Vulkan features used by this renderer. SDL's
 * general-purpose defaults include optional mobile features. Shared with
 * the real GPU regression harness so the reduced contract is exercised. */
#ifndef RESOT_NATIVE_DEVICE_H
#define RESOT_NATIVE_DEVICE_H
#include <SDL3/SDL.h>
static SDL_GPUDevice *resot_native_device(const char *backend, int debug)
{
    SDL_PropertiesID props = SDL_CreateProperties();
    SDL_GPUDevice *device;
    SDL_SetStringProperty(props, SDL_PROP_GPU_DEVICE_CREATE_NAME_STRING, backend);
    SDL_SetBooleanProperty(props, SDL_PROP_GPU_DEVICE_CREATE_SHADERS_DXIL_BOOLEAN, true);
    SDL_SetBooleanProperty(props, SDL_PROP_GPU_DEVICE_CREATE_SHADERS_SPIRV_BOOLEAN, true);
    /* RE-SoT: D3D12's run-time translations are fxc SM 5.1, not DXIL. */
    SDL_SetBooleanProperty(props, SDL_PROP_GPU_DEVICE_CREATE_SHADERS_DXBC_BOOLEAN, true);
    SDL_SetBooleanProperty(props, SDL_PROP_GPU_DEVICE_CREATE_DEBUGMODE_BOOLEAN, debug != 0);
    SDL_SetBooleanProperty(props, SDL_PROP_GPU_DEVICE_CREATE_FEATURE_CLIP_DISTANCE_BOOLEAN, false);
    SDL_SetBooleanProperty(props, SDL_PROP_GPU_DEVICE_CREATE_FEATURE_DEPTH_CLAMPING_BOOLEAN, false);
    SDL_SetBooleanProperty(props, SDL_PROP_GPU_DEVICE_CREATE_FEATURE_INDIRECT_DRAW_FIRST_INSTANCE_BOOLEAN, false);
    SDL_SetBooleanProperty(props, SDL_PROP_GPU_DEVICE_CREATE_FEATURE_ANISOTROPY_BOOLEAN, false);
    SDL_SetBooleanProperty(props, "resot.gpu.minimal_features", true);
    device = SDL_CreateGPUDeviceWithProperties(props);
    SDL_DestroyProperties(props);
    return device;
}
#endif
