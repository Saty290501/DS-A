#include<iostream>
#include<cmath>
using namespace std;

// int main(){
//     int n;
//     cout << "Enter the number: ";
//     cin >> n;
//     bool isprime = 1;
//     for (int i = 2; i < n; i++)
//     {
//         if(n%i==0){
//             isprime = 0;
//             break;
//         }
//     }
//     if(isprime==0){
//         cout << "Not a prime"<<endl;
//     }
//     else{
//         cout << "is a prime" << endl;
//     }
    
// }
bool isprime(int num){
    if (num==0 || num==1)
    {
        return false;
    }
    
    for (int i = 2; i <= sqrt(num); i++)
    {
        if(num%i==0){
            return false;
        }
    
    }
    return true;
}
int main(){
    int a, b;
    cin >> a>>b;
    for (int i = a; i <= b; i++)
    {
        if(isprime(i))
            cout << i<<endl;
    }
    
}

