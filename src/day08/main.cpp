#include "Puzzle1.h"
#include "Puzzle2.h"

#include <iostream>

using namespace AronGaldonGines::AOC2022::D08;

int main()
{ // clang-format off
    // Each tree is represented as a single digit whose value is its height, where 0 is the shortest and 9 is the tallest.
    // A tree is visible if all of the other trees between it and an edge of the grid are shorter than it (only vertical and horizontal).
    // 21 trees visible from outside the grid in this example.
    const HeightsGrid sample =
    {
        {3,0,3,7,3},
        {2,5,5,1,2},
        {6,5,3,3,2},
        {3,3,5,4,9},
        {3,5,3,9,0}
    };
    // clang-format on

    cout << "*** Puzzle1 ***" << endl << "* Sample: " << endl;
    Puzzle1 d08p1sample(sample);
    auto quantity = d08p1sample.numberOfTreesVisibleFromOutside();
    cout << quantity << " trees are visible" << endl;

    cout << endl << "* Input file: " << endl;
    Puzzle1 d08p1;
    quantity = d08p1.numberOfTreesVisibleFromOutside();
    cout << quantity << " trees are visible" << endl << endl;

    cout << "*** Puzzle2 ***" << endl << "* Sample: " << endl;
    Puzzle2 d08p2sample(sample);
    auto score = d08p2sample.highestScenicScoreOfATree();
    cout << score << " is the highest scenic score for a tree" << endl;

    cout << endl << "* Input file: " << endl;
    Puzzle2 d08p2;
    score = d08p2.highestScenicScoreOfATree();
    cout << score << " is the highest scenic score for a tree" << endl;

    // 196 is too low!!!



    return EXIT_SUCCESS;
}
