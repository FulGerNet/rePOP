cmake_minimum_required(VERSION 3.22)

# reSOT for Android (arm64-v8a): the native half of the one app that runs both
# Xbox builds, configured by Gradle (app/build.gradle) through the NDK.
#
#   libSDL3.so              SDL 3.4.18 with reSOT's Vulkan query extension
#                           (tools/patch-sdl-gpu-query.py), the window, input,
#                           audio and the Vulkan GPU device
#   libresot_demo.so        xbox-demo: its lifted code (source/xbox-demo/gen),
#                           the shared runtime built with RESOT_RUNTIME_DEMO,
#                           and the Android host (src/)
#   libresot_retail.so      xbox-retail, likewise with RESOT_RUNTIME_RETAIL
#   libresot_launcher.so    the launcher's game detection (default.xbe SHA-256)
#
# Both game libraries are in every APK; GameActivity loads one of them in its
# own process. A target whose lifted sources are absent (tools/recomp.ps1 has
# not been run for it) is left out, and the launcher reports it.
project(reSOT_android C CXX)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_CXX_STANDARD 17)

get_filename_component(RESOT_ROOT "${CMAKE_CURRENT_LIST_DIR}/../.." ABSOLUTE)
set(RT "${RESOT_ROOT}/port/third_party/xboxrecomp/src")
set(RESOT_SDL_SOURCE "${RESOT_ROOT}/build/deps/sdl-source/SDL3-3.4.18" CACHE PATH
    "SDL3 source, patched (tools/setup-android.ps1)")
set(RESOT_DXC "${RESOT_ROOT}/build/deps/dxc/bin/x64/dxc.exe" CACHE FILEPATH "DXC shader compiler (host)")
set(RESOT_PYTHON "" CACHE FILEPATH "Host Python 3")
if(NOT EXISTS "${RESOT_SDL_SOURCE}/include/SDL3/SDL_gpu.h" OR NOT EXISTS "${RESOT_DXC}")
    message(FATAL_ERROR "Android dependencies missing. Run tools/setup-android.ps1 first.")
endif()
if(NOT RESOT_PYTHON)
    find_program(RESOT_PYTHON NAMES python3 python NO_CMAKE_FIND_ROOT_PATH REQUIRED)
endif()

# ── SDL3 ───────────────────────────────────────────────────────
set(SDL_SHARED ON CACHE BOOL "" FORCE)
set(SDL_STATIC OFF CACHE BOOL "" FORCE)
set(SDL_TEST_LIBRARY OFF CACHE BOOL "" FORCE)
set(SDL_TESTS OFF CACHE BOOL "" FORCE)
set(SDL_EXAMPLES OFF CACHE BOOL "" FORCE)
set(SDL_ANDROID_JAR OFF CACHE BOOL "" FORCE)
add_subdirectory("${RESOT_SDL_SOURCE}" sdl EXCLUDE_FROM_ALL)

# libadrenotools and its pinned linker namespace dependency are fetched by
# setup-android.ps1. Hooks must be shipped/extracted alongside the game DSOs.
set(BUILD_SHARED_LIBS OFF)
add_subdirectory("${RESOT_ROOT}/build/deps/libadrenotools" adrenotools EXCLUDE_FROM_ALL)
set_target_properties(adrenotools PROPERTIES POSITION_INDEPENDENT_CODE ON)
set_target_properties(linkernsbypass PROPERTIES POSITION_INDEPENDENT_CODE ON)

# ── host shaders: the same HLSL as Windows, SPIR-V for Vulkan ──
add_subdirectory("${RESOT_ROOT}/port/render" shader-compiler)

set(native_shaders "${CMAKE_BINARY_DIR}/native-shaders")
add_custom_command(OUTPUT "${native_shaders}/nv2a_native_shaders.h"
    COMMAND "${RESOT_PYTHON}" "${RESOT_ROOT}/tools/build-native-shaders.py"
            --dxc "${RESOT_DXC}" --output "${native_shaders}"
    DEPENDS "${RESOT_ROOT}/tools/build-native-shaders.py"
            "${RESOT_ROOT}/tools/native-vertex-source.py"
            "${RESOT_ROOT}/tools/check-hlsl.py"
            "${RT}/kernel/nv2a_hw_d3d11.inc"
    VERBATIM)
add_custom_target(resot_native_shaders DEPENDS "${native_shaders}/nv2a_native_shaders.h")

# The lifted x86 code and the runtime assume x86's arithmetic: wrapping signed
# overflow, signed char, no fused multiply-add between the guest's separate
# x87/SSE operations, and pointer type punning through MEM*().
set(RESOT_GUEST_FLAGS -fwrapv -fsigned-char -ffp-contract=off -fno-strict-aliasing)

# ── the shared runtime, as the Windows build has it ─────────────
set(RUNTIME_SOURCES
    ${RT}/platform/win32_compat.c
    ${RT}/kernel/kernel_path.c ${RT}/kernel/kernel_pool.c ${RT}/kernel/kernel_rtl.c
    ${RT}/kernel/kernel_memory.c ${RT}/kernel/kernel_file.c ${RT}/kernel/kernel_thread.c
    ${RT}/kernel/kernel_sync.c ${RT}/kernel/kernel_hal.c ${RT}/kernel/kernel_xbox.c
    ${RT}/kernel/kernel_ob.c ${RT}/kernel/kernel_io.c ${RT}/kernel/kernel_crypto.c
    ${RT}/kernel/kernel_thunks.c ${RT}/kernel/kernel_bridge.c ${RT}/kernel/xbox_memory_layout.c
    ${RT}/kernel/guest_vmem.c ${RT}/kernel/icall_feedback.c ${RT}/kernel/recomp_trace.c
    ${RT}/kernel/nv2a_pb_scan.c ${RT}/kernel/nv2a_pb_exec.c ${RT}/kernel/nv2a_vsh_interp.c
    ${RT}/kernel/nv2a_combiner.c
    ${RT}/audio/dsound_device.c ${RT}/audio/wma_decoder.c
    ${RT}/apu/apu_core.c ${RT}/apu/apu_vp.c ${RT}/apu/apu_dsp.c ${RT}/apu/apu_mmio_hook.c
    # src/nv2a (xemu's register model, its D3D8 hookup, another title's menu
    # replayer) and src/d3d are not built: the pushbuffer executor in kernel/
    # replaces them, and on Windows nothing pulls them out of their static
    # libraries either.
    ${RT}/usb/ohci.c ${RT}/usb/usb_gamepad.c
    ${RT}/video/video_player.c ${RT}/video/video_pump.c ${RT}/video/fb_present.c)
