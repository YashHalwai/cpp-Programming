// For While Loop Are equal

#include <iostream>
using namespace std;

// Case 1:

/*
int main()
{

    int cal;
    cal = 0; // We can do this 

    for(; cal < 10; cal++)
    {
        cout << "Running a step and burning " << (cal + 1) << endl;
    }

    cout << "Out of the loop ";
    cout << cal << endl;

    return 0;
}
*/
// Case 2:
/*
int main()
{

    int cal;
    cal = 0; // We can do this 

    for(; cal < 10;)
    {
        cout << "Running a step and burning " << (cal + 1) << endl;
        cal++; // Similar to while loop now...
    }

    cout << "Out of the loop ";
    cout << cal << endl;

    return 0;
}
*/
// Case 3:
/*
int main()
{

    int cal;
    cal = 0; // We can do this 

    for(;;) // Yes it works...
    {
        cout << "Running a step and burning " << (cal + 1) << endl;
        if(cal == 10) // break the loop or it will be infinite mode...
        break;
        cal++; // Similar to while loop now...
    }

    cout << "Out of the loop ";
    cout << cal << endl;

    return 0;
}
*/