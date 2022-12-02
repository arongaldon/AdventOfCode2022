// Oponent: A for Rock, B for Paper, and C for Scissors
// You: X for Rock, Y for Paper, and Z for Scissors
// 1 for X Rock, 2 for Y Paper, and 3 for Z Scissors
// 0 if you lost, 3 if the round was a draw, and 6 if you won
// Sample:
// A Y 2+6=8
// B X 1+0=1
// C Z 3+3=6
//
// Calculate the score you would get if you were to follow the input.

#include "Puzzle1.h"

#include <fstream>

using namespace AronGaldonGines::AOC2022::D02;

vector<int> Puzzle1::readScores() const
{
    ifstream inputFile(INPUT_FILE_NAME);
    string line;
    vector<int> scores;

    while (getline(inputFile, line)) {
        auto score = 0;
        switch (line[2]) {
        case 'X':
            if (line[0] == 'A')
                score = 3;
            if (line[0] == 'C')
                score = 6;
            score += 1;
            break;
        case 'Y':
            if (line[0] == 'B')
                score = 3;
            if (line[0] == 'A')
                score = 6;
            score += 2;
            break;
        case 'Z':
            if (line[0] == 'C')
                score = 3;
            if (line[0] == 'B')
                score = 6;
            score += 3;
            break;
        }
        scores.push_back(score);
    }
    inputFile.close();

    return scores;
}
