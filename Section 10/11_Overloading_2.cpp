// Overloading - using different data types

// Create a print function that accepts different types of data

#include <iostream>
#include <vector>
using namespace std;

void print (int a)
{
    cout << a << endl;
}

void print(vector <int> a)
{
    for(int x: a)
    {
        cout << x << ",";
    }

    cout << endl;
}

void print(char *arr)
{
    cout << arr << endl;
}

int main()
{
    int a = 5;

    vector<int> arr = {1,5,7,8,9,6};

    char carr[] = "abcde";

    print(a);
    print(arr);
    print(carr);
    return 0;
}