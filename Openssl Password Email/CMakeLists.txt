cmake_minimum_required(VERSION 3.20)

project(SecurePassword VERSION 1.0.0 LANGUAGES C)

set(C_STANDARD_REQUIRED 17)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_C_EXTENSIONS OFF)

set(MAIN Executable)
set(LIBRARY my_lib)

add_subdirectory(src)
add_subdirectory(include)

set_target_properties(${MAIN} PROPERTIES RUNTIME_OUTPUT_DIRECTORY "../../bin")