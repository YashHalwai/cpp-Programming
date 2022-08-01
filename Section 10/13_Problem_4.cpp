// Problem --> Check Prime (Sqrt N Optimisation)

#include <iostream>
using namespace std;


bool isPrimeOptimised(int n)
{
    if(n == 1 || n == 0)
    {
        return false;
    }

    for(int i = 2; i*i <= n; i++)
    {
        if(n % i == 0)
        {
            return false;
        }
    }

    return true;
}

int main()
{

    int n;
    cin >> n;

    cout << (isPrimeOptimised(n) ? "Prime" : "Not Prime");

    return 0;

    
}