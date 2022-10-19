#include <iostream>  
using namespace std;  

class Shape  //Abstract Base class(A class that contains a pure virtual function is known as an abstract class.)
{  
    public:  
    virtual float calculateArea() = 0; // pure virtual function.  pure virtual function providing interface framework.
};  
class Square : public Shape  
{  
    float a;  
    public:  
    Square(float l)  
    {  
        a = l;  
    }  
    float calculateArea()  
    {  
        return a*a;  
    }  
};  
class Circle : public Shape  
{  
    float r;  
    public:  
      
    Circle(float x)  
    {  
        r = x;  
    }  
    float calculateArea()  
    {  
        return 3.14*r*r ;  
    }  
};  
class Rectangle : public Shape  
{
    float l, b;
    public:  
    Rectangle(float x, float y)  
    {  
       l=x;  
       b=y;  
    }  
    float calculateArea()  
    {  
        return l*b;  
    }  
};  
int main()  
{  
      
    Shape *p;  //We can’t create object of abstract class 
                //Abstract class has not implemented method so, we cant create the object
                //The word 'Abstract' instruct the compiler to not create an object of the class
    Square s(3.4);  
    Rectangle r(5,6);  
    Circle c(7.8);  
    p =&s;  
    cout << "Area of the square is " <<p->calculateArea()<< endl;  
    p = &r;  
    cout << "Area of the rectangle is " <<p->calculateArea()<< endl; 
    p = &c;  
    cout << "Area of the circle is " <<p->calculateArea()<< endl;    
    return 0;  
}  

/*
You can see how an abstract class defined an interface in terms of calculateArea() 
and 3 other classes implemented same function but with different algorithm to calculate the area specific to the shape.

A pure virtual function is a member function which is declared within a base class and implemented in a derived class.
The classes which are containing pure virtual function are the abstract classes.
All the derived classes must define the pure virtual function.
If the derived class does not define the pure virtual function; it will not throw any error but the derived class becomes an abstract class.
*/
