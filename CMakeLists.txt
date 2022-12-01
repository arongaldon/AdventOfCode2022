cmake_policy(SET CMP0048 NEW)

project(
    AdventOfCode2022
    VERSION "2022"
    DESCRIPTION "Advent of Code 2022 - Aron Galdon Gines"
    HOMEPAGE_URL github.com/arongaldon
    LANGUAGES CXX
)

cmake_minimum_required(VERSION 3.16)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

if(MSVC)
    add_compile_options(-permissive- -Zc:__cplusplus)
    set(CMAKE_CXX_FLAGS_DEBUG
        "/DWIN32 /D_WINDOWS /EHsc /WX /wd4355 /wd4251 /wd4250 /wd4996"
        CACHE STRING "Debug compiler flags" FORCE
    )
endif()

add_subdirectory(src)
add_subdirectory(tests)
