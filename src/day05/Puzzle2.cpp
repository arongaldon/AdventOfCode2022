#include "Puzzle2.h"

#include <algorithm>

using namespace AronGaldonGines::AOC2022::D05;

void Puzzle2::rearrange()
{
    for (auto step : m_steps) {
        vector<char> batchOfCrates;
        for (int i = 0; i < step.quantity; ++i)
            if (!step.source->empty()) {
                batchOfCrates.push_back(step.source->top());
                step.source->pop();
            }
        reverse(batchOfCrates.begin(), batchOfCrates.end());
        for (auto crate : batchOfCrates)
            step.target->push(crate);
    }
}
