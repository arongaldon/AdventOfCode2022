#pragma once

#include "Puzzle1.h"

namespace AronGaldonGines::AOC2022::D06 {

class Puzzle2 : public Puzzle1
{
public:
    Puzzle2(size_t maxMarkerSize = 14);
    Puzzle2(const string &input, size_t maxMarkerSize = 14);
};

} // namespace AronGaldonGines::AOC2022::D06
