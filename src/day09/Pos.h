#pragma once

#include <string>

using namespace std;

namespace AronGaldonGines::AOC2022::D09 {

struct Pos
{
    Pos()
        : x {0}
        , y {0} {};

    Pos(int x, int y)
        : x {x}
        , y {y} {};

    int compareX(const Pos &another) const
    {
        if (x == another.x)
            return 0;
        else if (x > another.x)
            return 1;
        else
            return -1;
    }

    int compareY(const Pos &another) const
    {
        if (y == another.y)
            return 0;
        else if (y > another.y)
            return 1;
        else
            return -1;
    }

    string str()
    {
        return to_string(x) + "," + to_string(y);
    }

    int x;
    int y;
};

} // namespace AronGaldonGines::AOC2022::D09
