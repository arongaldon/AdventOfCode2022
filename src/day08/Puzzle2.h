#pragma once

#include "Puzzle1.h"

namespace AronGaldonGines::AOC2022::D08 {

class Puzzle2 : public Puzzle1
{
public:
    Puzzle2();
    Puzzle2(const HeightsGrid &grid);
    int highestScenicScoreOfATree() const;

protected:
    int amountOfVisibleTrees(const size_t currRow, const size_t currCol) const;
};

} // namespace AronGaldonGines::AOC2022::D08
