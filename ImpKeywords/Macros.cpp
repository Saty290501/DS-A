/*
#include<iostream>
using namespace std;
#include is a preprocessor directive that tells the preprocessor to include header files in the program. 
< > indicate the start and end of the file name to be included. 
iostream is a header file that contains functions for input/output operations ( cin and cout ).

#define pi 3.14
#define Area(l,b) (l*b)     //A macro is a piece of code in a program that is replaced by the value of the macro. 
                            //Macro is defined by #define directive. 
                            //Whenever a macro name is encountered by the compiler, 
                            //it replaces the name with the definition of the macro. 
                            //It help in redability 
                            //no extra memory uses

int main(){
    int x = 3, y = 5;
    int area;
    area = Area(x, y);

    cout << "Area of rectangle is " << area << endl;

    return 0;
}
*/

#include<iostream>
using namespace std;

#define min(a, b) (((a) < (b)) ? (a):(b))

int main(){
    int x = 23, y = 34;
    cout << "Min value between " << x << " and " << y << " is " << min(x, y);
    return 0;
}
