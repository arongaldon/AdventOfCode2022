#include "Puzzle2.h"

#include <array>
#include <iostream>

using namespace std;

using namespace AronGaldonGines::AOC2022::D10;

Puzzle2::Puzzle2()
    : Puzzle2(readInput())
{
}

Puzzle2::Puzzle2(const queue<Instruction> &input)
{
    m_program = input;
}

void Puzzle2::display()
{
    int x = 0, addInNextCycle = 0;
    const int rowSize = 40, rows = 6;
    array<char, rowSize * rows> crt;
    crt.fill('.');
    crt[0] = '#';

    for (long cy = 1; addInNextCycle != 0 || m_program.size() > 0; ++cy) {
        if (addInNextCycle != 0) {
            x += addInNextCycle;
            addInNextCycle = 0;
        } else if (m_program.front().cmd == "noop")
            m_program.pop();
        else if (m_program.front().cmd == "addx") {
            addInNextCycle = m_program.front().inc;
            m_program.pop();
        }
        int p = (cy - 1) % rowSize;
        if ((x - 1 <= p && x + 1 >= p) || (p + 1) % rowSize == 0)
            crt[cy] = '#';
    }

    for (int p = 0; p < crt.size(); ++p) {
        if (p % rowSize == 0)
            cout << endl;
        cout << crt[p];
    }
    cout << endl;
}
