// do while loop

/*

// init

do()
{
    // execute some stuff
}
while(condition)

*/

#include <iostream>
using namespace std;

int main()
{
    int money = 5;

    do
    {
        cout << "Shooping & Money " << money << endl;
        money--;
    }
    while(money > 0);

    return 0;
}