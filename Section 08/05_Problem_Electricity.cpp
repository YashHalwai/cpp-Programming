// Problem - - > Electricity Bill Calculator

#include <iostream>
using namespace std;

int main()
{
    cout << "_______Electricity Bill Calculator_________" << endl << endl;

    int units;
    cin >> units;

    if(units >= 1 && units <= 100)
    {
        cout << "Charges = free " << endl;
        cout << "Bill = Rs." << units * 0 << endl;
    }
    else if(units >= 100 && units <= 200)
    {
        cout << "Charges = Rs.5/unit" << endl;
        cout << "Bill = Rs." << (units - 100) * 5 << endl;
    }
    else if(units >= 200 && units <= 300)
    {
        cout << "Charges = Rs.10/unit" << endl;
        cout << "Bill = Rs." << (100*5) + (units - 200) * 10 << endl;
    }
    else
    {
        cout << "Charges = Rs.12/unit" << endl;
        cout << "Bill = Rs." << (100*5) + (100*10) + (units - 300) * 12 << endl;
    }

    cout << "Your bill was displayed..." << endl;

    return 0;
}