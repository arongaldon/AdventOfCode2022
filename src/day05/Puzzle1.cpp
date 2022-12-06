#include "Puzzle1.h"

#include <fstream>
#include <sstream>

using namespace AronGaldonGines::AOC2022::D05;

Puzzle1::Puzzle1()
    : m_stacks {createStacks()}
    , m_steps {readRearrangementSteps(m_stacks)}
{
    fillInitialStacks();
}

string Puzzle1::cratesOnTop() const
{
    string crates;

    for (auto stack : m_stacks)
        if (!stack->empty())
            crates += stack->top();

    return crates;
}

void Puzzle1::rearrange()
{
    for (auto step : m_steps) {
        for (int i = 0; i < step.quantity; ++i)
            if (!step.source->empty()) {
                step.target->push(step.source->top());
                step.source->pop();
            }
    }
}

StacksOfCrates Puzzle1::createStacks() const
{
    ifstream inputFile(INPUT_FILE_NAME);
    string line;

    while (getline(inputFile, line) && line.find('[') != string::npos)
        ;

    stringstream ss(line);
    string number;
    StacksOfCrates stacks;
    while (getline(ss, number, ' '))
        if (!number.empty())
            stacks.push_back(make_shared<StackOfCrates>());
    inputFile.close();

    return stacks;
}

void Puzzle1::fillInitialStacks()
{
    vector<StackOfCrates> reverseStacks;
    for (size_t i = 0; i < m_stacks.size(); ++i)
        reverseStacks.push_back(StackOfCrates());

    ifstream inputFile(INPUT_FILE_NAME);
    string line;
    while (getline(inputFile, line) && line.find('[') != string::npos) {
        stringstream ss(line);
        string column;
        for (size_t i = 1, i_stack = 0; i < line.size() && i_stack < reverseStacks.size();
             i += 4, ++i_stack)
            if (line[i] != ' ')
                reverseStacks.at(i_stack).push(line[i]);
    }

    for (size_t i = 0; i < reverseStacks.size(); ++i)
        while (!reverseStacks.at(i).empty()) {
            m_stacks.at(i)->push(reverseStacks.at(i).top());
            reverseStacks.at(i).pop();
        }
    inputFile.close();
}

vector<Step> Puzzle1::readRearrangementSteps(const StacksOfCrates &stacks) const
{
    ifstream inputFile(INPUT_FILE_NAME);
    string line;
    while (getline(inputFile, line))
        if (line.empty())
            break;

    vector<Step> steps;
    while (getline(inputFile, line)) {
        stringstream ss(line);
        string oneWord;
        Step oneStep;
        while (getline(ss, oneWord, ' '))
            if (oneWord == "move") {
                getline(ss, oneWord, ' ');
                oneStep.quantity = stoi(oneWord);
            } else if (oneWord == "from") {
                getline(ss, oneWord, ' ');
                oneStep.source = stacks.at(stoi(oneWord) - 1);
            } else if (oneWord == "to") {
                getline(ss, oneWord);
                oneStep.target = stacks.at(stoi(oneWord) - 1);
            }
        steps.push_back(oneStep);
    }
    inputFile.close();
    return steps;
}
