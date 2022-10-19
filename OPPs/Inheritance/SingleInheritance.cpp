// In single inheritance, there is only one parent class and one child class.

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

int main(){
    Dog D1;
    D1.eat();
    D1.bark();
}