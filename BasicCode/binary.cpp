#include<iostream>
using namespace std;

int BinaryToDecimal(int n){
    int ans = 0;
    int x = 1;
    while (n>0)
    {
        int y = n % 10;
        ans += x * y;
        x *= 2;
        n /= 10;
    }
    return ans;
}

int OcatalToDecimal(int n){
    int ans = 0;
    int x = 1;
    while (n>0)
    {
        int y = n % 10;
        ans += x * y;
        x *= 8;
        n = n/10;
    }
    return ans;
}

int HexaToDecimal(string n){
    int ans = 0;
    int x = 1;
    int s = n.size();
    for (int i = s-1; i>=0; i--)
    {
        if(n[i]>='0' && n[i]<='9'){
            ans += x * (n[i]-'0');
        }
        else if(n[i]>='A' && n[i]<='F'){
            ans += x * (n[i]-'A'+10);
        }
        x *= 16;
    }
    return ans;
}

void DecimalTobinary(int n){
    int arr[32];
    int i = 0;
    while (n>0)
    {
        arr[i] = n % 2;
        n = n / 2;
        i++;
    }
    for (int j = i-1; j>=0; j--)
    {
        cout<<arr[j];
    }
    
    
}

void DecimalToOctal(int n){
    int arr[32];
    int i = 0;
    while (n>0)
    {
        arr[i] = n % 8;
        n = n / 8;
        i++;
    }
    for (int j = i-1; j>=0; j--)
    {
        cout<<arr[j];
    }
}

void DecimalToHexa(int n){
    char arr[32];
    int i = 0;
    while (n>0)
    {
        int temp;
        temp = n % 16;
        if(temp<10){
            arr[i] = temp+48;
            i++;
        }
        else{
            arr[i] = temp + 55;
            i++;
        }
        n = n / 16;
    }
    for (int j = i-1; j>=0; j--)
    {
        cout<<arr[j];
    }
  
}
int main(){
    // string n;
    int n;
    cin >> n;
    // cout << BinaryToDecimal(n);
    // cout << OcatalToDecimal(n);
    // cout << HexaToDecimal(n);
    // DecimalTobinary(n);
    // DecimalToOctal(n);
    DecimalToHexa(n);

    return 0;
}