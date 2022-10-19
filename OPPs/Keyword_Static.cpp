#include<iostream>
using namespace std;

class Member{
private:
    static int A;
public:
static void Dis(){
    cout << "value of A is " << A << endl;
}
    
};
// initialization of the static data members  
int Member :: A = 10;

int main(){
    Member M;
    // access the static member function using the class object name  
    M.Dis();
    
    // access the static member function using the class name  
    Member::Dis();
    return 0;
}