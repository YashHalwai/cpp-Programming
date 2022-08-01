// While example --> Sum of N inputs (followed by N inputs)

#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter the Number: " << endl;
    cin >> n;
    int no;

    int i = 1;
    int sum = 0;

    while(i <= n)
    {
        cin >> no;
        sum = sum + no;
        i = i + 1;
    }

    cout << sum;

    return 0;
}