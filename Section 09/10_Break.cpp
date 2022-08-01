// Break Statement: Break the loop at given condition and never moves forward...


#include <iostream>
using namespace std;

int main()
{

    int calories = 0;
    int gf_calls_up = 10;

    while(calories < 30)
    {
        cout << "running & burning " << calories << endl;
        if(calories == gf_calls_up)
        {
        // need to stop here
        break;
        }

        calories++;
    }

    cout << "Out of the loop";

    return 0;
}