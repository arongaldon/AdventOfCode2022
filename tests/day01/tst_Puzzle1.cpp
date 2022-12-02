#include "Puzzle1.h"
#include <gtest/gtest.h>

using namespace AronGaldonGines::AOC2022;

TEST(tst_Puzzle1, test_totalsByElf)
{
    D01::Puzzle1 day01P1;
    vector<string> lines = {"60", "40", "", "150", "50"};
    auto totals = day01P1.totalsByElf(lines);
    EXPECT_EQ(totals.size(), 2);
    EXPECT_EQ(totals.at(0), 100);
    EXPECT_EQ(totals.at(1), 200);
}

TEST(tst_Puzzle1, test_maxCalories)
{
    D01::Puzzle1 day01P1;
    vector<int> totals = {100, 200, 300, 400, 500, 450, 350, 250, 150, 50};
    EXPECT_EQ(day01P1.maxCalories(totals), 500);
}
