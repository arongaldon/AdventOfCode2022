#pragma once

#include <string>
#include <vector>

using namespace std;

namespace AronGaldonGines::AOC2022::D04 {

const auto INPUT_FILE_NAME = "input";
using SectionRange = pair<int, int>;

class Puzzle1
{
public:
    vector<string> readInputLines() const;
    int countOneAssignmentFullyContainsTheOther(const vector<string> &pairs) const;
};

} // namespace AronGaldonGines::AOC2022::D04
