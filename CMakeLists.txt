cmake_minimum_required(VERSION 3.20)

# reSOT: static recompilation of the Xbox builds of
# Prince of Persia: The Sands of Time (demo and retail).
#
# One executable per target. A target is built when its lifted sources exist
# (source/<target>/gen, produced from the user's own XBE by tools/recomp.ps1);
# they are derived from the game and are never part of the repository.
# Portable releases include the C runtime; users do not need Visual Studio
# or a separately installed Visual C++ redistributable to start the game.
set(CMAKE_MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Debug>:Debug>")
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

# One target per build tree. Each target has its own copy of the recompiler
# toolkit and Xbox runtime (kernel, NV2A, APU, USB, input, video) under
# port/third_party/xboxrecomp-demo and xboxrecomp-retail, so a runtime change
# made for one executable cannot change the other. tools/recomp.ps1
# configures build/<target> with -DRESOT_TARGET=<target>.
set(RESOT_TARGET "" CACHE STRING "Target to build: xbox-demo or xbox-retail")
set_property(CACHE RESOT_TARGET PROPERTY STRINGS xbox-demo xbox-retail)
if(NOT RESOT_TARGET MATCHES "^(xbox-demo|xbox-retail)$")
    message(FATAL_ERROR "Set -DRESOT_TARGET=xbox-demo or -DRESOT_TARGET=xbox-retail (tools/recomp.ps1 does)")
endif()
string(REPLACE "xbox-" "" resot_runtime "${RESOT_TARGET}")
set(XBOXRECOMP_DIR "${CMAKE_CURRENT_SOURCE_DIR}/port/third_party/xboxrecomp-${resot_runtime}")
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
    # The player needs only the compiled EXE and disc assets. Embed the user's
    # checked guest image as a build output; no game bytes enter the repository.
    set(guest_xbe "${CMAKE_CURRENT_SOURCE_DIR}/Assets/${id}/default.xbe")
    set_property(DIRECTORY APPEND PROPERTY CMAKE_CONFIGURE_DEPENDS
        "${guest_xbe}" "${dir}/target.h")
    if(NOT EXISTS "${guest_xbe}")
        message(FATAL_ERROR "Missing ${guest_xbe}: required to build ${id}")
    endif()
    file(READ "${dir}/target.h" target_facts)
    string(REGEX MATCH "#define[ \t]+RESOT_XBE_SHA256[ \t]+\"([A-Fa-f0-9]+)\"" hash_match "${target_facts}")
    set(expected_hash "${CMAKE_MATCH_1}")
    file(SHA256 "${guest_xbe}" actual_hash)
    string(TOUPPER "${actual_hash}" actual_hash)
    string(TOUPPER "${expected_hash}" expected_hash)
    if(NOT expected_hash OR NOT actual_hash STREQUAL expected_hash)
        message(FATAL_ERROR "Unsupported ${id} default.xbe (SHA-256 mismatch)")
    endif()
    set(guest_resource "${CMAKE_CURRENT_BINARY_DIR}/${id}-guest-image.rc")
    file(GENERATE OUTPUT "${guest_resource}" CONTENT "101 RCDATA \"${guest_xbe}\"\n")
    set_source_files_properties("${guest_resource}" PROPERTIES OBJECT_DEPENDS "${guest_xbe}")
    add_executable(${exe_name} WIN32
        port/windows/src/main.c
        port/windows/src/scene.c
        port/windows/src/options.c
        port/windows/src/diag.c
        port/game/recomp_manual.c
        "${guest_resource}"
        ${hooks}
        ${gen})
    target_link_libraries(${exe_name} PRIVATE
        xboxrecomp d3d11 dxgi dxguid xinput winmm dbghelp bcrypt ole32 shell32 uuid)
    target_include_directories(${exe_name} PRIVATE
        ${dir} ${dir}/gen ${XBOXRECOMP_DIR}/include)
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

resot_add_target(${RESOT_TARGET} sot-${RESOT_TARGET})
