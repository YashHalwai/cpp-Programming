// Problem --> ABCD Pattern

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++)
    {
        char letter = 'A';

        // letters n-i+1 letters in increasing values
        for(int cnt = 1; cnt <= n-i+1; cnt++)
        {
            cout << letter;
            letter++;
        }

        // letters n-i+1 letters in decreasing values
        letter = letter - 1;
        for(int cnt = 1; cnt <= n-i+1; cnt++)
        {
            cout << letter;
            letter--;
        }

        // new line
        cout << endl;
    }
}