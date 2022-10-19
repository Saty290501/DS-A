/* In multiple inheritance, a class can inherit more than one class. 
This means that in this type of inheritance, a single child class can have multiple parent classes. */

#include<iostream>
using namespace std;

class Animal1
{
public:
    void eat(){
        cout << "eating" << endl;
    }
};

class Animal2{
    public:
        void sleep(){
            cout << "sleping" << endl;
        }
};

// Inherited Class
class Dog: public Animal1, public Animal2{
    public:
        void bark(){
            cout << "Barking" << endl;
        }
        
};

int main(){
    Dog D1;
    D1.eat();
    D1.sleep();
    D1.bark();
}