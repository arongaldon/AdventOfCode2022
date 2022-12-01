#include "Puzzle1.h"
#include "Puzzle2.h"
#include <iostream>

using namespace AronGaldonGines::AOC2022::Day01;

int main()
{
    Puzzle1 day01Puzzle1;
    auto max = day01Puzzle1.maxCalories(day01Puzzle1.totalsByElf(day01Puzzle1.readInputLines()));
    cout << "*** Puzzle1 ***" << endl
         << "The maximum number of calories carried by one elf is " << max << endl
         << endl;

    Puzzle2 day01Puzzle2;
    Top3 top3 =
        day01Puzzle2.threeTopCalories(day01Puzzle1.totalsByElf(day01Puzzle1.readInputLines()));
    auto top3Sum = day01Puzzle2.sumThreeTopCalories(top3);
    cout << "*** Puzzle2 ***" << endl
         << "The three top calories carried by elfs are " << top3[0] << " + " << top3[1] << " + "
         << top3[2] << " = " << top3Sum << endl;
    return EXIT_SUCCESS;
}
