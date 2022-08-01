/*

// Namespaces

1) Naming conflicts can arise if you use multiple 3rd party libraries in smae program.
2) Namespaces are used to resolve naming conflicts.
3) std is the name for the standard C++ Namespace.
4) Writing std::cout will tell the compliler to use "cout" from standard namespace.

*/

#include <iostream>

int main()
{
    int n;
    std::cin >> n;
    std::cout << "Hello World";

}