#pragma once

#include "Puzzle1.h"

namespace AronGaldonGines::AOC2022::D07 {

class Puzzle2 : public Puzzle1
{
public:
    Puzzle2();
    Puzzle2(const vector<string> &input);
    int sizeOfSmallestDirToDelete(int total, int freeRequired) const;
};

} // namespace AronGaldonGines::AOC2022::D07
