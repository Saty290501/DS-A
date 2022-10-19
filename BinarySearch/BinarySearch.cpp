// In Binary Search, array must in incresing or decreasing order.
#include<iostream>
using namespace std;

int Binarsearch(int arr[], int size, int key){
    int s = 0, end = size - 1;
    int mid = s + (end-s) / 2; // mid = (s+end)/2
    while (s<=end)
    {
        if(arr[mid]==key){
            return mid;
        }
        if(key>arr[mid]){
            s = mid + 1;
        }
        else{
            end = mid - 1;
        }
        mid = s + (end-s) / 2;

    }
    return -1;
}

int main(){
    int arr[] = {4, 6, 8, 9, 16, 35, 39}; //increasing order
    // int arr[] = {56, 43, 32, 23, 22, 15, 12}; //decreasing order
    int ans = Binarsearch(arr, 7, 35);
    cout << "Index of 35 is " << ans << endl;

    return 0;

}

// Time complexity = O(logN)