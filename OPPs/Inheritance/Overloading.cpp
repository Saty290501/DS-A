/*Compile time polymorphism is also known as static polymorphism. 
This type of polymorphism can be achieved through function overloading or operator overloading 

Function overloading: 
When there are multiple functions in a class with the same name but different parameters,
these functions are overloaded. The main advantage of
function overloading is it increases the readability of the program. 
Functions can be overloaded by using different numbers of arguments and by using different types of arguments.
*/


// 1) Function overloading with different numbers of arguments:
/*
#include<iostream>
using namespace std;

class addition{
    public:
    //Function with two parameters
    int Add(int a, int b){
        return a + b;
    }
    //Function with three parameters
    int Add(int a, int b, int c){
        return a + b + c;
    }
};

int main(){
    addition A;
    cout << A.Add(5, 10) << endl;
    cout << A.Add(5, 10, 23) << endl;
    return 0;
}
*/

// 2) Function overloading with different types of arguments:
#include<iostream>
using namespace std;

class addition{
    public:
    //Function with two double parameters
    double Add(double a, double b){
        return a + b;
    }
    //Function with three integer parameters
    int Add(int a, int b, int c){
        return a + b + c;
    }
};

int main(){
    addition A;
    cout << A.Add(5.56, 10.85) << endl;
    cout << A.Add(5, 10, 23) << endl;
    return 0;
}