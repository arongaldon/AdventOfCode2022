#include "Puzzle1.h"

#include <fstream>
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
    sewYou();
}

int Puzzle1::visitedPositionsByT() const
{
    cout << endl;
    const int SIZE = 6;
    for (int y = SIZE - 1; y >= 0; --y) {
        for (int x = 0; x < SIZE; ++x)
            if (x == 0 && y == 0)
                cout << "s";
            else if (m_visited.find(Pos(x, y).str()) == m_visited.end())
                cout << ".";
            else
                cout << "#";
        cout << endl;
    }
    return static_cast<int>(m_visited.size());
}

void Puzzle1::sewYou()
{
    Pos h(0, 0), t(0, 0);
    cout << " s h=" << h.str() << " t=" << t.str();
    Motion prev;

    m_visited.insert(t.str());
    bool wait = true;
    for (Motion mo : m_motions) {
        cout << endl << static_cast<char>(mo.direction) << mo.steps;

        switch (mo.direction) {
        case Direction::left:
            wait = (h == t) || (prev.direction == Direction::right);
            for (size_t s = 0; s < mo.steps; ++s) {
                h.x--;

                if (!wait && (!h.diag1(t) && (h.x != t.x || abs(h.y - t.y) != 1))) {
                    t.y = h.y;
                    t.x--;
                    m_visited.insert(t.str());
                }
                wait = false;
            }
            break;
        case Direction::right:
            wait = (h == t) || (prev.direction == Direction::left);
            for (size_t s = 0; s < mo.steps; ++s) {
                h.x++;

                if (!wait && (!h.diag1(t) && (h.x != t.x || abs(h.y - t.y) != 1))) {
                    t.y = h.y;
                    t.x++;
                    m_visited.insert(t.str());
                }
                wait = false;
            }
            break;
        case Direction::up:
            wait = (h == t) || (prev.direction == Direction::down);
            for (size_t s = 0; s < mo.steps; ++s) {
                h.y++;

                if (!wait && (!h.diag1(t) && (h.y != t.y || abs(h.x - t.x) != 1))) {
                    t.x = h.x;
                    t.y++;
                    m_visited.insert(t.str());
                }
                wait = false;
            }
            break;
        case Direction::down:
            wait = (h == t) || (prev.direction == Direction::up);
            for (size_t s = 0; s < mo.steps; ++s) {
                h.y--;

                if (!wait && (!h.diag1(t) && (h.y != t.y || abs(h.x - t.x) != 1))) {
                    t.x = h.x;
                    t.y--;
                    m_visited.insert(t.str());
                }
                wait = false;
            }
            break;
        }
        prev = mo;
        cout << " h=" << h.str() << " t=" << t.str();
    }
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
