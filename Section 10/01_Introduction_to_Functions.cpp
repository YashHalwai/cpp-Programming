// Functions in C++

/*
 A function is a block of instructions which only execute when it is called...
*/

/*

// Function Definition -->

So a function definition looks like...

returntype function-name (parameters if any)
{
    // bunch of instructions

    // return value (optional)
}

*/

/*

// Function Call -->

To call a function, write the function's name followed by two parantheses () and a semicolon ;

// Function Definition

void play_music()
{
    cout << "Paying Music";
}

// Function Call

play_music();

*/

/*

// Parameters -->

Parameters act as variable inside the function. You can add as many parameters as you want, just separate them with comma.

void play_music(int n)
{
    cout << "Playing Music " << n;
}

int main()
{
    play_music(5);

    return 0;
}

// Multiple Parameters

void play_music(int song1, int song2, int song3)
{
    cout << "Playing Music " << song1 << song2 << song3;
}

int main()
{
    play_music(5,6,7);

    return 0;
}

*/