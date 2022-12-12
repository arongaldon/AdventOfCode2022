#include "Puzzle1.h"

#include <fstream>
#include <iostream>
#include <sstream>

using namespace AronGaldonGines::AOC2022::D09;

Puzzle1::Puzzle1()
    : Puzzle1(readInput())
{
}

Puzzle1::Puzzle1(const vector<Motion> &input)
{
    for (Motion motion : input)
        cout << static_cast<char>(motion.direction) << motion.steps << endl;
}

vector<Motion> Puzzle1::readInput() const
{
    ifstream inputFile(INPUT_FILE_NAME);
    string line;
    vector<Motion> motions;

    while (getline(inputFile, line)) {
        stringstream ss(line);
        string item;
        Motion motion;
        getline(ss, item, ' ');
        motion.direction = static_cast<Direction>(item[0]);
        getline(ss, item, ' ');
        motion.steps = stoi(item);
        motions.push_back(motion);
    }

    inputFile.close();

    return motions;
}
