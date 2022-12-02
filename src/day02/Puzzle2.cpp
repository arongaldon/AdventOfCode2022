// Oponent: A for Rock, B for Paper, and C for Scissors
// Now X means you need to lose (0), Y to end the round in a draw (3), and Z to win (6)
// You: 1 for Rock, 2 for Paper, and 3 for Scissors

#include "Puzzle2.h"

#include <fstream>

using namespace AronGaldonGines::AOC2022::Day02;
vector<int> Puzzle2::readScores() const
{
    ifstream inputFile(INPUT_FILE_NAME);
    string line;
    vector<int> scores;

    while (getline(inputFile, line)) {
        auto score = 0;
        switch (line[2]) {
        case 'X': // Lose
            switch (line[0]) {
            case 'A':
                score = 3;
                break;
            case 'B':
                score = 1;
                break;
            case 'C':
                score = 2;
                break;
            }
            break;
        case 'Y': // Draw
            switch (line[0]) {
            case 'A':
                score = 1;
                break;
            case 'B':
                score = 2;
                break;
            case 'C':
                score = 3;
                break;
            }
            score += 3;
            break;
        case 'Z': // Win
            switch (line[0]) {
            case 'A':
                score = 2;
                break;
            case 'B':
                score = 3;
                break;
            case 'C':
                score = 1;
                break;
            }
            score += 6;
            break;
        }
        scores.push_back(score);
    }
    inputFile.close();

    return scores;
}
