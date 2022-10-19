#include<iostream>
using namespace std;

class Human
{
public:
    int age;
private:
    int weight;
protected:
    int height;

public:
    int getheight(){
        return height;
    }

    void setheight(int h){
        this->height = h;
    }
};

class Male: private Human{
    public:
        int colour;
    public:
        void eating(){
            cout << "Lunch time " << endl;
        }
        int getheight(){
            return height;
        }
};

int main(){
    Male m1;
    // m1.setheight(6);
    cout << m1.colour << endl;
    m1.eating();
    // cout << m1.age << endl;
    cout << m1.getheight() << endl;
    // cout << m1.getheight() << endl;
    return 0;
}

/* 

// C++ program to demonstrate inheritance with structures.
#include <iostream>
using namespace std;
 
struct Base {
public:
    int x;
};
 
// is equivalent to
// struct Derived : public Base {}
struct Derived : Base {
public:
    int y;
};
 
int main()
{
    Derived d;
   
    // Works fine because inheritance
    // is public.
    d.x = 20;
    cout << d.x;
    cin.get();
    return 0;
}

*/