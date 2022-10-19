#include<iostream>
using namespace std;

void printing(int n){

    if (n==0)
    {
        return;
    }

    cout << n << endl;
    printing(n - 1);
}

int main(){
    int n;
    cin >> n;
    cout << endl;
    printing(n);
    return 0;
}



