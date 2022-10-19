/* combination of hierarchical and multiple
Hybrid inheritance is a combination of more than one type of inheritance.
For example, A child and parent class relationship that follows multiple and hierarchical inheritances
can be called hybrid inheritance. */

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

class Dog: public Animal1{
    public:
        void Bark(){
            cout << "Barking" << endl;
        }
};

class HybridDog: public Animal1, public Animal2{
    public:
        void labra(){
            cout << "Labradoole" << endl;
        }
};

int main(){
    HybridDog HD1;
    HD1.eat();
    HD1.sleep();
    HD1.labra();

    return 0;
}