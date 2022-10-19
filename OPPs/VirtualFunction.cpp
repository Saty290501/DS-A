/* Virtual Function: 
A virtual function is a member function which is declared within a base class and is redefined(overridden) by a derived class.
It is declared using the virtual keyword.
Virtual Funstion are mainly used to achieve Runtime polymorphism
When you refer to a derived class object using a pointer to the base class, you can call a virtual function for that object and execute the derived class’s version of the function. 
Base class pointer can point to the objects of base class as well as to the objects of derived class
https://www.javatpoint.com/cpp-virtual-function
*/

/*
#include <iostream>  
using namespace std;  
class Base  
{    
    public:  
    void display()  
    {
        cout << "Base Class is invoked" << endl;
    }  
};  
class Derived: public Base
{  
    public:  
    void display()  
    {
        cout << "Derived class is invoked" << endl;
    }  
};  
int main()  
{
    Derived D;
    D.display();
    Base *B = &D;
    B->display();
    return 0;  
}   */

/*In the above example, *B is the base class pointer. The pointer can only access the base class members 
but not the members of the derived class. Although C++ permits the base pointer to point to any object 
derived from the base class, it cannot directly access the members of the derived class. 
Therefore, there is a need for virtual function which allows the base pointer to access the members of the derived class.*/

#include <iostream>  
using namespace std;  
class Base  
{    
    public:  
    virtual void display()  
    {
        cout << "Base Class is invoked" << endl;
    }  
};  
class Derived: public Base
{  
    public:  
    void display()  
    {
        cout << "Derived class is invoked" << endl;
    }  
};  
int main()  
{
    Derived D;
    Base *B = &D; //pointer of base class    
    B->display(); //Late Binding occurs    //Derived class is invoked
    return 0;  
}  