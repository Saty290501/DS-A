#include<iostream>
using namespace std;

void printArray(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    
}


// void sort01(int arr[], int n){
//     int l = 0, r = n-1;
//     while (l<r)
//     {
//         if(arr[l]==1){
//             swap(arr[l],arr[r]);
//             r--;
//         }
//         else{
//             l++;
//         }
//     }
    
// }

void usingcount(int arr[], int n){
    int count=0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]==0){
            count++;
        }
    }

    for (int i = 0; i < count; i++)
    {
        arr[i] = 0;
    }
    for (int i = count; i < n; i++)
    {
        arr[i] = 1;
    }
    
}

int main(){
    int arr[10]={1,0,1,0,1,0,1,1,0,1,};
    // sort01(arr, 10);
    usingcount(arr, 10);
    printArray(arr, 10);

    return 0;
}