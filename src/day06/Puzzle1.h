#pragma once

#include <string>

using namespace std;

namespace AronGaldonGines::AOC2022::D06 {

const auto INPUT_FILE_NAME = "input.txt";
const size_t MARKER_SIZE = 4;

class Puzzle1
{
public:
    Puzzle1();
    Puzzle1(const string &input);
    size_t findLastIndexOfFirstMarker() const;

protected:
    string readInput() const;

private:
    string m_input;
};

} // namespace AronGaldonGines::AOC2022::D06
