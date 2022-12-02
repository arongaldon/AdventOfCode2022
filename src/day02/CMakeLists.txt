add_executable(D02)
target_sources(D02
    PRIVATE
        main.cpp
        Puzzle1.h
        Puzzle1.cpp
        Puzzle2.h
        Puzzle2.cpp
)

add_library(LibD02 STATIC)
target_sources(LibD02
    PRIVATE
        Puzzle1.cpp
        Puzzle2.cpp
)

file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/input
DESTINATION ${CMAKE_CURRENT_BINARY_DIR}/Debug)
