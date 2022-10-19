#include<iostream>
using namespace std;

int Pivot(int arr[], int size){
    int s = 0, end = size - 1;
    int mid = s + (end-s) / 2;
    while (s<end)
    {
        if(arr[mid]>=arr[s]){
            s = mid + 1;
        }
        else{
            end = mid;
        }
        mid = s + (end-s) / 2;

    }
    return s; // we can also return end
}

int BinarySearch(int arr[],int start,int e, int key){
    int s = start, end = e - 1;
    int mid = s + (end - s) / 2;
    while (s<=end)
    {
        if(arr[mid]==key){
            return mid;
        }
        else if(key>arr[mid]){
            s = mid + 1;
        }
        else{
            end = mid - 1;
        }
        mid = s + (end - s) / 2;
    }
    return -1;
}

int FindPosition(int arr[],int n, int key){
    int pivot = Pivot(arr, n);
    if(key>=arr[pivot] && key<=arr[n-1]){
        return BinarySearch(arr, pivot, n - 1, key);
    }
    else{
        return BinarySearch(arr, 0, pivot - 1, key);
    }
}



int main(){
    int arr[]={16, 18, 22, 25, 29, 40, 42, 5, 7, 10, 14};  
    int ans = Pivot(arr, 11);
    cout << arr[ans]<<" is the pivot element"<<endl;

    cout << "22 is present at index "<<FindPosition(arr,11,22)<<endl;

    return 0;

}


// Time complexity = O(logN) + O(logN) = O(logN)