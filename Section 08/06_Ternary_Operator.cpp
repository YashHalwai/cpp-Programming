// Ternary Operator

#include <iostream>
using namespace std;

int main()
{

    int x;
    cin >> x;

    x % 2 == 0 ? cout << "Even" : cout << "Odd"; // Shorthand for if - else

    string weather = x > 20 ? " HOT" : " COOL";
    cout << weather << endl;

    return 0;
}