#include "Puzzle2.h"
#include "Puzzle1.h"

#include <sstream>

using namespace AronGaldonGines::AOC2022::D04;

int Puzzle2::countOverlappingAssignments(const vector<string> &pairs) const
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
            || (ranges[1].first >= ranges[0].first && ranges[1].second <= ranges[0].second)
            || (ranges[1].first >= ranges[0].first && ranges[1].first <= ranges[0].second)
            || (ranges[1].second >= ranges[0].first && ranges[1].second <= ranges[0].second))
            count++;
    }

    return count;
}
