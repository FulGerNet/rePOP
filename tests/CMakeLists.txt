# Include after the existing xboxrecomp runtime target has been configured.
add_executable(reww_tls_layout_test tls_layout.c)
target_include_directories(reww_tls_layout_test PRIVATE
    "${PROJECT_SOURCE_DIR}/port/third_party/xboxrecomp/src/kernel")
target_link_libraries(reww_tls_layout_test PRIVATE xboxrecomp)
add_executable(reww_debug_boot ../tools/debug-boot.c)
target_link_libraries(reww_debug_boot PRIVATE dbghelp)
