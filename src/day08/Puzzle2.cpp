#include "Puzzle2.h"
#include <array>
// #include <iostream>

using namespace AronGaldonGines::AOC2022::D08;

Puzzle2::Puzzle2()
    : Puzzle1()
{
}

Puzzle2::Puzzle2(const HeightsGrid &grid)
    : Puzzle1(grid)
{
}

int Puzzle2::highestScenicScoreOfATree() const
{
    int score = 0;

    for (size_t currRow = 0; currRow < m_rows; ++currRow) {
        for (size_t currCol = 0; currCol < m_cols; ++currCol) {
            const auto curr = m_gridOfTrees[currRow][currCol];
            int currScore = amountOfVisibleTrees(currRow, currCol);
            if (score < currScore)
                score = currScore;
        }
        // cout << endl;
    }

    return score;
}

int Puzzle2::amountOfVisibleTrees(const size_t currRow, const size_t currCol) const
{
    array<int, 4> trees = {0, 0, 0, 0};

    const auto currHeight = m_gridOfTrees[currRow][currCol];

    for (int col = static_cast<int>(currCol) - 1; col >= 0; --col) {
        auto height = m_gridOfTrees[currRow][col];
        trees[0]++;
        if (height >= currHeight)
            break;
    }
    for (int col = static_cast<int>(currCol) + 1; col < m_cols; ++col) {
        auto height = m_gridOfTrees[currRow][col];
        trees[1]++;
        if (height >= currHeight)
            break;
    }
    for (int row = static_cast<int>(currRow) - 1; row >= 0; --row) {
        auto height = m_gridOfTrees[row][currCol];
        trees[2]++;
        if (height >= currHeight)
            break;
    }
    for (int row = static_cast<int>(currRow) + 1; row < m_rows; ++row) {
        auto height = m_gridOfTrees[row][currCol];
        trees[3]++;
        if (height >= currHeight)
            break;
    }

    // cout << currHeight << "<" << trees[0] << ">" << trees[1] << "^" << trees[2] << "v" <<
    // trees[3]
    //  << " ";

    auto total = 1;
    for (auto tree : trees)
        total *= tree;
    return total;
}
