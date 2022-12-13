#include "Puzzle1.h"
#include "Puzzle2.h"

#include <iostream>

using namespace AronGaldonGines::AOC2022::D09;

int main()
{
    cout << "*** Puzzle1 ***" << endl;
    Puzzle1 d09p1;
    d09p1.draw(0, 6);
    auto positions = d09p1.visitedPositionsByT();
    cout << "* Input file: " << endl << "The tail visited " << positions << " positions." << endl;
    // 6391

    cout << "*** Puzzle2 ***" << endl;
    Puzzle1 d09p2;
    // cout << "* Input file: " << endl << "The tail visited " << positions << " positions." <<
    // endl;

    return EXIT_SUCCESS;
}
