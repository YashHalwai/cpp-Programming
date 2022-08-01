#include <iostream>
using namespace std;

void play_music()
{
    cout << "Playing Music" << endl;
}

void sayHi(string Name)
{
    cout << "Hi, " << Name << endl;
}

string sayHello(string Name)
{
    return "Hello " + Name;
}

int areaOfCircle(int radius)
{
    return 3.14 * radius * radius;
}

int main()
{
    play_music();
    sayHi("Yash");
    cout << sayHello("Coding Minutes") << endl;

    int area = areaOfCircle(15);

    if(area >= 10)
    {
        cout << "We can build bunglow." << endl;
    }
    

    return 0;
}