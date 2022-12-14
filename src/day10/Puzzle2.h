#pragma once

#include "Puzzle1.h"

namespace AronGaldonGines::AOC2022::D10 {

class Puzzle2 : public Puzzle1
{
public:
    Puzzle2();
    Puzzle2(const queue<Instruction> &input);
    void display();
};

} // namespace AronGaldonGines::AOC2022::D10
