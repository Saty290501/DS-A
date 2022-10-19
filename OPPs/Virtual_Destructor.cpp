// Deleting a derived class object using a pointer to a base class, 
// the base class should be defined with a virtual destructor.

#include<iostream>
using namespace std;
class Base{
    public:
    Base(){
        cout << "Constructor Base class" << endl;
    }
    virtual ~Base(){
        cout << "Destructor Base class" << endl;
    }
};
class Derived: public Base{
    public:
    Derived(){
        cout << "Constructor Derived class" << endl;
    }
    ~Derived(){
        cout << "Destructor Derived class" << endl;
    }
};
int main(){
    Base *ptr = new Derived;
    delete ptr;

    return 0;

}