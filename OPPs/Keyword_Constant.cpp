#include<iostream>
using namespace std;
int main(){
    const int num = 5;
    // num = num + 10;  if we change the value of the const argument, it thwrows an error.  
    cout << num << endl;
    return 0;
}

/*
#include <iostream>  
using namespace std;  
int main ()  
{  
// declaration of the integer variables  
int x = 10, y = 20;  
  
// use const keyword to make constant pointer  
int* const ptr = &x; //  const integer ptr variable point address to the variable x  
  
// ptr = &y; // now ptr cannot changed their address  
*ptr = 15; // ptr can only change the value  
cout << " The value of x: " << x << endl;  
cout << " The value of ptr: " << *ptr << endl;  
return 0;  
}   
*/