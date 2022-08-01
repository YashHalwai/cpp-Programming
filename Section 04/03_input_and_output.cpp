// Calculate Average Marks....

#include <iostream>
using namespace std;
/*
int main()
{
    // Data
    int physics = 87; // integer type data
    int chemistry = 77;
    int maths = 95; 

    // Processing
    float average = (physics + chemistry + maths) / 3.0; // floating point number

    // Output
    cout << "Average Marks = " << average << endl;

    return 0;
}
*/

// take input from user

int main()
{
    int phy,chem,math;

    // cin => use to take input from user...
    //You can make it more readable using some statement using cout
    cout << "Enter Marks of phy, chem & math: " << endl;
    cin >> phy;
    cin >> chem;
    cin >> math;

    float avg = (phy + chem +  math) / 3.0;

    cout << "Average Marks = " << avg;

    return 0;
}