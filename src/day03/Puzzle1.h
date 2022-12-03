#pragma once

#include <sstream>
#include <vector>

using namespace std;

namespace AronGaldonGines::AOC2022::D03 {

const auto INPUT_FILE_NAME = "input";

class Puzzle1
{
public:
    vector<string> readRucksackListsOfItems() const;
    string extractSharedItems(const vector<string> &itemsByRucksack) const;
    int sumOfPriorities(const string &sharedItems) const;
};

} // namespace AronGaldonGines::AOC2022::D03
