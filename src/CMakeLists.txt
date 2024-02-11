set(EXE_SOURCES
    "main.c")

set(LIB_SOURCES
    "parameters.c")

add_executable(${MAIN} ${EXE_SOURCES})

add_library(${LIBRARY}
            ${LIB_SOURCES}
            ${LIB_HEADERS}
            )   
