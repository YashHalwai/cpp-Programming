/*

// Preprocessor Directive

1) The preprocessors are the directives, which give instructions to the compiler to preprocess some code before actual compilation starts.
2) The directive begins with '#'
3) The actual code is compiled by compiler only.

#include <iostream> --> // #include directive

#define PI 3.14 --> // #define directive

*/

#define PI 3.14

#include <iostream>
using namespace std;

int main()
{
    int r = 5;
    float area = PI * r * r;

    cout<<area<<endl;

    return 0;
}


