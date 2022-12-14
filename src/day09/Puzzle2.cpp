#include "Puzzle2.h"

// #include <iostream>

using namespace AronGaldonGines::AOC2022::D09;

// void Puzzle2::draw(int min, int max) const
// {
//     for (int y = max; y >= min; --y) {
//         for (int x = min; x <= max; ++x) {
//             int iDraw = NUM_KNOTS;
//             for (int i = iDraw - 1; i >= 0; --i)
//                 if (m_visits[i].find(Pos(x, y).str()) != m_visits[i].end())
//                     iDraw = i;

//             if (iDraw == NUM_KNOTS)
//                 cout << ".";
//             else if (iDraw == 0)
//                 cout << "H";
//             else
//                 cout << iDraw;
//         }
//         cout << endl;
//     }
//     cout << endl;
// }

void Puzzle2::sewYou()
{
    array<Pos, NUM_KNOTS> knots;

    for (Motion mo : m_motions) {
        for (int s = 0; s < mo.steps; ++s) {
            moveHeadKnot(mo.direction, knots[0]);

            for (int i = 1; i < NUM_KNOTS; ++i) {

                for (int i = 1; i < NUM_KNOTS && moveIt(knots[i - 1], knots[i]); ++i) {
                    knots[i].y += knots[i - 1].compareY(knots[i]);
                    knots[i].x += knots[i - 1].compareX(knots[i]);
                }

                // m_visits[i - 1].insert(knots[i - 1].str());
            }
            m_visited.insert(knots[NUM_KNOTS - 1].str());
        }
        // draw(-16, 16);
        // for (auto visit : m_visits)
        //     visit.clear();
    }
}

void Puzzle2::moveHeadKnot(Direction direction, Pos &h) const
{
    switch (direction) {
    case Direction::left:
        h.x--;
        break;
    case Direction::right:
        h.x++;
        break;
    case Direction::up:
        h.y++;
        break;
    case Direction::down:
        h.y--;
        break;
    }
}

bool Puzzle2::moveIt(const Pos &a, const Pos &b) const
{
    return abs(a.x - b.x) > 1 || abs(a.y - b.y) > 1;
}
