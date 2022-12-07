#include "Puzzle1.h"
#include "Puzzle2.h"
#include <iostream>

using namespace AronGaldonGines::AOC2022::D06;

int main()
{
    Puzzle1 after5("bvwbjplbgvbhsrlpgdmjqwftvncz");
    Puzzle1 after6("nppdvjthqldpwncqszvftbrmjlhg");
    Puzzle1 after7("mjqjpqmgbljsphdztnvjfqwrcgsmlb");
    Puzzle1 after10("nznrnfrfntjfmvfwmzdfjlvtqnbhcprsg");
    Puzzle1 after11("zcfzfwzzqfrljwzlrfnpqdbhtmscgvjw");
    Puzzle1 d06p1;
    cout << "*** Puzzle1 ***" << endl
         << "Number of characters until first marker (4 characters without repetitions)" << endl
         << "* Sample   5: " << after5.findLastIndexOfFirstMarker() << endl
         << "* Sample   6: " << after6.findLastIndexOfFirstMarker() << endl
         << "* Sample   7: " << after7.findLastIndexOfFirstMarker() << endl
         << "* Sample  10: " << after10.findLastIndexOfFirstMarker() << endl
         << "* Sample  11: " << after11.findLastIndexOfFirstMarker() << endl
         << "* Input file: " << d06p1.findLastIndexOfFirstMarker() << endl;

    // Puzzle2 d06p2;
    // cout << "*** Puzzle2 ***" << endl << ": " <<  << endl;

    return EXIT_SUCCESS;
}
