add_executable(tst_D02P1)
target_sources(tst_D02P1
    PUBLIC
        tst_Puzzle1.cpp
        # tst_Puzzle2.cpp
)
target_link_libraries(tst_D02P1
    GTest::gtest
    GTest::gtest_main
    LibD02
)
target_include_directories(tst_D02P1
    PUBLIC
        "../../src/day02"
)

gtest_discover_tests(
    tst_D02P1
    # tst_D02Puzzle2
)
