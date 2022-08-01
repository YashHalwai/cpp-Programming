#include <iostream>
#include <iomanip> // Decimal
using namespace std;

int main()
{
    // Find average of 5 numbers (integers) and print the output upto 4 decimal places

    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;

    int sum = a + b + c + d + e;

    cout << (float)sum/5 << endl;

    cout << fixed << setprecision(4) << (float)sum/5 << endl; // 4 decimal places

    return 0;
}