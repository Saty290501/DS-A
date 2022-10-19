/* Runtime polymorphism:  Runtime polymorphism is also known as dynamic polymorphism. 
Method overriding is a way to implement runtime polymorphism.
Method Overiding/Function Overiding: 
Basically function overriding means redefine a function which is present in the base class, also be defined in the derived class.*/

#include<iostream>
using namespace  std;

class Base{
    public:
    void Display(){
        cout << "Welcome to Base Class" << endl;
    }
};
class Derived: public Base{
    public:
    void Display(){
        cout << "Welcome to Derived Class" << endl;

        // Base::Display(); // call Overidden funtion
    }

};
int main(){
    Derived D1, D2;
    D1.Display(); // Welcome to Derived Class

    D2.Base::Display(); // Welcome to Base Class

    return 0;
}
