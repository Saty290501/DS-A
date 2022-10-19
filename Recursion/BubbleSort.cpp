#include<iostream>
using namespace std;

void BubbleSort(int arr[], int n){
    //Base Case -- already Sorted
    if (n == 0 || n==1)
    {
        return;
    }

    //Push largest element at the end
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>arr[i+1])
        {
            swap(arr[i], arr[i + 1]);
        }
        
    }

    BubbleSort(arr, n - 1);
}
int main(){
    int arr[10] = {5, 4, 7, 25, 45, 26, 25, 86, 12, 3};
    BubbleSort(arr, 10);
    cout << "Sorted array is ";
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
    
    return 0;
}