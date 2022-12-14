#pragma once

#include "Puzzle1.h"

#include <array>

namespace AronGaldonGines::AOC2022::D09 {

constexpr int NUM_KNOTS = 10;

class Puzzle2 : public Puzzle1
{
public:
    // virtual void draw(int min, int max) const override;
    virtual void sewYou() override;

protected:
    void moveHeadKnot(Direction direction, Pos &h) const;
    int compare(const int &a, const int &b) const;
    bool moveIt(const Pos &a, const Pos &b) const;

private:
    // array<unordered_set<string>, NUM_KNOTS> m_visits; // Only for drawing samples
};

} // namespace AronGaldonGines::AOC2022::D09
