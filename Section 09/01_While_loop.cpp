// While Loop

/*

// Init

while(condition os true)
{
    // execute some stuff

    // update
}

*/

#include <iostream>
using namespace std;

int main()
{

    int cal = 0;

    while(cal < 10)
    {
        cout << "Running a step and burning " << cal + 1 << endl;
        cal = cal + 1; // V.V.IMP
    }

    cout << cal << endl;



    return 0;
}