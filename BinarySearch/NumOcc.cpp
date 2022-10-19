#include<iostream>
using namespace std;

int firstOcc(int arr[], int size, int key){
    int s = 0, end = size - 1;
    int mid = s + (end-s) / 2;
    int ans = -1;
    while (s<=end)
    {
        if(arr[mid]==key){
            ans = mid;
            end = mid - 1;
        }
        else if(key>arr[mid]){
            s = mid + 1;
        }
        else{
            end = mid - 1;
        }
        mid = s + (end-s) / 2;

    }
    return ans;
}

int lastOcc(int arr[], int size, int key){
    int s = 0, end = size - 1;
    int mid = s + (end-s) / 2;
    int ans = -1;
    while (s<=end)
    {
        if(arr[mid]==key){
            ans = mid;
            s = mid + 1;
        }
        else if(key>arr[mid]){
            s = mid + 1;
        }
        else{
            end = mid - 1;
        }
        mid = s + (end-s) / 2;

    }
    return ans;
}

int main(){
    int arr[] = {1,2,2,3,3,4,4,4,4,5};
    int first = firstOcc(arr, 10, 4);
    int last = lastOcc(arr, 10, 4);
    int n = (last - first)+1;

    cout << "first occurrence of 4  is at index  " << first << endl;
    cout << "last occurrence of 4  is at index  " << last << endl;
    cout << "No. of occurrence of 4  is " << n << endl;

    return 0;

}
