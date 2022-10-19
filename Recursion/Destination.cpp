#include<iostream>
using namespace std;

void destination(int src, int dest){
    cout << "Source " << src << " Desination " << dest << endl;
    //Base Case
    if (src==dest)
    {
        cout << "Reached at Home" << endl;
        return ;
    }

    //Processing
    src++;

    //Recursive Relation
    destination(src, dest);
}
int main(){
    int src=0, dest=10;
    cout << endl;
    destination(src, dest);

    return 0;
}