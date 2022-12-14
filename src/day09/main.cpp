#include "Puzzle1.h"
#include "Puzzle2.h"

#include <iostream>

using namespace AronGaldonGines::AOC2022::D09;

int main()
{
    const int min = -12, max = 15;

    int positions = 0;

    cout << "*** Puzzle1 ***" << endl;
    Puzzle1 d09p1;
    d09p1.sewYou();
    d09p1.draw(min, max);
    positions = d09p1.visitedPositionsByT();
    cout << "* Input file: " << endl
         << "The tail visited " << positions << " positions." << endl
         << endl;
    // 6391

    cout << "*** Puzzle2 ***" << endl;
    Puzzle2 d09p2;
    d09p2.sewYou();
    positions = d09p2.visitedPositionsByT();
    cout << "* Input file: " << endl << "Knots visited " << positions << " positions." << endl;

    return EXIT_SUCCESS;
}
