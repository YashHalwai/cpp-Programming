// Bit Manipulation techniques....

/*

Bitwise Operators - - >

1) Binary AND &
2) Binary OR |
3) Binary XOR ^
4) Binary One's Complement ~ (NOT)
5) Binary Left Shift <<
6) Binar Right Shift >>

*/

// Doing the negation of bit 0 is 1 and doing the negation of integer 0 is -1...

#include <iostream>
using namespace std;

int main()
{
    cout << (1 & 2) << endl;
    cout << (1 | 5) << endl;
    cout << (4 ^ 4) << endl;
    cout << (~0) << endl;
    cout << (5 << 2) << endl;
    cout << (5 >> 2) << endl;
}