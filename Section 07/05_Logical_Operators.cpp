// Logical Operators && || 

#include <iostream>
using namespace std;

int main()
{
    int money = 25000;
    int phone = 20000;
    bool saleIsOn = true;

    if(money >= phone && saleIsOn) // 1 && 1 = 1 , 1 && 0 = 0, 0 && 1 == 0, 0 && 0 == 0
    {
        cout << "Let's buy a phone :)" << endl;
    }
    else
    {
        cout << "Let's Wait...." << endl;
    }

    cout << endl;

    if(money == phone || saleIsOn)
    {
        if(money >= phone && (!saleIsOn)) // 1 || 1 = 1 , 1 || 0 = 1, 0 || 1 == 1, 0 || 0 == 0
    {
        cout << "Let's buy a phone :)" << endl;
    }
    else
    {
        cout << "Let's Wait...." << endl;
    }

    }
    
    return 0;

}

