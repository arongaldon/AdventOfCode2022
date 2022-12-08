#include "Puzzle1.h"
#include "Puzzle2.h"

#include <iostream>
#include <string>

using namespace AronGaldonGines::AOC2022::D07;

int main()
{
    // clang-format off
    const vector<string> sample =
    {
        "$ cd /",
        "$ ls",
        "dir a",
        "14848514 b.txt",
        "8504156 c.dat",
        "dir d",
        "$ cd a",
        "$ ls",
        "dir e",
        "29116 f",
        "2557 g",
        "62596 h.lst",
        "$ cd e",
        "$ ls",
        "584 i",
        "$ cd ..",
        "$ cd ..",
        "$ cd d",
        "$ ls",
        "4060174 j",
        "8033020 d.log",
        "5626152 d.ext",
        "7214296 k"};
    // clang-format on

    Puzzle1 d07p1Sample(sample);
    auto directories = d07p1Sample.findDirsWithSizeOfAtMost(100000);
    cout << "*** Puzzle1 ***" << endl
         << "* Sample: " << directories.size() << " directories: " << endl;
    int sum = 0;
    for (auto directory : directories) {
        cout << directory.first << " " << directory.second << endl;
        sum += directory.second;
    }
    cout << "Sum=" << sum << endl << endl;

    Puzzle1 d07p1;
    directories = d07p1.findDirsWithSizeOfAtMost(100000);
    cout << "* Input file: " << directories.size() << " directories: " << endl;
    sum = 0;
    for (auto directory : directories) {
        cout << directory.first << " " << directory.second << endl;
        sum += directory.second;
    }
    cout << "Sum=" << sum << endl;

    Puzzle2 d07p2Sample(sample);
    const int total {70000000};
    const int free {30000000};
    auto size = d07p2Sample.sizeOfSmallestDirToDelete(total, free);
    cout << "*** Puzzle2 ***" << endl << "* Sample: " << size << endl;

    Puzzle2 d07p2;
    size = d07p2.sizeOfSmallestDirToDelete(total, free);
    cout << "*** Puzzle2 ***" << endl << "* Input file: " << size << endl;

    return EXIT_SUCCESS;
}
