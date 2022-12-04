// Oponent: A for Rock, B for Paper, and C for Scissors
// Now X means you need to lose (0), Y to end the round in a draw (3), and Z to win (6)
// You: 1 for Rock, 2 for Paper, and 3 for Scissors

#include "Puzzle2.h"

#include <sstream>

using namespace AronGaldonGines::AOC2022::D03;

vector<Group> Puzzle2::groupItems(const vector<string> &listsOfItems) const
{
    vector<Group> groups;

    int i = 0;
    Group grp = {"", "", ""};
    for (auto items : listsOfItems) {
        grp[i] = items;
        if (i == 2) {
            i = 0;
            groups.push_back(grp);
            fill(grp.begin(), grp.end(), "");
        } else
            ++i;
    }

    return groups;
}

string Puzzle2::extractBadgeItemTypes(const vector<Group> &groups) const
{
    string badgeItemTypes;

    for (Group grp : groups) {
        for (auto item : grp.at(0)) {
            if (grp.at(1).find(item) != string::npos && grp.at(2).find(item) != string::npos) {
                badgeItemTypes += item;
                break;
            }
        }
    }

    return badgeItemTypes;
}
