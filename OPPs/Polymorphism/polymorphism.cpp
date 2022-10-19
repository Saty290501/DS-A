#include<iostream>
using namespace std;

class name{
    public:
    void sayhello(){
        cout << "Hi satyen" << endl;
    }

    void sayhello(string name){
        cout << "Hello" << name << endl;
    }
};

int main(){
    name n;
    n.sayhello();
    return 0;
}