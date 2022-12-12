#pragma once

#include <string>
#include <vector>

using namespace std;

namespace AronGaldonGines::AOC2022::D08 {

const auto INPUT_FILE_NAME = "input.txt";

template<class T>
using Matrix = vector<vector<T>>;

using HeightsGrid = Matrix<short>;

class Puzzle1
{
public:
    Puzzle1();
    Puzzle1(const HeightsGrid &grid);
    int numberOfTreesVisibleFromOutside() const;

protected:
    bool isVisible(const size_t currRow, const size_t currCol) const;
    HeightsGrid readInput() const;

protected:
    const HeightsGrid m_gridOfTrees;
    const size_t m_rows, m_cols;
};

} // namespace AronGaldonGines::AOC2022::D08
