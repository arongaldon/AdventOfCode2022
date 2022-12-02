#include "Puzzle1.h"
#include "Puzzle2.h"
#include <iostream>
#include <numeric>

using namespace AronGaldonGines::AOC2022::Day02;

int main()
{
    Puzzle1 day02Puzzle1;
    auto scores = day02Puzzle1.readScores();
    auto result = reduce(scores.begin(), scores.end());
    cout << "*** Puzzle1 ***" << endl << "The total score would be " << result << endl << endl;

    // Puzzle2 day02Puzzle2;

    return EXIT_SUCCESS;
}
