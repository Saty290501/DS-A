/*
A scope is a region of the program and broadly speaking there are three places, 
where variables can be declared −
Inside a function or a block which is called local variables,
In the definition of function parameters which is called formal parameters.
Outside of all functions which is called global variables.

Local Variable:-->> Variables that are declared inside a function or block are local variables.

Global Variable:-->> Global variables are defined outside of all the functions, usually on top of the program. 
                     The global variables will hold their value throughout the life-time of your program.
*/


#include <iostream>
using namespace std;
 
// Global variable declaration:
int g;
 
int main () {
   // Local variable declaration:
   int a, b;
 
   // actual initialization
   a = 10;
   b = 20;
   g = a + b;
  
   cout << g;
 
   return 0;
}