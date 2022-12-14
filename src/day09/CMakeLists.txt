add_executable(D09)
target_sources(D09
    PRIVATE
        main.cpp
        Puzzle1.h
        Puzzle1.cpp
        Puzzle2.h
        Puzzle2.cpp
)

add_library(LibD09 STATIC)
target_sources(LibD09
    PRIVATE
        Puzzle1.cpp
        Puzzle2.cpp
)

file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/input.txt
DESTINATION ${CMAKE_CURRENT_BINARY_DIR}/Debug)

file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/sample1.txt
DESTINATION ${CMAKE_CURRENT_BINARY_DIR}/Debug)

file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/sample2.txt
DESTINATION ${CMAKE_CURRENT_BINARY_DIR}/Debug)
