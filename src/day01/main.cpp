#include "Puzzle1.h"
#include "Puzzle2.h"
#include <iostream>

using namespace AronGaldonGines::AOC2022::D01;

int main()
{
    Puzzle1 d01p1;
    auto max = d01p1.maxCalories(d01p1.totalsByElf(d01p1.readInputLines()));
    cout << "*** Puzzle1 ***" << endl
         << "The maximum number of calories carried by one elf is " << max << endl
         << endl;

    Puzzle2 d01p2;
    Top3 top3 = d01p2.threeTopCalories(d01p1.totalsByElf(d01p1.readInputLines()));
    auto top3Sum = d01p2.sumThreeTopCalories(top3);
    cout << "*** Puzzle2 ***" << endl
         << "The three top calories carried by elfs are " << top3[0] << " + " << top3[1] << " + "
         << top3[2] << " = " << top3Sum << endl;
    return EXIT_SUCCESS;
}
