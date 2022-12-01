#include "Puzzle1.h"
#include <iostream>

using namespace AronGaldonGines::AOC2022::Day01;

int main()
{
    Puzzle1 day01Puzzle1;
    auto max = day01Puzzle1.maxCalories(day01Puzzle1.totalsByElf(day01Puzzle1.readInputLines()));
    cout << "The maximum number of calories carried by one elf is " << max << endl;

    return EXIT_SUCCESS;
}
