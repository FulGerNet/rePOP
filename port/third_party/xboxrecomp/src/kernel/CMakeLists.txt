cmake_minimum_required(VERSION 3.20)

# Xbox Kernel Replacement Layer
# Replaces 147 Xbox kernel imports with Win32 equivalents.
# Memory layout, file I/O, threading, synchronization, crypto, HAL.

set(KERNEL_SOURCES
    kernel_path.c
    kernel_pool.c
    kernel_rtl.c
    kernel_memory.c
    kernel_file.c
    kernel_thread.c
    kernel_sync.c
    kernel_hal.c
    kernel_xbox.c
    kernel_ob.c
    kernel_io.c
    kernel_crypto.c
    kernel_thunks.c
    kernel_bridge.c
    xbox_memory_layout.c
    guest_vmem.c
    icall_feedback.c
    recomp_trace.c
    nv2a_pb_scan.c
    nv2a_pb_exec.c
    nv2a_vsh_interp.c
    nv2a_combiner.c
)

add_library(xbox_kernel STATIC ${KERNEL_SOURCES})

# See src/platform/CMakeLists.txt: resolve src/ relative to this file, not via
# CMAKE_SOURCE_DIR, which is the consuming project's root under add_subdirectory().
get_filename_component(XBOXRECOMP_SRC_DIR "${CMAKE_CURRENT_SOURCE_DIR}/.." ABSOLUTE)

target_include_directories(xbox_kernel PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${XBOXRECOMP_SRC_DIR}
)

if(WIN32)
    # RE-SoT: standalone runtime regression projects have their own source root.
    get_filename_component(RESOT_SOURCE_ROOT "${CMAKE_CURRENT_SOURCE_DIR}/../../../../.." ABSOLUTE)
    # RE-SoT: native GPU command encoder; no D3D11 translation backend.
    set(RESOT_SDL_ROOT "${RESOT_SOURCE_ROOT}/build/deps/SDL3-3.4.18" CACHE PATH "SDL3 SDK (tools/setup-native-gpu.ps1)")
    set(RESOT_DXC "${RESOT_SOURCE_ROOT}/build/deps/dxc/bin/x64/dxc.exe" CACHE FILEPATH "DXC shader compiler")
    if(NOT EXISTS "${RESOT_SDL_ROOT}/include/SDL3/SDL_gpu.h" OR NOT EXISTS "${RESOT_DXC}")
        message(FATAL_ERROR "Native GPU dependencies missing. Run tools/setup-native-gpu.ps1 first.")
    endif()
    find_package(Python3 REQUIRED COMPONENTS Interpreter)
    set(native_shaders "${CMAKE_BINARY_DIR}/native-shaders")
    add_custom_command(OUTPUT "${native_shaders}/nv2a_native_shaders.h"
        COMMAND "${Python3_EXECUTABLE}" "${RESOT_SOURCE_ROOT}/tools/build-native-shaders.py"
                --dxc "${RESOT_DXC}" --output "${native_shaders}"
        DEPENDS "${RESOT_SOURCE_ROOT}/tools/build-native-shaders.py"
            "${RESOT_SOURCE_ROOT}/tools/native-vertex-source.py"
                "${RESOT_SOURCE_ROOT}/tools/check-hlsl.py"
                "${CMAKE_CURRENT_SOURCE_DIR}/nv2a_hw_d3d11.inc"
        VERBATIM)
    target_sources(xbox_kernel PRIVATE "${native_shaders}/nv2a_native_shaders.h")
    target_include_directories(xbox_kernel PRIVATE "${RESOT_SDL_ROOT}/include" "${native_shaders}")
    # RE-SoT: dedicated native shaders share the host compiler/optimizer.
    if(NOT TARGET resot_shader_compiler)
        add_subdirectory("${RESOT_SOURCE_ROOT}/port/render" "${CMAKE_BINARY_DIR}/shader-compiler")
    endif()
    target_link_libraries(xbox_kernel PUBLIC "${RESOT_SDL_ROOT}/lib/x64/SDL3.lib" resot_shader_compiler)
    # Optional native backend: D3D11 must still boot when SDL3.dll is absent.
    target_link_libraries(xbox_kernel PUBLIC delayimp)
    target_link_options(xbox_kernel INTERFACE "/DELAYLOAD:SDL3.dll")
    # platform is an INTERFACE target on Windows: it contributes the src/
    # include path that "platform/xbox_winnt.h" resolves against.
    target_link_libraries(xbox_kernel PUBLIC platform kernel32 bcrypt)
else()
    # Linux: platform layer (POSIX host primitives) + OpenSSL for crypto.
    find_package(OpenSSL REQUIRED)
    target_link_libraries(xbox_kernel PUBLIC platform OpenSSL::Crypto)
endif()

if(MSVC)
    target_compile_options(xbox_kernel PRIVATE /W4 /WX- /O2 /GS- /Gy)
    target_compile_definitions(xbox_kernel PRIVATE _CRT_SECURE_NO_WARNINGS)
else()
    target_compile_options(xbox_kernel PRIVATE -Wall -Wextra -Wno-unused-parameter -O2)
endif()

target_compile_definitions(xbox_kernel PRIVATE $<$<CONFIG:Debug>:_DEBUG>)
