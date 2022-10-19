/*
an inline functions to reduce the function call overhead.

Inline function is a function that is expanded in line when it is called. 
When the inline function is called whole code of the inline function 
gets inserted or substituted at the point of inline function call. 
This substitution is performed by the C++ compiler at compile time. 
Inline function may increase efficiency if it is small.



*/
#include <iostream>
using namespace std;

// inline int cube(int s)
// {
//     return s*s*s;
// }
// int main()
// {
//     cout << "The cube of 3 is: " << cube(3) << "\n";
//     return 0;
// } 
//Output: The cube of 3 is: 27

inline int fun(int &a, int &b){
    return (a > b) ? a : b;
}

int main(){
    int a = 10;
    int b = 15;

    int ans = fun(a, b);
    cout << ans << endl;

    a = a + 20;
    b = b + 10;

    ans = fun(a, b);
    cout << ans << endl;

    return 0;
}

