#include <iostream>
using namespace std;

int main()
{
    cout << (5/3) << endl;

    // Typecasting => change of resulting datatype

    // Implicit typecasting (Compiler do it)
    cout << (5/3.0) << endl;
    cout << (5.0/3) << endl << endl;

    // char + int
    int letter = 'A';
    cout << letter + 1 << endl;


    char let = 'A';
    let = let +1;
    cout << let << endl << endl;

    char ch = 67;
    cout << ch << endl << endl;

    // Boolean Int

    cout << (true + 5) << endl;
    cout<< (false - 5) << endl;

}