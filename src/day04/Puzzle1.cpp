#include "Puzzle1.h"

#include <fstream>
#include <sstream>

using namespace AronGaldonGines::AOC2022::D04;

vector<string> Puzzle1::readInputLines() const
{
    ifstream inputFile(INPUT_FILE_NAME);
    string line;
    vector<string> lines;

    while (getline(inputFile, line))
        lines.push_back(line);

    inputFile.close();

    return lines;
}

int Puzzle1::countOneAssignmentFullyContainsTheOther(const vector<string> &pairs) const
{
    int count = 0;
    string sectionsOf1;

    for (auto pair : pairs) {
        stringstream ssOf2;
        ssOf2 << pair;
        vector<SectionRange> ranges;
        while (getline(ssOf2, sectionsOf1, ',')) {
            stringstream ssOf1(sectionsOf1);
            string fromSectionString, toSectionString;
            getline(ssOf1, fromSectionString, '-');
            getline(ssOf1, toSectionString);
            int fromSection {stoi(fromSectionString)}, toSection {stoi(toSectionString)};
            ranges.push_back(SectionRange(fromSection, toSection));
        }
        if ((ranges[0].first >= ranges[1].first && ranges[0].second <= ranges[1].second)
            || (ranges[1].first >= ranges[0].first && ranges[1].second <= ranges[0].second))
            count++;
    }

    return count;
}