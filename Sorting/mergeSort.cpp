#include<iostream>
using namespace std;

void merge(int *arr, int s, int end){
    int mid = (s + end) / 2;

    int len1 = mid - s + 1;
    int len2 = end - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    //Copy values
    int mainArrayindex = s;
    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[mainArrayindex++];
    }

    mainArrayindex = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        second[i] = arr[mainArrayindex++];
    }

    //merge two sorted array
    int index1 = 0;
    int index2 = 0;
    mainArrayindex = s;
    while (index1 < len1 && index2 < len2)
    {
        if (first[index1] < second[index2])
        {
            arr[mainArrayindex++] = first[index1++];
        }
        else{
            arr[mainArrayindex++] = second[index2++];
        }
        
    }
    while (index1 < len1)
    {
        arr[mainArrayindex++] = first[index1++];
    }
    while (index2 < len2)
    {
        arr[mainArrayindex++] = second[index2++];
    }
    
}

void mergesort(int *arr, int s, int end){
    //Base Case -- already Sorted
    if(s >= end)
    {
        return ;
    }

    int mid = (s + end) / 2;

    mergesort(arr, s, mid);        // For Left Side
 
    mergesort(arr, mid + 1, end);  //For Right Side

    merge(arr, s, end);
}

int main(){
    int arr[10] = {5, 4, 7, 95, 45, 6, 25, 86, 12, 3};
    int n = 10;
    mergesort(arr, 0, n-1);
    cout << "Sorted array is ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    
    return 0;
}

// T.C = O(nlogn)
// Space Complexcity = O(n)


// https://www.geeksforgeeks.org/merge-sort/