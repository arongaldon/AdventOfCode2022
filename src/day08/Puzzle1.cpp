#include "Puzzle1.h"

#include <fstream>
#include <iostream>
#include <sstream>

using namespace AronGaldonGines::AOC2022::D08;

Puzzle1::Puzzle1()
    : Puzzle1(readInput())
{
}

Puzzle1::Puzzle1(const HeightsGrid &grid)
    : m_gridOfTrees(grid)
    , m_rows(grid.size())
    , m_cols(grid[0].size())
{
}

int Puzzle1::numberOfTreesVisibleFromOutside() const
{
    int quantity = 4 * static_cast<int>(m_rows) - 4; // Trees at the 4 edges are definitely visible

    cout << "    1  2  3" << endl << "   ---------" << endl;
    for (size_t currRow = 1; currRow < m_rows - 1; ++currRow) {
        cout << currRow << " |";
        for (size_t currCol = 1; currCol < m_cols - 1; ++currCol) {
            const auto curr = m_gridOfTrees[currRow][currCol];
            if (isVisible(currRow, currCol)) {
                cout << "(" << curr << ")";
                quantity++;
            } else
                cout << " " << curr << " ";
        }
        cout << endl;
    }

    return quantity;
}

bool Puzzle1::isVisible(const size_t currRow, const size_t currCol) const
{
    bool visible = true;
    const auto curr = m_gridOfTrees[currRow][currCol];

    // Horizontal comparison
    for (size_t col = 0; col < m_cols; ++col) {
        if (col == currCol)
            if (visible)
                return true;
            else
                continue;

        visible = (m_gridOfTrees[currRow][col] < curr);
        if (!visible) {
            if (col > currCol)
                break;
            else {
                visible = true;
                col = currCol;
            }
        }
    }
    if (visible)
        return true;

    visible = true;

    // Try vertical comparison if there were not horizontal visibility
    for (size_t row = 0; row < m_rows; ++row) {
        if (row == currRow)
            if (visible)
                return true;
            else
                continue;

        visible = (m_gridOfTrees[row][currCol] < curr);
        if (!visible) {
            if (row > currRow)
                break;
            else {
                visible = true;
                row = currRow;
            }
        }
    }
    return visible;
}

HeightsGrid Puzzle1::readInput() const
{
    ifstream inputFile(INPUT_FILE_NAME);
    string line;
    HeightsGrid grid;

    while (getline(inputFile, line)) {
        vector<short> rowOfTrees;
        for (const char &digit : line)
            rowOfTrees.push_back(digit - '0');
        grid.push_back(rowOfTrees);
    }

    inputFile.close();

    return grid;
}
