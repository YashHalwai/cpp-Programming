// For Loop

/*

for(init; stopping_condition; update_statement)
{
    // execute some stuff
}

*/

#include <iostream>
using namespace std;

int main()
{

    int cal;

    for(cal = 0; cal < 10; cal++)
    {
        cout << "Running a step and burning " << (cal + 1) << endl;
    }

    cout << "Out of the loop ";
    cout << cal << endl;

    return 0;
}


