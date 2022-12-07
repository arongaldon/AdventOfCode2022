#include "Puzzle1.h"

#include <fstream>

using namespace AronGaldonGines::AOC2022::D06;

Puzzle1::Puzzle1(size_t maxMarkerSize)
    : Puzzle1(readInput(), maxMarkerSize)
{
}

Puzzle1::Puzzle1(const string &input, size_t maxMarkerSize)
    : m_input(input)
    , m_maxMarkerSize(maxMarkerSize)
{
}

size_t Puzzle1::findLastIndexOfFirstMarker() const
{
    size_t mi = 0, i = 0; // indexes for marker and for input
    string marker;

    while (i < m_input.size() && mi < m_maxMarkerSize - 1) {
        marker += m_input[i];

        for (mi = 0; mi < marker.size() - 1 && mi < m_maxMarkerSize - 1; ++mi)

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
