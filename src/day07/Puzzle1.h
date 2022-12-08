#pragma once

#include <map>
#include <string>
#include <vector>

using namespace std;

namespace AronGaldonGines::AOC2022::D07 {

const auto INPUT_FILE_NAME = "input.txt";

class Puzzle1
{
public:
    Puzzle1();
    Puzzle1(const vector<string> &input);
    vector<pair<string, int>> findDirsWithSizeOfAtMost(int maxSize) const;

protected:
    vector<string> readInput() const;
    void readDirectories(const vector<string> &input);
    string pathVectorToString(vector<string> path) const;

private:
    map<string, int> m_directories;
};

} // namespace AronGaldonGines::AOC2022::D07
