#pragma once

#include <memory>
#include <stack>
#include <string>
#include <vector>

using namespace std;

namespace AronGaldonGines::AOC2022::D05 {

// sample_input should return CMZ
const auto INPUT_FILE_NAME = "input";

using StackOfCrates = stack<char>;
using StacksOfCrates = vector<shared_ptr<StackOfCrates>>;
struct Step
{
    size_t quantity;
    shared_ptr<StackOfCrates> source;
    shared_ptr<StackOfCrates> target;
};

class Puzzle1
{
public:
    Puzzle1();
    string cratesOnTop() const;
    virtual void rearrange();

protected:
    StacksOfCrates createStacks() const;
    void fillInitialStacks();
    vector<Step> readRearrangementSteps(const StacksOfCrates &stacks) const;

protected:
    StacksOfCrates m_stacks;
    vector<Step> m_steps;
};

} // namespace AronGaldonGines::AOC2022::D05
