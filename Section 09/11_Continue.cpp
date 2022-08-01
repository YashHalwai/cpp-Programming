// Continue Statement: Control Jumps to the beginning of the loop for the next iteration...

#include <iostream>
using namespace std;

int main()
{

    int calories = 0;
    

    while(calories <= 30)
    {
        cout << "running & burning " << calories << endl;
        if(calories % 5 == 0)
        {
            cout << "Well Done" << endl;
            calories++;
            continue;
        }

        cout << "running & burning " << calories << endl;
        calories++;
    }

    cout << "Out of the loop";

    return 0;
}