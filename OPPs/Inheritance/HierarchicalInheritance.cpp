/* In hierarchical inheritance, one class serves as a base class for more than one derived class. */

#include<iostream>
using namespace std;

class Animal
{
public:
    void eat(){
        cout << "eating" << endl;
    }
};

class Dog: public Animal{
    public:
        void Bark(){
            cout << "Barking" << endl;
        }
};

class Cat: public Animal{
    public:
        void Meow(){
            cout << "Meowing" << endl;
        }
        
};

int main(){
    Cat C1;
    C1.eat();
    // C1.Bark();  Can't access
    C1.Meow();
}