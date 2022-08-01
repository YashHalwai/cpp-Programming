// Quiz 2 -->

#include <iostream>
using namespace std;

/*  
int main()
{
  
    #include <bits/stdc++.h>
using namespace std;
 
void welcome(string name2){
    cout<<"Welcome to "<<name2<<endl;
    return;
}
 
void greet(string name){
    cout<<"Hello, ";
    welcome(name);
    cout<<"Happy Learning!"<<endl;
    return;
}
 
int main() {
    string s="Coding Minutes";
    greet(s);
}
    return 0;
}
*/

/*
int x=0;
int y=10;
void multiply(int a, int b){
    x=a*b; 
    int y=y+5;
    return;
}
 
int main() {
   int a=5,b=10;
   multiply(a,b);
   cout<<x<<endl;
   cout<<y<<endl;
 
}
*/

/* 
void func(int &a, int b){
    a=a*b; 
    b=a+b;
    return;
}
 
int main() {
   int a=5,b=10;
   func(a,b);
   cout<<a<<" "<<b;
 
}
*/

/*
#include <bits/stdc++.h>
using namespace std;
 
int func(int &a, int b){
    int ans=a*b; 
    cout<<ans<<endl;
    return a+b;
}
 
int main() {
   int a=3,b=7;
   int ans=func(a,b);
   cout<<ans<<endl;
 
}
*/

/*
Consider the following two functions written in a same program. Is it a valid example for function overloading?

int fun(){
...
}
void fun(){
....
}

- - > No, it is not valid because the compiler will have a ambiguity on making a call to function.
*/