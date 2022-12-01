#pragma once

#include <array>
#include <sstream>
#include <vector>

using namespace std;

namespace AronGaldonGines::AOC2022::Day01 {

using Top3 = array<int, 3>;

class Puzzle2
{
public:
    Top3 threeTopCalories(const vector<int> &totals) const;
    int sumThreeTopCalories(const Top3 &top3) const;
};

} // namespace AronGaldonGines::AOC2022::Day01
