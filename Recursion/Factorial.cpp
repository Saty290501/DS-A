#include<iostream>
using namespace std;
int fact(int n){
    //Base Case 
    if (n==0)     // Without a base case, we will get a segmentation fault 
    {
        return 1;
    }

    //Recursive Relation
    return n * fact(n - 1);
}

int main(){
    int n;
    cin >> n;
    fact(n);
    cout << "Factorail of given num is " << fact(n) << endl;

    return 0;
}

// T.C = O(n)
// S.c = O(n)