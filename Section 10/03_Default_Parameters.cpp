// Default Parameters

/*

You can also use a default value parameter value, by using the equal sign (=).

If we call the function without an arguement, it uses the default value. 

*/

#include <iostream>
using namespace std;

void playMusic(int songId1 = 3, int songId2 = 6)

    {
        cout << "Playing Music " << songId1 << " and " << songId2 << endl;
    }

int main()
{

    playMusic();

    playMusic(5);

    playMusic(101, 150);

    return 0;
}