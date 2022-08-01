// Data - types:

/*

Boolean - > boolean
Character - > char
Integer - > int
Floating Point - > float
Double floating point - > double 

*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    bool x = true;
    bool isWeatherRainy = false;

    cout << x << endl;
    cout << isWeatherRainy << endl;

    int y = 5128;

    float pi = 3.14579554;
    double pi_d = 3.1457896543;

    cout << y << endl;
    cout << setprecision(10) << pi << endl;
    cout << setprecision(10) << pi_d << endl;

    // Character

    char A = 'a';
    char s = '$';

    cout << A << " " <<  s << endl;

    return 0;
}