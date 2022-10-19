#include<iostream>
using namespace std;
int power(int n){
    //Base Case 
    if (n==0)     // Without a base case, we will get a segmentation fault 
    {
        return 1;
    }

    //Recursive Relation
    return 2 * power(n - 1);
}

int main(){
    int n;
    cin >> n;
    cout << "power of 2 is " << power(n) << endl;

    return 0;
}
