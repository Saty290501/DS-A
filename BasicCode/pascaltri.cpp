#include<iostream>
using namespace std;

int fact(int n){
    int ans = 1;
    for (int i = 1; i <=n; i++)
    {
        ans *= i;

    }
    return ans;
}

int main(){
    int n, ans;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <=i ; j++)
        {
            cout << fact(i) / (fact(j) * fact(i - j)) << " ";
        }
        cout << endl;
    }
    
}

// O(n^2) time and O(1) extra space 