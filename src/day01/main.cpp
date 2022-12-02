#include "Puzzle1.h"
#include "Puzzle2.h"
#include <iostream>

using namespace AronGaldonGines::AOC2022::D01;

int main()
{
    Puzzle1 day01P1;
    auto max = day01P1.maxCalories(day01P1.totalsByElf(day01P1.readInputLines()));
    cout << "*** Puzzle1 ***" << endl
         << "The maximum number of calories carried by one elf is " << max << endl
         << endl;

    Puzzle2 day01Puzzle2;
    Top3 top3 = day01Puzzle2.threeTopCalories(day01P1.totalsByElf(day01P1.readInputLines()));
    auto top3Sum = day01Puzzle2.sumThreeTopCalories(top3);
    cout << "*** Puzzle2 ***" << endl
         << "The three top calories carried by elfs are " << top3[0] << " + " << top3[1] << " + "
         << top3[2] << " = " << top3Sum << endl;
    return EXIT_SUCCESS;
}
