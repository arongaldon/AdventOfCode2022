add_executable(tst_D01)
target_sources(tst_D01
    PUBLIC
        tst_Puzzle1.cpp
        tst_Puzzle2.cpp
)
target_link_libraries(tst_D01
    GTest::gtest
    GTest::gtest_main
    LibD01
)
target_include_directories(tst_D01 PUBLIC "../../src/day01")

gtest_discover_tests(tst_D01)
