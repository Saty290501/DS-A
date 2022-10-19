#include<iostream>
using namespace std;
int power(int a, int b){
    //Base Case 
    if (b==0)     
    {
        return 1;
    }
    if (b==1)
    {
        return a;
    }

    int ans = power(a, b / 2);

    //Recursive Relation
    if (b%2 == 0)
    {
        return ans * ans;  // if b is even
    }
    else{
        return a * ans * ans; // if a is odd
    }
    
}

int main(){
    int a, b;
    cin >> a >> b;
    cout << "power of a to the b is " << power(a, b) << endl;

    return 0;
}
