#include "Puzzle1.h"
#include "Puzzle2.h"
#include <iostream>

using namespace AronGaldonGines::AOC2022::D05;

int main()
{
    Puzzle1 d05p1;
    d05p1.rearrange();
    cout << "*** Puzzle1 ***" << endl << "Crates on top: " << d05p1.cratesOnTop() << endl;

    Puzzle2 d05p2;
    d05p2.rearrange();
    cout << "*** Puzzle2 ***" << endl << "Crates on top: " << d05p2.cratesOnTop() << endl;

    return EXIT_SUCCESS;
}
