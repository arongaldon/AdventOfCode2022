#pragma once

#include <string>
#include <vector>

using namespace std;

namespace AronGaldonGines::AOC2022::D09 {

const auto INPUT_FILE_NAME = "input.txt";

enum class Direction
{
    left = 'L',
    right = 'R',
    up = 'U',
    down = 'D'
};

struct Motion
{
    Direction direction;
    int steps;
};

class Puzzle1
{
public:
    Puzzle1();
    Puzzle1(const vector<Motion> &input);

protected:
    vector<Motion> readInput() const;
};

} // namespace AronGaldonGines::AOC2022::D09
