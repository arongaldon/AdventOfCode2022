add_executable(D05)
target_sources(D05
    PRIVATE
        main.cpp
        Puzzle1.h
        Puzzle1.cpp
        Puzzle2.h
        Puzzle2.cpp
)

add_library(LibD05 STATIC)
target_sources(LibD05
    PRIVATE
        Puzzle1.cpp
        Puzzle2.cpp
)

file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/input
DESTINATION ${CMAKE_CURRENT_BINARY_DIR}/Debug)

file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/sample_input
DESTINATION ${CMAKE_CURRENT_BINARY_DIR}/Debug)

file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/sample_input2
DESTINATION ${CMAKE_CURRENT_BINARY_DIR}/Debug)