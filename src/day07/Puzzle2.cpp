#include "Puzzle2.h"

using namespace AronGaldonGines::AOC2022::D07;

Puzzle2::Puzzle2()
    : Puzzle1()
{
}

Puzzle2::Puzzle2(const vector<string> &input)
    : Puzzle1(input)
{
}

int Puzzle2::sizeOfSmallestDirToDelete(int total, int freeRequired) const
{
    auto currentlyFree = total - m_directories.at("/");

    int size = 0;

    if (freeRequired > currentlyFree) {
        auto minSizeToFree = freeRequired - currentlyFree;
        size = freeRequired;
        for (auto dir : m_directories)
            if (dir.second >= minSizeToFree && dir.second < size)
                size = dir.second;
    }

    return size;
}

using namespace AronGaldonGines::AOC2022::D07;
