add_executable(D08)
target_sources(D08
    PRIVATE
        main.cpp
        Puzzle1.h
        Puzzle1.cpp
        Puzzle2.h
        Puzzle2.cpp
)

add_library(LibD08 STATIC)
target_sources(LibD08
    PRIVATE
        Puzzle1.cpp
        Puzzle2.cpp
)

file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/input.txt
DESTINATION ${CMAKE_CURRENT_BINARY_DIR}/Debug)
