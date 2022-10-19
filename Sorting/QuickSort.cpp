#include<iostream>
using namespace std;

int partition(int arr[],int s,int end){
    int pivot = arr[s];
    int cnt = 0;
    for (int i = s+1; i <= end; i++)
    {
        if (arr[i]<=pivot)
        {
            cnt++;
        }
    }
    int pivotindex = s + cnt;
    swap(arr[pivotindex], arr[s]);

    int i = s;
    int j = end;
    
    while (i<j)
    {
        while (pivot>=arr[i])
        {
            i++;
        }
        while (pivot<arr[j])
        {
            j--;
        }
        if (i<j)
        {
            swap(arr[i++], arr[j--]);
        } 
    }
    return pivotindex;
}

void quicksort(int *arr, int s, int end){
    //Base Case -- already Sorted
    if(s >= end)
    {
        return ;
    }

    int p = partition(arr, s, end);

    quicksort(arr, s, p-1);       // Left Part  Sort
    
    quicksort(arr, p + 1, end);  // Right Part Sort
}

int main(){
    int arr[10] = {5, 4, 7, 95, 45, 6, 25, 86, 12, 3};
    int n = 10;
    quicksort(arr, 0, n-1);
    cout << "Sorted array is ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    
    return 0;
}


// Worst Case: The solution of above recurrence is O(n2).
// Best Case: The solution of above recurrence is  O(nLogn).
//Average Case: The solution of above recurrence is also O(nLogn).  

