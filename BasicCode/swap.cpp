/*
How to Creating Reference Variable?
A reference variable is just another name to an already existing variable.
The reference variable is created using the '&' symbol.

For example, let a is a variable and we can create a reference variable of a as x as follows,

int a =10;

int &x=a;

Here variable x is a reference variable for variable a. Both a and x are pointing at the same memory location. 
Hence if the value of a is changed then the value of x also changes automatically.

Points to Remember
1. Reference variables should not be initilized with a constant value. For example int &a=100 is not allowed.

2. Never return the reference variable from a function as a memory address.

3. Avoid assigning the reference variables to the variables whose memory is dynamically allocated.
*/

// C++ program to swap two integers values and 
// display the values before and after swapping using call by reference.

#include<iostream>
 using namespace std;
 void swap(int &x, int &y)
 {
     int temp;
     temp = x;
     x = y;
     y = temp;
 }
 int main()
 {
     int a, b;
     cout<<"Enter the value of a: ";
     cin>>a;
     cout<<"Enter the value of b: ";
     cin>>b;
     cout<<endl<<"Before swapping: ";
     cout<<"a= "<<a<<" and b= "<<b;
     swap(a, b); 
     cout<<endl<<"After swapping: "; 
     cout<<"a= "<<a<<" and b= "<<b;
 }