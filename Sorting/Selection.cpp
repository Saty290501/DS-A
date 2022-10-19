#include<iostream>
using namespace std;

void SelectionSort(int arr[], int n){
    for (int i = 0; i < n-1; i++)
    {
        int mini = i;
        for (int j = i+1; j < n; j++)
        {
            if (arr[j]<arr[mini])
            {
                mini = j;
            }
        }
        swap(arr[mini], arr[i]);
    }
}

int main(){
    // int arr[] = {2, 6, 8, 4, 10};
    int arr[] = {54, 34, 2, 45, 67, 21, 43};
    SelectionSort(arr, 7);
    cout << "Sorted array is ";
    for (int i = 0; i < 7; i++)
    {
        cout << arr[i] << " ";
    }
    
    return 0;
}

// space complexity = O(1)
// Time Complexity: O(n*n) as there are two nested loops.

// use: we can use only when we have small size array

