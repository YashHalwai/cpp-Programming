// Problem --> Binary to Decimal

#include <iostream>
using namespace std;

// Given a integer N which having binary digits --> 0s & 1s
// Interpret the decimal equivalent of this number

int binary2Decimal(int N)
{
    int p = 1;
    int ans = 0;

    while(N != 0)
    {
        int last_digit = N % 10;
        ans = ans + last_digit*p;
        p = p*2;
        N = N/10;
    }

    return ans;
}

int main()
{
    int N;
    cin >> N;

    cout << binary2Decimal(N) << endl;

    return 0;
}