# RE-SoT: exercise Android's production POSIX save backend on a Windows host.
cmake_minimum_required(VERSION 3.20)
project(kernel_save_posix_test C)
find_package(Python3 REQUIRED COMPONENTS Interpreter)
set(KERNEL "${CMAKE_CURRENT_LIST_DIR}/../../src/kernel")
add_custom_command(OUTPUT "${CMAKE_CURRENT_BINARY_DIR}/production_posix_file.inc"
    COMMAND "${Python3_EXECUTABLE}" "${CMAKE_CURRENT_LIST_DIR}/extract_backend.py"
            "${KERNEL}/kernel_file.c" "${CMAKE_CURRENT_BINARY_DIR}/production_posix_file.inc"
    DEPENDS "${KERNEL}/kernel_file.c" "${CMAKE_CURRENT_LIST_DIR}/extract_backend.py")
add_executable(kernel_save_posix_test test_main.c "${KERNEL}/kernel_crypto.c"
    "${CMAKE_CURRENT_BINARY_DIR}/production_posix_file.inc")
target_include_directories(kernel_save_posix_test PRIVATE "${KERNEL}" "${KERNEL}/.."
    "${CMAKE_CURRENT_BINARY_DIR}")
enable_testing()
add_test(NAME android_retail_production_save_io COMMAND kernel_save_posix_test)
