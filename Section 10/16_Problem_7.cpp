// Problem --> Decimal to Binary

#include <iostream>
using namespace std;


int decimal2Binary(int N)
{
    int ans  = 0;
    int p = 1;

    while(N > 0)
    {
        int rem = N % 2;
        ans = ans + p * rem;
        p = p * 10;
        N = N / 2;
    }

    return ans;
}


int main()
{
    int N;
    cin >> N;

    cout << decimal2Binary(N) << endl;

    return 0;
}