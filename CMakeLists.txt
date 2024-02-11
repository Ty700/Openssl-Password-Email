cmake_minimum_required(VERSION 3.20)

project(SecurePassword VERSION 1.0.0 LANGUAGES C)

set(C_STANDARD_REQUIRED 17)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_C_EXTENSIONS OFF)

set(MAIN Executable)
set(LIBRARY Library)

set(C_FLAGS
    -Wall
    )

add_subdirectory(src)
add_subdirectory(include)

target_compile_options(${MAIN} PRIVATE ${C_FLAGS})

target_include_directories(${MAIN} PRIVATE include)

target_include_directories(${LIBRARY} PRIVATE include)

target_link_libraries(${MAIN} ${LIBRARY})

set_target_properties(${MAIN} PROPERTIES RUNTIME_OUTPUT_DIRECTORY "../../bin")

