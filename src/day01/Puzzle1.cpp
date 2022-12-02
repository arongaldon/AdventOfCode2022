#include "Puzzle1.h"

#include <fstream>

using namespace AronGaldonGines::AOC2022::D01;

vector<string> Puzzle1::readInputLines() const
{
    ifstream inputFile(INPUT_FILE_NAME);
    string line;
    vector<string> lines;

    while (getline(inputFile, line))
        lines.push_back(line);

    inputFile.close();

    return lines;
}

vector<int> Puzzle1::totalsByElf(const vector<string> &lines) const
{
    vector<int> totals = {0};

    for (auto line : lines) {
        if (line.empty())
            totals.push_back(0);
        else
            totals.back() += std::stoi(line);
    }

    return totals;
}

int Puzzle1::maxCalories(const vector<int> &totals) const
{
    int max = 0;
    for (auto total : totals) {
        if (total > max)
            max = total;
    }
    return max;
}
