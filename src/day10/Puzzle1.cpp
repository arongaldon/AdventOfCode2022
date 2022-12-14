#include "Puzzle1.h"

#include <fstream>
#include <sstream>

using namespace AronGaldonGines::AOC2022::D10;

Puzzle1::Puzzle1()
    : Puzzle1(readInput())
{
}

Puzzle1::Puzzle1(const queue<Instruction> &input)
    : m_program(input)
{
    run();
}

int Puzzle1::sumOfStrengths(int limit) const
{
    int sum = 0, count = 0;

    for (int signalSt : m_signalStrengths)
        if (count == limit)
            break;
        else
            sum += signalSt;

    return sum;
}

void Puzzle1::run()
{
    int regX = 1;
    int addInNextCycle = 0;

    for (long cycle = 1; addInNextCycle != 0 || m_program.size() > 0; ++cycle) {
        if ((cycle + 20) % 40 == 0) {
            m_signalStrengths.push_back(cycle * regX);
        }
        if (addInNextCycle != 0) {
            regX += addInNextCycle;
            addInNextCycle = 0;
        } else if (m_program.front().cmd == "noop")
            m_program.pop();
        else if (m_program.front().cmd == "addx") {
            addInNextCycle = m_program.front().inc;
            m_program.pop();
        }
    }
}

queue<Instruction> Puzzle1::readInput() const
{
    queue<Instruction> program;

    ifstream inputFile(INPUT_FILE_NAME);
    string line;

    while (getline(inputFile, line)) {
        stringstream ss(line);
        string item;
        getline(ss, item, ' ');
        Instruction i;
        i.cmd = item;
        if (i.cmd == "addx") {
            getline(ss, item);
            i.inc = stoi(item);
        } else
            i.inc = 0;
        program.push(i);
    }

    inputFile.close();

    return program;
}
