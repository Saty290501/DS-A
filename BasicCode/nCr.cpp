#include<iostream>
using namespace std;

int fact(int n){
    int fact = 1;
    for (int i = 1; i <=n; i++)
    {
        fact *= i;

    }
    return fact;
}
int main(){
    int n, r, ans;
    cin >> n >> r;
    ans = fact(n)/(fact(r)*fact(n-r));
    cout << ans;
}