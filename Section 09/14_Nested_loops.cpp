// Nested Loops

#include <iostream>
using namespace std;

int main()
{
    int R,C;
    cin >> R >> C;

    int val = 1;

    //  Nested Loops

    for(int i = 0; i < R; i++)
    {
        // print col No of numbers

        for(int j = 0; j < C; j++)
        {
            cout << val << " ";
            val = val + 1;
        }
        // new line
        cout << endl;
        
    }

    return 0;
}