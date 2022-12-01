add_executable(tst_Puzzle1)
target_sources(tst_Puzzle1
    PUBLIC
        tst_Puzzle1.cpp
        # tst_Puzzle2.cpp
)
target_link_libraries(tst_Puzzle1
    GTest::gtest
    GTest::gtest_main
    LibDay01
)
target_include_directories(tst_Puzzle1
    PUBLIC
        "../../src/day01"
)

gtest_discover_tests(
    tst_Puzzle1
    # tst_Puzzle2
)
