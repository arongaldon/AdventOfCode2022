#include "Puzzle1.h"

#include <fstream>
#include <sstream>

using namespace AronGaldonGines::AOC2022::D07;

Puzzle1::Puzzle1()
    : Puzzle1(readInput())
{
}

Puzzle1::Puzzle1(const vector<string> &input)
{
    readDirectories(input);
}

vector<pair<string, int>> Puzzle1::findDirsWithSizeOfAtMost(int maxSize) const
{
    vector<pair<string, int>> directories;

    for (auto directory : m_directories)
        if (directory.second <= maxSize)
            directories.push_back({directory.first, directory.second});

    return directories;
}

vector<string> Puzzle1::readInput() const
{
    ifstream inputFile(INPUT_FILE_NAME);
    string line;
    vector<string> lines;

    while (getline(inputFile, line))
        lines.push_back(line);

    inputFile.close();

    return lines;
}

void Puzzle1::readDirectories(const vector<string> &input)
{
    vector<string> currentPath;
    int filesSize = 0;

    for (auto line : input) {
        stringstream ss(line);
        string prefix;
        getline(ss, prefix, ' ');
        if (prefix == "$") {
            string prevPath = pathVectorToString(currentPath);
            string command, arg;
            getline(ss, command, ' ');
            getline(ss, arg, ' ');
            if (command == "cd")
                if (arg == "/") {
                    currentPath.clear();
                    if (m_directories.find(arg) == m_directories.end())
                        m_directories.insert(pair<string, int>(arg, 0));
                } else if (arg == "..")
                    currentPath.pop_back();
                else {
                    currentPath.push_back(arg);
                    auto currPath = pathVectorToString(currentPath);
                    if (m_directories.find(currPath) == m_directories.end())
                        m_directories.insert(pair<string, int>(currPath, 0));
                }
        } else if (isdigit(prefix[0])) {
            auto size = stoi(prefix);
            m_directories["/"] += size;
            vector<string> auxPath;
            for (auto dir : currentPath) {
                auxPath.push_back(dir);
                m_directories[pathVectorToString(auxPath)] += size;
            }
        }
    }
}

string Puzzle1::pathVectorToString(vector<string> path) const
{
    string pathStr = "/";

    for (auto item : path)
        pathStr += item + '/';

    return pathStr;
}
