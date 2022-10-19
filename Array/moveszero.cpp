#include<iostream>
using namespace std;

void printArray(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    
}


void UsingCount(int arr[], int n)
{
    int i = 0;
    for (int j = 0; j < n; j++)
    {
        if (arr[j]!=0)
        {
            swap(arr[j], arr[i]);
            i++;
        }
    }
}
    
    

int main(){
    int arr[10] = {3, 4, 2, 0, 6, 0, 8, 0, 7, 0};
    UsingCount(arr, 10);
    printArray(arr, 10);


    return 0;
}

