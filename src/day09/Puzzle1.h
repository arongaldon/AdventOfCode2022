#pragma once

#include "Pos.h"

#include <string>
#include <unordered_set>
#include <vector>

using namespace std;

namespace AronGaldonGines::AOC2022::D09 {

const auto INPUT_FILE_NAME = "input.txt";

enum class Direction
{
    left = 'L',
    right = 'R',
    up = 'U',
    down = 'D',
    none = '0'
};

struct Motion
{
    Direction direction {'0'};
    int steps {0};
};

class Puzzle1
{
public:
    Puzzle1();
    Puzzle1(const vector<Motion> &motions);
    virtual void draw(int min, int max) const;
    virtual void sewYou();
    int visitedPositionsByT() const;

protected:
    vector<Motion> readInput() const;

protected:
    unordered_set<string> m_visited;
    const vector<Motion> m_motions;
};

} // namespace AronGaldonGines::AOC2022::D09
