#include "Puzzle2.h"
#include <iostream>
#include <numeric>

using namespace AronGaldonGines::AOC2022::D03;

int main()
{
    Puzzle1 d03p1;
    // sample 157: auto sharedItems = "pLPvts"
    auto sharedItems = d03p1.extractSharedItems(d03p1.readRucksackListsOfItems());
    auto result = d03p1.sumOfPriorities(sharedItems);
    cout << "*** Puzzle1 ***" << endl
         << "Shared items are " << sharedItems << endl
         << "The sum of priorities would be " << result << endl
         << endl;

    // Puzzle2 d03p2;
    // cout << "*** Puzzle2 ***" << endl << "The total score would be " << result << endl << endl;

    return EXIT_SUCCESS;
}
