#pragma once

#include <sstream>
#include <vector>

using namespace std;

namespace AronGaldonGines::AOC2022::Day01 {

const auto INPUT_FILE_NAME = "input";

class Puzzle1
{
public:
    vector<string> readInputLines() const;
    vector<int> totalsByElf(const vector<string> &lines) const;
    int maxCalories(const vector<int> &totals) const;
};

} // namespace AronGaldonGines::AOC2022::Day01
