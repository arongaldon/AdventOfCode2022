add_executable(tst_D01P1)
target_sources(tst_D01P1
    PUBLIC
        tst_Puzzle1.cpp
        # tst_Puzzle2.cpp
)
target_link_libraries(tst_D01P1
    GTest::gtest
    GTest::gtest_main
    LibD01
)
target_include_directories(tst_D01P1
    PUBLIC
        "../../src/day01"
)

gtest_discover_tests(
    tst_D01P1
    # tst_D01Puzzle2
)
