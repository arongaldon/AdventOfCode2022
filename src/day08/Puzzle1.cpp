#include "Puzzle1.h"

#include <fstream>
#include <sstream>

using namespace AronGaldonGines::AOC2022::D08;

Puzzle1::Puzzle1()
    : Puzzle1(readInput())
{
}

Puzzle1::Puzzle1(const vector<string> &input)
{
}

vector<string> Puzzle1::readInput() const
{
    ifstream inputFile(INPUT_FILE_NAME);
    string line;
    vector<string> lines;

    while (getline(inputFile, line))
        lines.push_back(line);

    inputFile.close();

    return lines;
}
