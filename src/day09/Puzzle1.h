#pragma once

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

struct Pos
{
    Pos()
        : x {0}
        , y {0} {};

    Pos(int x, int y)
        : x {x}
        , y {y} {};

    bool operator==(const Pos &another)
    {
        return x == another.x && y == another.y;
    }

    bool operator!=(const Pos &another)
    {
        return x != another.x || y != another.y;
    }

    bool diag1(const Pos &another)
    {
        return (abs(x - another.x) == 1 && abs(y - another.y) == 1);
    }

    string str()
    {
        return to_string(x) + "," + to_string(y);
    }

    int x;
    int y;
};

class Puzzle1
{
public:
    Puzzle1();
    Puzzle1(const vector<Motion> &motions);
    int visitedPositionsByT() const;

protected:
    void sewYou();
    vector<Motion> readInput() const;

protected:
    unordered_set<string> m_visited;
    const vector<Motion> m_motions;
};

} // namespace AronGaldonGines::AOC2022::D09
