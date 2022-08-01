// Problem --> Check Prime (Linear)

#include <iostream>
using namespace std;

bool isPrime(int n)
{
    for(int i = 2; i <= n - 1; i++)
    {
        if(n % i == 0)
        {
            // atleast 1 divisor other than 1 & N
            return false;
        }
    }

    return true;
}

int main()
{

    int n;
    cin >> n;

    cout << (isPrime(n) ? "Prime" : "Non-Prime");

    return 0;
}