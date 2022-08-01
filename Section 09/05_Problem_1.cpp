// Problem --> Sum of digit of Number

#include <iostream>
using namespace std;
/*
int main()
{

    int N;
    cin >> N;

    int sum = 0;

    while(N != 0)
    {
        int last_digit = N % 10;
        sum = sum + last_digit;

        // update...
        N = N / 10;
    }

    cout << sum << endl;

    return 0;
}
*/

int main()
{

    int N;
    cin >> N;

    int sum = 0;

    for(;N != 0;N = N / 10)
    {
        sum = sum + N%10;   
    }

    cout << sum << endl;

    return 0;
}