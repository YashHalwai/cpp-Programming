// Prime Number Check

#include <iostream>
using namespace std;

int main()
{

    int N;
    cin >> N;

    int i;

    for(i = 2; i < N - 1; i++)
    {
        if(N % i == 0)
        {
            cout << N << " is not Prime" << endl;
            break;
        }
    }

    // if(i == N)
    // {
    //     cout << N << " is prime" << endl;
    // }

    cout << N << " is prime" << endl;

    return 0;
}
