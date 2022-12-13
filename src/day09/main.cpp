#include "Puzzle1.h"
#include "Puzzle2.h"

#include <iostream>

using namespace AronGaldonGines::AOC2022::D09;

int main()
{
    Puzzle1 d09p1;
    auto positions = d09p1.visitedPositionsByT();
    cout << "*** Puzzle1 ***" << endl
         << "* Input file: " << endl
         << "The tail visited " << positions << " positions." << endl;

    // (5683 .. 6674)

    return EXIT_SUCCESS;
}
