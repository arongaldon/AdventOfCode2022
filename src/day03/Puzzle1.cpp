#include "Puzzle1.h"

#include <fstream>

using namespace AronGaldonGines::AOC2022::D03;

vector<string> Puzzle1::readRucksackListsOfItems() const
{
    ifstream inputFile(INPUT_FILE_NAME);
    string line;
    vector<string> itemLists;

    while (getline(inputFile, line))
        itemLists.push_back(line);

    inputFile.close();
    return itemLists;
}

string Puzzle1::extractSharedItems(const vector<string> &itemsByRucksack) const
{
    string sharedItems;

    for (auto items : itemsByRucksack) {
        const auto c1Items = items.substr(0, items.size() / 2);
        const auto c2Items = items.substr(items.size() / 2);
        for (auto c1Item : c1Items) {
            if (c2Items.find(c1Item) != string::npos) {
                sharedItems += c1Item;
                break;
            }
        }
    }

    return sharedItems;
}

int Puzzle1::sumOfPriorities(const string &sharedItems) const
{
    int sumOfPriorities = 0;

    for (char item : sharedItems) {
        const int substract = isupper(item) ? int('A') - 27 : int('a') - 1;
        sumOfPriorities += int(item) - substract;
    }

    return sumOfPriorities;
}
