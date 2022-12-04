#pragma once

#include <array>
#include <sstream>
#include <vector>

using namespace std;

namespace AronGaldonGines::AOC2022::D03 {

using Group = array<string, 3>;

class Puzzle2
{
public:
    vector<Group> groupItems(const vector<string> &listsOfItems) const;
    string extractBadgeItemTypes(const vector<Group> &groups) const;
};

} // namespace AronGaldonGines::AOC2022::D03
