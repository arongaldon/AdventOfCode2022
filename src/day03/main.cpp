#include "Puzzle1.h"
#include "Puzzle2.h"
#include <iostream>

using namespace AronGaldonGines::AOC2022::D03;

int main()
{
    Puzzle1 d03p1;
    // sample 157: auto sharedItems = "pLPvts"
    const vector<string> listOfItems = d03p1.readRucksackListsOfItems();
    auto sharedItems = d03p1.extractSharedItems(listOfItems);
    auto result = d03p1.sumOfPriorities(sharedItems);
    cout << "*** Puzzle1 ***" << endl
         << "Shared items are " << sharedItems << endl
         << "The sum of priorities would be " << result << endl
         << endl;

    Puzzle2 d03p2;
    // const vector<string> sample = {
    // "vJrwpWtwJgWrhcsFMMfFFhFp",
    // "jqHRNqRjqzjGDLGLrsFMfFZSrLrFZsSL",
    // "PmmdzqPrVvPwwTWBwg",
    // "wMqvLMZHhHMvwLHjbvcjnnSBnvTQFn",
    // "ttgJtRGJQctTZtZT",
    // "CrZsJsPPZsGzwwsLwLmpwMDw"};
    auto badgeItemTypes = d03p2.extractBadgeItemTypes(d03p2.groupItems(listOfItems));
    result = d03p1.sumOfPriorities(badgeItemTypes);
    cout << "*** Puzzle2 ***" << endl
         << "badgeItemTypes: " << badgeItemTypes << endl
         << "The sum of priorities of groups of 3 would be " << result << endl
         << endl;

    return EXIT_SUCCESS;
}
