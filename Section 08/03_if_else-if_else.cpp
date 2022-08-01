// if - else if - else

#include <iostream>
using namespace std;

int main()
{
    int marks;
    cin >> marks;

    if(marks >= 80)
    {
        cout << "Excellent : Grade (O)" << endl;
    }
    else if(marks >= 70)
    {
        cout << "Well Done : Grade (A)" << endl;
    }
    else if(marks >= 60)
    {
        cout << "Good: Grade (B)" << endl;
    }
    else
    {
        cout << "Need improvements..." << endl;
    }

    return 0;
}