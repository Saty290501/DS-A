/* Binding (or wrapping) code and data together into a single unit is known as encapsulation.

Why Encapsulation?
In C++, encapsulation helps us keep related data and functions together, which makes our code cleaner and easy to read.
It helps to control the modification of our data members.

In other words: Encapsulation is about wrapping data and methods into a single class and protecting it from outside intervention.
*/


/*

#include<iostream>
using namespace std;

class Student
{
private:
    // private data members
    string name;
    int RollNo;
    int age;

public:
    // get method for student name to access
    // private variable studentName
    string getname(){
        return name;
    }

    // set method for student name to set
    // the value in private variable studentName
    void setname(string name){
        this->name = name;
    }

    // get method for student RollNo to access
    // private variable studentRollNo
    int getRollNo(){
        return RollNo;
    }

    // set method for student RollNo to set
    // the value in private variable studentRollNo
    void setRollNo(int RollNo){
        this->RollNo = RollNo;
    }

    // get method for student age to access
    // private variable studentAge
    int getAge(){
        return age;
    }

    // set method for student age to set
    // the value in private variable studentAge
    void setAge(int age){
        this->age = age;
    }
    
};

int main(){
    Student list;
    // setting the values of the variables
    list.setname("SAtyen");
    list.setRollNo(21910522);
    list.setAge(21);

    // printing the values of the variables
    cout << "Student name " << list.getname() << endl;
    cout << "Student RollNo " << list.getRollNo() << endl;
    cout << "Student Age " << list.getAge() << endl;

    return 0;
}

*/

/*
Data Hiding:
Data hiding is a way of restricting the access of our data members by hiding the implementation details. 
Encapsulation also provides a way for data hiding.
*/ 

#include<iostream>
using namespace std;

class Rectangle{
    private:
        int length;
        int breadth;
    public:
    int getlen(){
        return length;
    }

    int getBreadth(){
        return breadth;
    }

    void setlen(int len){
        this->length = len;
    }

    void setBreadth(int breat){
        this->breadth = breat;
    }

    int Area(){
        return length *breadth;
    }
};

int main(){
    // Create object of Rectangle class
    Rectangle Rectangle1;

    Rectangle1.setlen(14);
    Rectangle1.setBreadth(5);

    cout << "Length is " << Rectangle1.getlen() << endl;
    cout << "Breadth is " << Rectangle1.getBreadth() << endl;
    cout << "Area is " << Rectangle1.Area() << endl;
}

/* 
Here, we have made the length and breadth variables private.

This means that these variables cannot be directly accessed outside of the Rectangle class.

To access these private variables, we have used public functions setLength(), getLength(), setBreadth(), and getBreadth().
These are called getter and setter functions.

Making the variables private allowed us to restrict unauthorized access from outside the class. This is data hiding.

If we try to access the variables from the main() class, we will get an error.
*/