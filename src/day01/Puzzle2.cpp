#include "Puzzle2.h"

#include <fstream>

using namespace AronGaldonGines::AOC2022::Day01;

Top3 Puzzle2::threeTopCalories(const vector<int> &totals) const
{
    Top3 top3 {0, 0, 0};
    for (auto total : totals) {
        if (total > top3[0]) {
            top3[2] = top3[1];
            top3[1] = top3[0];
            top3[0] = total;
        } else if (total > top3[1]) {
            top3[2] = top3[1];
            top3[1] = total;
        } else if (total > top3[2])
            top3[2] = total;
    }
    return top3;
}

int Puzzle2::sumThreeTopCalories(const Top3 &top3) const
{
    int sum = 0;
    for (auto topCalories : top3)
        sum += topCalories;

    return sum;
}
