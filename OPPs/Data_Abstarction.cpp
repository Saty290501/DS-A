#include<iostream>
using namespace std;

class Rectangle{
    private:
        int len;
        int breadth;

    public:
    void setdim(int len, int breadth){
        this->len = len;
        this->breadth = breadth;
    }

    int area(){
        return len * breadth;
    }
    
    
};

int main(){
    Rectangle R1;
    R1.setdim(10, 5);
    cout << R1.area() << endl;

    return 0;
}