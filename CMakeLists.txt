cmake_minimum_required(VERSION 3.24)
project(littlememory C NONE)

set(CMAKE_C_STANDARD 23)

add_library(littlememory STATIC
        src/allocate.c
        src/deallocate.c
        src/reallocate.c
        src/set.c
)
