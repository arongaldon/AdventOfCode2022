#include "Puzzle1.h"
#include "Puzzle2.h"

#include <array>
#include <iostream>
#include <string>
#include <vector>

using namespace AronGaldonGines::AOC2022::D10;

const int LIMIT = 6;

queue<Instruction> miniSample()
{
    array<Instruction, 3> instrs;
    instrs[0].cmd = "noop";
    instrs[1].cmd = "addx";
    instrs[1].inc = 3;
    instrs[2].cmd = "addx";
    instrs[2].inc = -5;

    queue<Instruction> sample;
    for (auto instr : instrs)
        sample.push(instr);
    return sample;
}

int main()
{
    int sum = 0;

    cout << "*** Puzzle1 ***" << endl;
    Puzzle1 d10p1miniSample(miniSample());
    sum = d10p1miniSample.sumOfStrengths(LIMIT);
    cout << "* Mini sample: sum of the six signal strengths=" << sum << endl;

    Puzzle1 d10p1;
    sum = d10p1.sumOfStrengths(LIMIT);
    cout << "* Input file: sum of the six signal strengths=" << sum << endl;

    cout << endl << "*** Puzzle2 ***" << endl;
    // Puzzle2 d10p2;
    // cout << "* Input file: " << size << endl;

    return EXIT_SUCCESS;
}