# What the Windows host's main.c, xinput_device.c, apu_xaudio2.c and
# options.c do, for Android; scene.c and the manual overrides are shared.
set(HOST_SOURCES
    ${CMAKE_CURRENT_LIST_DIR}/src/main_android.c
    ${CMAKE_CURRENT_LIST_DIR}/src/driver_android.c
    ${CMAKE_CURRENT_LIST_DIR}/src/input_android.c
    ${CMAKE_CURRENT_LIST_DIR}/src/audio_android.c
    ${CMAKE_CURRENT_LIST_DIR}/src/options_android.c
    ${CMAKE_CURRENT_LIST_DIR}/src/font_android.c
    ${CMAKE_CURRENT_LIST_DIR}/src/host_files.c
    ${CMAKE_CURRENT_LIST_DIR}/src/sha256.c
    ${RESOT_ROOT}/port/windows/src/scene.c
    ${RESOT_ROOT}/port/game/recomp_manual.c
    ${RESOT_ROOT}/port/game/resot_menu_pointer.c)

function(resot_android_game id lib runtime_define)
    set(dir "${RESOT_ROOT}/source/${id}")
    file(GLOB_RECURSE gen CONFIGURE_DEPENDS "${dir}/gen/*.c")
    if(NOT gen)
        message(WARNING "reSOT: ${id} left out of the APK (no lifted sources; run tools/recomp.ps1 -Target ${id})")
        return()
    endif()
    add_library(${lib} SHARED ${RUNTIME_SOURCES} ${HOST_SOURCES} "${dir}/target_hooks.c" ${gen})
    add_dependencies(${lib} resot_native_shaders)
    target_compile_definitions(${lib} PRIVATE ${runtime_define}=1 _GNU_SOURCE
        "RESOT_DEFAULT_ASPECT=\"16:9\"")
    target_include_directories(${lib} PRIVATE
        "${CMAKE_CURRENT_LIST_DIR}/compat"
        "${dir}" "${dir}/gen"
        "${RT}" "${RT}/kernel" "${RT}/platform" "${RT}/apu" "${RT}/nv2a" "${RT}/usb"
        "${RT}/input" "${RT}/audio" "${RT}/video" "${RT}/d3d"
        "${RESOT_ROOT}/port/third_party/xboxrecomp/include/xbox"
        "${native_shaders}")
    target_compile_options(${lib} PRIVATE ${RESOT_GUEST_FLAGS} -O2 -w)
    target_link_libraries(${lib} PRIVATE SDL3::SDL3-shared adrenotools android log m resot_shader_compiler)
    add_dependencies(${lib} main_hook file_redirect_hook gsl_alloc_hook hook_impl)
    # Unresolved symbols are build errors, not a crash when the game starts.
    target_link_options(${lib} PRIVATE "-Wl,--no-undefined")
    # RE-SoT: the lifted routines stay exported (the crash handler names them
    # with dladdr), which made every call between them go through the PLT:
    # 8,743 sub_* jump slots in the 2026-10-25 retail library. Bind calls
    # inside the library directly; nothing outside it interposes them.
    target_link_options(${lib} PRIVATE "-Wl,-Bsymbolic-functions")
endfunction()

resot_android_game(xbox-demo resot_demo RESOT_RUNTIME_DEMO)
resot_android_game(xbox-retail resot_retail RESOT_RUNTIME_RETAIL)

# ── the launcher ───────────────────────────────────────────────
add_library(resot_launcher SHARED
    ${CMAKE_CURRENT_LIST_DIR}/src/launcher_jni.c
    ${CMAKE_CURRENT_LIST_DIR}/src/host_files.c
    ${CMAKE_CURRENT_LIST_DIR}/src/sha256.c)
foreach(other xbox-demo xbox-retail)
    file(READ "${RESOT_ROOT}/source/${other}/target.h" facts)
    string(REGEX MATCH "#define[ \t]+RESOT_XBE_SHA256[ \t]+\"([A-Fa-f0-9]+)\"" match "${facts}")
    string(TOUPPER "${CMAKE_MATCH_1}" hash)
    string(REPLACE "xbox-" "" short "${other}")
    string(TOUPPER "${short}" short)
    set_property(SOURCE ${CMAKE_CURRENT_LIST_DIR}/src/launcher_jni.c APPEND PROPERTY
        COMPILE_DEFINITIONS "RESOT_${short}_XBE_SHA256=\"${hash}\"")
    set_property(DIRECTORY APPEND PROPERTY CMAKE_CONFIGURE_DEPENDS "${RESOT_ROOT}/source/${other}/target.h")
endforeach()
# The disc is read by the launcher in Java (XisoExtractor.java), not by
# extract-xiso: Android refuses to reopen the picked document by path.
target_link_libraries(resot_launcher PRIVATE log)
