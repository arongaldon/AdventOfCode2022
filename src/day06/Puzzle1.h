#pragma once

#include <string>

using namespace std;

namespace AronGaldonGines::AOC2022::D06 {

const auto INPUT_FILE_NAME = "input.txt";

class Puzzle1
{
public:
    Puzzle1(size_t maxMarkerSize = 4);
    Puzzle1(const string &input, size_t maxMarkerSize = 4);
    size_t findLastIndexOfFirstMarker() const;

protected:
    string readInput() const;

private:
    const string m_input;
    const size_t m_maxMarkerSize;
};

} // namespace AronGaldonGines::AOC2022::D06
