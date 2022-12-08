#pragma once

#include <string>
#include <vector>

using namespace std;

namespace AronGaldonGines::AOC2022::D09 {

const auto INPUT_FILE_NAME = "input.txt";

class Puzzle1
{
public:
    Puzzle1();
    Puzzle1(const vector<string> &input);

protected:
    vector<string> readInput() const;
};

} // namespace AronGaldonGines::AOC2022::D09
