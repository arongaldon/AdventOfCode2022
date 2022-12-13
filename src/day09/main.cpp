#include "Puzzle1.h"
#include "Puzzle2.h"

#include <iostream>

using namespace AronGaldonGines::AOC2022::D09;

int main()
{
    cout << "*** Puzzle1 ***" << endl;
    Puzzle1 d09p1;
    auto positions = d09p1.visitedPositionsByT();
    cout << "* Input file: " << endl << "The tail visited " << positions << " positions." << endl;
    // 6391

    return EXIT_SUCCESS;
}
