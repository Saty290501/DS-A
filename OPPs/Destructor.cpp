/*
Destructor:-
A destructor in C++ is a member function of a class used to To deallocate the memory that the constructor 
allocated to an object for this purpose, we use the concept of destructor in C++.

A destructor is a special member function that works just opposite to a constructor;
unlike constructors that are used for initializing an object, destructors destroy (or
delete) the object. The purpose of the destructor is to free the resources that the object
may have acquired during its lifetime.
*/

#include <iostream>
using namespace std;

class Guided_path{
public:
    //Destructor
    ~Guided_path ()
    {
        cout << "Destructor is called in base class" << endl;
    }
};

class D_Guided_path: public Guided_path{
    public:
    ~D_Guided_path(){
        cout << "Destructor is called in derived class" << endl;
    }
};
int main ()
{
    D_Guided_path DG;
    return 0;
}

    /*
    When is a destructor called?
    A destructor function is called automatically when:
    ➔ the object goes out of scope
    ➔ the program ends
    ➔ a scope (the { } parenthesis) containing local variable ends.
    ➔ a delete operator is called

    */