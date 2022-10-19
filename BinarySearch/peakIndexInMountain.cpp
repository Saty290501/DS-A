#include<iostream>
using namespace std;

int peakindexinmountain(int arr[], int size){
    int s = 0, end = size - 1;
    int mid = s + (end-s) / 2;
    while (s<end)
    {
        if(arr[mid]<arr[mid+1]){
            s = mid + 1;
        }
        else{
            end = mid;
        }

        mid = s + (end-s) / 2;

    }
    return s;
}



int main(){
    // int arr[] = {0,10,5,2};
    int arr[] = {24, 29, 35, 56, 100, 94, 83, 76, 53, 32};

    cout << "Peak index of mountain array is at index  " << peakindexinmountain(arr,10) << endl;


    return 0;

}


// Time complexity = O(logN)