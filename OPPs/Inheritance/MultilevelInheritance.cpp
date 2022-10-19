/* When a class inherits from a derived class, and the derived class becomes the base class of the new class, 
it is called multilevel inheritance. 
In multilevel inheritance, there is more than one level. */

#include<iostream>
using namespace std;

//Parent Class
class Animal
{
public:
    void eat(){
        cout << "eating" << endl;
    }
};

//Child Class
class Dog: public Animal{
    public:
        void bark(){
            cout << "Barking" << endl;
        }
};

class lab: public Dog{
    public:
        void smart(){
            cout << "Very talented" << endl;
        }
        
};

int main(){
    lab l1;
    l1.eat();
    l1.bark();
    l1.smart();
}