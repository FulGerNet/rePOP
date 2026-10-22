# RE-SoT: real GPU draws and readbacks through both native command encoders.
cmake_minimum_required(VERSION 3.20)
project(resot_native_gpu_smoke C CXX) # RE-SoT: real shader-cache concurrency test uses C++ threads.
enable_testing()
add_executable(geometry_cache_regression "../../../../../tools/tests/test-geometry-cache.c") # RE-SoT: exact reuse/lifetime admission.
add_test(NAME exact_geometry_cache COMMAND geometry_cache_regression)
# RE-SoT: partial Vulkan set binds must select exactly their dynamic offsets.
add_executable(descriptor_bind_regression "../../../../../tools/tests/test-descriptor-bind.c")
add_test(NAME selective_descriptor_bind COMMAND descriptor_bind_regression)
# RE-SoT: compare bounded packet batching with the scalar decoder.
add_executable(pb_payload_regression "../../../../../tools/tests/test-pb-payload.c" "../../src/kernel/nv2a_vsh_interp.c")
target_include_directories(pb_payload_regression PRIVATE "../../src/kernel")
add_test(NAME bounded_pushbuffer_payload COMMAND pb_payload_regression)
get_filename_component(RESOT_ROOT "${CMAKE_CURRENT_LIST_DIR}/../../../../.." ABSOLUTE)
set(SDL_ROOT "${RESOT_ROOT}/build/deps/SDL3-3.4.18" CACHE PATH "SDL GPU SDK")
find_package(Python3 REQUIRED COMPONENTS Interpreter)
add_subdirectory("${RESOT_ROOT}/port/render" shader-compiler)
# RE-SoT: exercise atomic cache replacement and rejection with real SPIR-V.
add_executable(shader_cache_regression "${RESOT_ROOT}/tools/tests/test-shader-cache.cpp")
target_compile_features(shader_cache_regression PRIVATE cxx_std_17)
target_link_libraries(shader_cache_regression PRIVATE resot_shader_compiler)
add_test(NAME translated_shader_cache COMMAND shader_cache_regression)
set_tests_properties(translated_shader_cache PROPERTIES TIMEOUT 90)
add_custom_command(OUTPUT "${CMAKE_CURRENT_BINARY_DIR}/shaders/nv2a_native_shaders.h"
    COMMAND "${Python3_EXECUTABLE}" "${RESOT_ROOT}/tools/build-native-shaders.py"
            --dxc "${RESOT_ROOT}/build/deps/dxc/bin/x64/dxc.exe"
            --output "${CMAKE_CURRENT_BINARY_DIR}/shaders"
            --test-border
    DEPENDS "${RESOT_ROOT}/tools/build-native-shaders.py"
            "${RESOT_ROOT}/tools/native-vertex-source.py"
            "${RESOT_ROOT}/port/third_party/xboxrecomp/src/kernel/nv2a_hw_d3d11.inc"
    VERBATIM)
# RE-SoT: one producer; two VS projects must not write the header concurrently.
add_custom_target(native_gpu_shaders DEPENDS "${CMAKE_CURRENT_BINARY_DIR}/shaders/nv2a_native_shaders.h")
add_executable(native_gpu_smoke test_native_gpu.c)
add_dependencies(native_gpu_smoke native_gpu_shaders)
target_include_directories(native_gpu_smoke PRIVATE "${SDL_ROOT}/include" "${CMAKE_CURRENT_BINARY_DIR}/shaders")
target_link_libraries(native_gpu_smoke PRIVATE resot_shader_compiler "${SDL_ROOT}/lib/x64/SDL3.lib")
set(RESOT_QUERY_SDL "${RESOT_ROOT}/build/deps/sdl-query-build/Release/SDL3.dll" CACHE FILEPATH "SDL GPU with native query ABI")
if(NOT EXISTS "${RESOT_QUERY_SDL}")
    message(FATAL_ERROR "Run tools/setup-native-gpu.ps1 to build SDL with native visibility queries")
endif()
add_custom_command(TARGET native_gpu_smoke POST_BUILD COMMAND ${CMAKE_COMMAND} -E
    copy_if_different "${RESOT_QUERY_SDL}" "$<TARGET_FILE_DIR:native_gpu_smoke>")
foreach(backend IN ITEMS direct3d12 vulkan)
    add_test(NAME native_${backend} COMMAND native_gpu_smoke ${backend})
    set_tests_properties(native_${backend} PROPERTIES TIMEOUT 600) # RE-SoT: cold driver/optimizer comparisons of 64 programs.
endforeach()
add_executable(guest_probe_smoke test_guest_probe.c)
add_test(NAME retail_guest_label_probe COMMAND guest_probe_smoke)
add_executable(native_scale_smoke test_native_scale.c)
add_test(NAME shared_internal_scale COMMAND native_scale_smoke)
# RE-SoT: the retail HUD ring must follow its column beyond 16:9.
add_executable(hud_layout_smoke test_hud_layout.c)
add_test(NAME retail_forming_tank_layout COMMAND hud_layout_smoke)
# RE-SoT: same effect budget is used by Windows D3D11/D3D12/Vulkan and Android.
add_executable(effect_quality_smoke test_effect_quality.c)
add_test(NAME shared_effect_quality COMMAND effect_quality_smoke)
add_executable(save_access_smoke test_save_access.c)
add_test(NAME retail_save_random_write COMMAND save_access_smoke)
add_executable(texture_upload_smoke test_texture_upload.c)
add_test(NAME retail_bulk_texture_upload COMMAND texture_upload_smoke)
# RE-SoT: compare actual native vertex interpreters and compact input fetch.
add_executable(native_vsh_compare test_native_vsh.c)
add_dependencies(native_vsh_compare native_gpu_shaders)
target_include_directories(native_vsh_compare PRIVATE "${SDL_ROOT}/include" "${CMAKE_CURRENT_BINARY_DIR}/shaders")
target_link_libraries(native_vsh_compare PRIVATE resot_shader_compiler "${SDL_ROOT}/lib/x64/SDL3.lib")
foreach(backend IN ITEMS direct3d12 vulkan)
    add_test(NAME vertex_program_${backend} COMMAND native_vsh_compare ${backend})
    set_tests_properties(vertex_program_${backend} PROPERTIES TIMEOUT 180)
endforeach()
