// Simple Calculator

#include <iostream>
using namespace std;

int main()
{
    cout << "Enter two numbers and operator : " << endl;
    int a,b;
    char op;
    cin >> a >> op >> b;
    

    switch(op)
    {
        case '+':
        cout << (a+b) << endl;
        break;

        case '-':
        cout << (a-b) << endl;
        break;

        case '*':
        cout << (a*b) << endl;
        break;

        case '/':
        cout << (a/b) << endl;
        break;

        case '%':
        cout << (a%b) << endl;
        break;

        default:
        cout << "Enter Valid Operator...";
    }



    return 0;
}