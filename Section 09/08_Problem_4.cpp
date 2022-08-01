// Problem --> Print Reverse of a Number

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    while (n > 0)
    {
        int last_digit = n % 10;
        cout << last_digit;
        n = n / 10;
    }

    return 0;
}