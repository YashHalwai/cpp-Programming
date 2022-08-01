/*

// Identifiers

1) Both an identifier and a variable are the names alloted by users to a particular entity in a program.
2) The identifier is only used to identify an entity uniquely in a program at the time of execution whereas, a variable is a name given to a memory location, that is used to hold a value.

*/

// Identify the identifiers

#include <iostream>
using namespace std;

float calculateMarks(int p, int c, int m)
{
    float avg = (p+c+m) / 3;
    return avg;
}

int main()
{
    float result = calculateMarks(45,65,96);
    cout << result;

}