#include "Puzzle2.h"
#include <iostream>
#include <numeric>

using namespace AronGaldonGines::AOC2022::D02;

int main()
{
    Puzzle1 d02p1;
    auto scores = d02p1.readScores();
    auto result = reduce(scores.begin(), scores.end());
    cout << "*** Puzzle1 ***" << endl << "The total score would be " << result << endl << endl;

    Puzzle2 d02p2;
    scores = d02p2.readScores();
    result = reduce(scores.begin(), scores.end());
    cout << "*** Puzzle2 ***" << endl << "The total score would be " << result << endl << endl;

    return EXIT_SUCCESS;
}
