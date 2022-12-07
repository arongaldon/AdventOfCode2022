#include "Puzzle1.h"
#include "Puzzle2.h"

#include <array>
#include <iostream>

using namespace AronGaldonGines::AOC2022::D06;

int main()
{
    array<string, 5> s = {"bvwbjplbgvbhsrlpgdmjqwftvncz", "nppdvjthqldpwncqszvftbrmjlhg",
                          "mjqjpqmgbljsphdztnvjfqwrcgsmlb", "nznrnfrfntjfmvfwmzdfjlvtqnbhcprsg",
                          "zcfzfwzzqfrljwzlrfnpqdbhtmscgvjw"};

    Puzzle1 p1after5(s[0]);
    Puzzle1 p1after6(s[1]);
    Puzzle1 p1after7(s[2]);
    Puzzle1 p1after10(s[3]);
    Puzzle1 p1after11(s[4]);
    Puzzle1 d06p1;
    cout << "*** Puzzle1 ***" << endl
         << "Number of characters until first marker (4 characters without repetitions)" << endl
         << "* Sample   5: " << p1after5.findLastIndexOfFirstMarker() << endl
         << "* Sample   6: " << p1after6.findLastIndexOfFirstMarker() << endl
         << "* Sample   7: " << p1after7.findLastIndexOfFirstMarker() << endl
         << "* Sample  10: " << p1after10.findLastIndexOfFirstMarker() << endl
         << "* Sample  11: " << p1after11.findLastIndexOfFirstMarker() << endl
         << "* Input file: " << d06p1.findLastIndexOfFirstMarker() << endl;

    Puzzle2 p2after23(s[0]);
    Puzzle2 p2after23b(s[1]);
    Puzzle2 p2after19(s[2]);
    Puzzle2 p2after29(s[3]);
    Puzzle2 p2after26(s[4]);
    Puzzle2 d06p2;
    cout << "*** Puzzle2 ***" << endl
         << "Number of characters until first marker (14 characters without repetitions)" << endl
         << "* Sample  23: " << p2after23.findLastIndexOfFirstMarker() << endl
         << "* Sample  23: " << p2after23b.findLastIndexOfFirstMarker() << endl
         << "* Sample  19: " << p2after19.findLastIndexOfFirstMarker() << endl
         << "* Sample  29: " << p2after29.findLastIndexOfFirstMarker() << endl
         << "* Sample  26: " << p2after26.findLastIndexOfFirstMarker() << endl
         << "* Input file: " << d06p2.findLastIndexOfFirstMarker() << endl;

    return EXIT_SUCCESS;
}
