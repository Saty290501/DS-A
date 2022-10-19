#include<iostream>
using namespace std;

class Car
{
private:
    int Satyen;

public:
    int SUV;
    char XUV;

    int getSUV(){
        return SUV;
    }

    void setSUV(int s){
        SUV = s;
    }

    int getXUV(){
        return XUV;
    }

    void setXUV(int X){
        XUV = X;
    }
};



int main(){
    Car wheeler1;

    wheeler1.SUV = 500;
    // wheeler1.XUV = 'M';
    wheeler1.setSUV(500);
    wheeler1.setXUV('m');

    cout << "Lenth " << wheeler1.getSUV() << endl;
    cout << "Lenth " << wheeler1.getXUV() << endl;

    Car *p = new Car;

    p->setSUV(600);
    cout << "Lenth " << p->SUV << endl;


    return 0;
}