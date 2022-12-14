#include "Puzzle1.h"

#include <fstream>
#include <iomanip>
#include <iostream>
#include <sstream>

using namespace AronGaldonGines::AOC2022::D09;

Puzzle1::Puzzle1()
    : Puzzle1(readInput())
{
}

Puzzle1::Puzzle1(const vector<Motion> &motions)
    : m_motions(motions)
{
}

void Puzzle1::draw(int min, int max) const
{
    for (int y = max; y >= min; --y) {
        for (int x = min; x <= max; ++x)
            if (x == 0 && y == 0)
                cout << "s";
            else if (m_visited.find(Pos(x, y).str()) == m_visited.end())
                cout << ".";
            else
                cout << "#";
        cout << endl;
    }
}

int Puzzle1::visitedPositionsByT() const
{
    return static_cast<int>(m_visited.size());
}

void Puzzle1::sewYou()
{
    Pos h(0, 0), t(0, 0);
    cout << "   s h(" << setfill(' ') << setw(4) << h.x << "," << setfill(' ') << setw(4) << h.y
         << ")t(" << setfill(' ') << setw(4) << t.x << "," << setfill(' ') << setw(4) << t.y << ")";
    m_visited.insert(t.str());

    int i = 1;
    for (Motion mo : m_motions) {
        cout << setfill(' ') << setw(3) << mo.steps << static_cast<char>(mo.direction);
        for (int s = 0; s < mo.steps; ++s) {
            switch (mo.direction) {
            case Direction::left:
                h.x--;
                if (t.x - h.x == 2) {
                    t.x = h.x + 1;
                    t.y = h.y;
                }
                break;
            case Direction::right:
                h.x++;
                if (h.x - t.x == 2) {
                    t.x = h.x - 1;
                    t.y = h.y;
                }
                break;
            case Direction::up:
                h.y++;
                if (h.y - t.y == 2) {
                    t.y = h.y - 1;
                    t.x = h.x;
                }
                break;
            case Direction::down:
                h.y--;
                if (t.y - h.y == 2) {
                    t.y = h.y + 1;
                    t.x = h.x;
                }
                break;
            }
            m_visited.insert(t.str());
        }
        i++;
        cout << " h(" << setfill(' ') << setw(4) << h.x << "," << setfill(' ') << setw(4) << h.y
             << ")t(" << setfill(' ') << setw(4) << t.x << "," << setfill(' ') << setw(4) << t.y
             << ")" << (i % 4 == 0 ? "\n" : "");
    }
    cout << endl;
}

vector<Motion> Puzzle1::readInput() const
{
    ifstream inputFile(INPUT_FILE_NAME);
    string line;
    vector<Motion> motions;

    while (getline(inputFile, line)) {
        stringstream ss(line);
        string item;
        Motion motion;
        getline(ss, item, ' ');
        motion.direction = static_cast<Direction>(item[0]);
        getline(ss, item, ' ');
        motion.steps = stoi(item);
        motions.push_back(motion);
    }

    inputFile.close();

    return motions;
}
