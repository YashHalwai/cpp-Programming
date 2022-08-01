// Constants

/*

Constants are variables or values in programming language which cannot be modified once they are defined.

Using a const Keyword (read only)

const float pi = 3.14
const int loan_period = 10

// IMP Note

// Don't do this, intialisation is must for constants

const int x;
x = 5;

// Assignment is not allowed here

// Using preprocessor directive (symbolic)

#define PI 3.14
#define LOAN_PERIOD 10

*/

#include <iostream>
#define RAD 5 // macro
#define ll long long
using namespace std;

int main()
{
    cout << RAD * RAD << endl;
    const float pi = 3.14;
    // pi = pi +1; //error

    cout << pi * RAD * RAD << endl;
}