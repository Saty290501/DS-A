#include<iostream>
using namespace std;

void swap(int &x, int &y){
    int temp = x;
    x = y;
    y = temp;
}

void Bubble(int arr[], int n){
    bool swapped;
    for (int i = 0; i < n-1; i++)  // 0----n-1
    {
        swapped = false;
        for (int j = 0; j < n-i-1; j++)  // 0----n-i-1
        {
            if (arr[j]>arr[j+1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (swapped==false)
        {
            //already sorted 
            break;
        }
        
    }
}

int main(){
    // int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int arr[] = {54, 34, 2, 45, 67, 21, 43};
    Bubble(arr, 7);
    cout << "Sorted array: ";
    for (int i = 0; i < 7; i++)
    {
        cout << arr[i] << " ";
    }
    
    return 0;
}

// Sorted array:
// 11 12 22 25 34 64 90

// Worst and Average Case Time Complexity: O(n*n). Worst case occurs when array is reverse sorted.
// Best Case Time Complexity: O(n). Best case occurs when array is already sorted.
// Auxiliary Space: O(1)
// Boundary Cases: Bubble sort takes minimum time (Order of n) when elements are already sorted.
// Sorting In Place: Yes
// Stable: Yes