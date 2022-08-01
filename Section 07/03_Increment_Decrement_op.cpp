// Increment & Decerement Operators

#include <iostream>
using namespace std;

int main()
{

    int a = 10;
    int b = 5;

    cout << "Increment & Decrement Operators" << endl;

    a = a + 1; // a++; or ++a
    b++; // b = b + 1;

    cout << a << " " << b << endl;

    a--;
    b--;

    cout << a << " " << b << endl << endl;

    // Behaviour Post Increment & Pre Increment

    int x = 10;
    int y = x++;
    cout << x << " " << y << endl;

    int z = ++x;
    cout << x << " " << z << endl;
    
    return 0;
}