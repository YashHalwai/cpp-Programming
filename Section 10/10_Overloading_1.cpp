// Overloading using variable parameters

#include <iostream>
using namespace std;

// Function Overloading Demo --> Multiple Function (Same Name)

int area (int l, int b)
{
    return l*b;
}

int area(int l)
{
    return l*l;
}

int main()
{

    cout << area(5,6) << endl;

    cout << area(4) << endl;

    return 0;
}
