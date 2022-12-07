#include "Puzzle1.h"

#include <fstream>
#include <sstream>

using namespace AronGaldonGines::AOC2022::D06;

Puzzle1::Puzzle1()
    : m_input(readInput())
{
}

Puzzle1::Puzzle1(const string &input)
    : m_input(input)
{
}

size_t Puzzle1::findLastIndexOfFirstMarker() const
{
    size_t mi = 0, i = 0; // indexes for marker and for input
    string marker;

    while (i < m_input.size() && mi < MARKER_SIZE - 1) {
        marker += m_input[i];
        for (mi = 0; mi < marker.size() - 1 && mi < MARKER_SIZE - 1; ++mi)

            // Duplicate character detected: trim marker
            if (m_input[i] == marker[mi]) {
                marker = marker.substr(mi + 1);
                break;
            }

        i++;
    }

    return i;
}

string Puzzle1::readInput() const
{
    ifstream inputFile(INPUT_FILE_NAME);
    string line;

    getline(inputFile, line);

    inputFile.close();

    return line;
}
