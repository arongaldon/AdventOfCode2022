add_executable(D03)
target_sources(D03
    PRIVATE
        main.cpp
        Puzzle1.h
        Puzzle1.cpp
        Puzzle2.h
        Puzzle2.cpp
)

add_library(LibD03 STATIC)
target_sources(LibD03
    PRIVATE
        Puzzle1.cpp
        Puzzle2.cpp
)

file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/input
DESTINATION ${CMAKE_CURRENT_BINARY_DIR}/Debug)
