#include "Puzzle2.h"
#include <gtest/gtest.h>

using namespace AronGaldonGines::AOC2022;

TEST(tst_Puzzle2, test_threeTopCalories)
{
    D01::Puzzle2 d01p2;
    auto top3 = d01p2.threeTopCalories({100, 200, 300, 400, 500, 450, 350, 250, 150, 50});
    EXPECT_EQ(top3.at(0), 500);
    EXPECT_EQ(top3.at(1), 450);
    EXPECT_EQ(top3.at(2), 400);
}

TEST(tst_Puzzle2, test_sumThreeTopCalories)
{
    D01::Puzzle2 d01p2;
    auto sumTop3 = d01p2.sumThreeTopCalories({300, 400, 500});
    EXPECT_EQ(sumTop3, 1200);
}
