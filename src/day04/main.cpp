#include "Puzzle1.h"
#include "Puzzle2.h"
#include <iostream>

using namespace AronGaldonGines::AOC2022::D04;

int main()
{
    Puzzle1 d04p1;
    // Sample count of 2:
    // const vector<string> sample = {"2-4,6-8", "2-3,4-5", "5-7,7-9",
    //                                "2-8,3-7", "6-6,4-6", "2-6,4-8"};
    auto inputLines = d04p1.readInputLines();
    auto count = d04p1.countOneAssignmentFullyContainsTheOther(inputLines);

    cout << "*** Puzzle1 ***" << endl
         << "Number of cases when one assignment fully contains the other: " << count << endl
         << endl;

    Puzzle2 d04p2;
    count = d04p2.countOverlappingAssignments(inputLines);
    cout << "*** Puzzle2 ***" << endl << "Number of overlapping assignments: " << count << endl;

    return EXIT_SUCCESS;
}
