#pragma once

#include <queue>
#include <string>
#include <vector>

using namespace std;

namespace AronGaldonGines::AOC2022::D10 {

const auto INPUT_FILE_NAME = "input.txt";

struct Instruction
{
    Instruction()
        : cmd {""}
        , inc {0}
    {
    }
    string cmd;
    int inc;
};

class Puzzle1
{
public:
    Puzzle1();
    Puzzle1(const queue<Instruction> &input);
    int sumOfStrengths(int limit) const;

protected:
    void run();
    queue<Instruction> readInput() const;

protected:
    queue<Instruction> m_program;
    vector<int> m_signalStrengths;
};

} // namespace AronGaldonGines::AOC2022::D10
