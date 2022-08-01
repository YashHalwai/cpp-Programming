// Number Pyramid

#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;

    // Rows
    for(int i = 0; i <= n; i++)
    {
        // spaces
        for(int cnt = 1; cnt <= n - i; cnt++)
        {
            cout << " ";
        }

        // increasing numbers
        int val = i;
        for(int cnt = 1; cnt <= i; cnt++)
        {
            cout << val;
            val++;
        }

        // decreasing numbers
        val = val - 2;
        for(int cnt = 1; cnt <= i - 1; cnt++)
        {
            cout << val;
            val--;
        }

        // new line
        cout << endl;
    }

    return 0;

}