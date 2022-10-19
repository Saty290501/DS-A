#include<iostream>
using namespace std;
void Insertion(int arr[], int n){
    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        for (; j>=0; j--)
        {
            if (arr[j]>temp)
            {
                arr[j + 1] = arr[j];
            }
            else{  
                break;
            }
        }
        arr[j + 1] = temp;

    }
}
int main(){
    int arr[] = {54, 34, 2, 45, 67, 21, 43};
    Insertion(arr, 7);
    cout << "Sorted array is ";
    for (int i = 0; i < 7; i++)
    {
        cout << arr[i] << " ";
    }
    
    return 0;
}

// Time Complexity: O(n^2) 
// Worst and Average Case Time Complexity: O(n*n). Worst case occurs when array is reverse sorted.
// Auxiliary Space: O(1)
// Best Case Time Complexity: O(n). Best case occurs when array is already sorted.
// Boundary Cases: Insertion sort takes maximum time to sort if elements are sorted in reverse order. 
// And it takes minimum time (Order of n) when elements are already sorted.
// Algorithmic Paradigm: Incremental Approach
// Sorting In Place: Yes
// Stable: Yes
// Online: Yes
// Uses: Insertion sort is used when number of elements is small. 
// It can also be useful when input array is almost sorted, 
// only few elements are misplaced in complete big array.