#include <iostream>
using namespace std;

class Car
{
public:
    string name; //data member (also instance variable)   
    int model; //data member (also instance variable)   
    // Creating a Contructor
    // Constructor is automatically invoked when object is created.
    //  It is used to initialize the objects of its class.
    // It is a special member function with the same name as of class.

    //Default Constructor
    Car()
    {
        cout << "Default Constructor called " << endl;
    }
    
    // Parameterized Constructor
    Car(string nm, int model){
        name = nm;
        this->model = model;
        cout << "Parameterized Constructor called " << endl;  //A constructor which has parameters is called parameterized constructor.
                                        // It is used to provide different values to distinct objects.
    }

    //Copy Constructor
    Car(Car& temp){
        cout << "Copy Constructor called " << endl;
        name = temp.name;
        model = temp.model;
    }


    void print()
    {
        cout << name << " " << model << endl;
    }
};

int main()
{
    //Object creates statically
    Car Mahindra("Scorpio",500);
    Mahindra.print();

    //Dynamically create
    // Car *p = new Car("XUV", 700);
    // p->print();

    // Copy Constructor
    Car Tata(Mahindra);
    Tata.print();
    return 0;
}

/* 
Charachterstic of Constructor:
1. It should be declared in the public section of the class.
2. They are automaticallly invoked whenever object is created.
3. They can't return value or do have returb type.
4.It can have default arguments.
5. We can't refer to the addredd.
*/
