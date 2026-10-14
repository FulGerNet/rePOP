cmake_minimum_required(VERSION 3.20)

# reSOT: static recompilation of the Xbox builds of
# Prince of Persia: The Sands of Time (demo and retail).
#
# One executable per target. A target is built when its lifted sources exist
# (source/<target>/gen, produced from the user's own XBE by tools/recomp.ps1);
# they are derived from the game and are never part of the repository.
project(reSOT C RC)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)
add_compile_definitions(WIN32_LEAN_AND_MEAN NOMINMAX)

if(NOT CMAKE_SIZEOF_VOID_P EQUAL 8)
    message(FATAL_ERROR "reSOT requires a 64-bit build (-A x64): the runtime maps the 4 GB guest space")
endif()

# Diagnostic build: every lifted call verifies that ebx/esi/edi and esp came
# back intact and names the callee when they did not (<name>-abi.exe).
option(RESOT_ABI_CHECK "Build the callee-saved register checker into every call" OFF)
if(RESOT_ABI_CHECK)
    add_compile_definitions(RECOMP_ABI_CHECK)
endif()

# Picture shape when RECOMP_HW_ASPECT is not set: "16:9" widens Hor+ (more
# scene at the sides, 2D at its 4:3 size); empty keeps the original 4:3.
set(RESOT_ASPECT "16:9" CACHE STRING "Default picture shape (w:h), empty for 4:3")

# Recompiler toolkit and Xbox runtime (kernel, NV2A, APU, USB, input, video).
set(XBOXRECOMP_DIR "${CMAKE_CURRENT_SOURCE_DIR}/port/third_party/xboxrecomp")
# The runtime is built with symbols for its static functions, so the crash
# report, the thread dump and the profiler in port/windows/src/main.c can name them.
# Only the runtime: debug information for the lifted sources would be large.
if(MSVC)
    set(resot_c_flags_release "${CMAKE_C_FLAGS_RELEASE}")
    set(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} /Zi")
endif()
add_subdirectory(${XBOXRECOMP_DIR} ${CMAKE_BINARY_DIR}/xboxrecomp)
if(MSVC)
    set(CMAKE_C_FLAGS_RELEASE "${resot_c_flags_release}")
endif()

function(resot_add_target id exe_name)
    set(dir "${CMAKE_CURRENT_SOURCE_DIR}/source/${id}")
    file(GLOB gen CONFIGURE_DEPENDS "${dir}/gen/*.c")
    if(NOT gen)
        message(STATUS "reSOT: ${id} skipped (no lifted sources; run tools/recomp.ps1 -Target ${id})")
        return()
    endif()
    # Entry hooks with this build's addresses (see tools/recomp.ps1).
    set(hooks "")
    if(EXISTS "${dir}/target_hooks.c")
        set(hooks "${dir}/target_hooks.c")
    endif()
    add_executable(${exe_name} WIN32
        port/windows/src/main.c
        port/game/recomp_manual.c
        ${hooks}
        ${gen})
    target_link_libraries(${exe_name} PRIVATE
        xboxrecomp d3d11 dxgi dxguid xinput winmm dbghelp)
    target_include_directories(${exe_name} PRIVATE
        ${dir} ${dir}/gen ${XBOXRECOMP_DIR}/include)
    file(TO_NATIVE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/Assets/${id}" assets)
    string(REPLACE "\\" "\\\\" assets "${assets}")
    target_compile_definitions(${exe_name} PRIVATE "RESOT_ASSET_DIR=\"${assets}\"")
    if(RESOT_ASPECT)
        target_compile_definitions(${exe_name} PRIVATE "RESOT_DEFAULT_ASPECT=\"${RESOT_ASPECT}\"")
    endif()
    # Icon and version resource of the executable.
    target_sources(${exe_name} PRIVATE port/windows/res/resot.rc)
    set(out "${exe_name}")
    if(RESOT_ABI_CHECK)
        set(out "${exe_name}-abi")
    endif()
    set_target_properties(${exe_name} PROPERTIES
        OUTPUT_NAME "${out}"
        RUNTIME_OUTPUT_DIRECTORY_RELEASE "${CMAKE_CURRENT_SOURCE_DIR}/bin"
        RUNTIME_OUTPUT_DIRECTORY_RELWITHDEBINFO "${CMAKE_CURRENT_SOURCE_DIR}/bin"
        RUNTIME_OUTPUT_DIRECTORY_DEBUG "${CMAKE_CURRENT_SOURCE_DIR}/bin/debug")
    if(MSVC)
        target_compile_options(${exe_name} PRIVATE /bigobj /MP)
        target_link_options(${exe_name} PRIVATE /LARGEADDRESSAWARE /DEBUG)
    endif()
endfunction()

resot_add_target(xbox-demo   sot-xbox-demo)
resot_add_target(xbox-retail sot-xbox-retail)
