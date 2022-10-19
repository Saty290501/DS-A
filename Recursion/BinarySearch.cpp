#include<iostream>
using namespace std;

bool binarysearching(int *arr, int s, int end, int key){
    //Base Case
    if (s>end)
    {
        return false;
    }

    int mid = s + (end - s) / 2;
    cout << "Valuse of arr mid is " << arr[mid] << endl;
    //element Found
    if (arr[mid] == key)
    {
        return true;
    }

    if (arr[mid] < key)
    {
        return binarysearching(arr, mid + 1, end, key);
    }
    else{
        return binarysearching(arr, s, mid-1, key);
    }    
}

int main(){
    int arr[] = {2, 4, 6, 8, 10, 23, 34, 56};
    int size = 8;
    bool ans = binarysearching(arr, 0, 7, 23);
    cout << "found or not " << ans << endl;

    return 0;
}

// T.C = O(nlogn)
// S.c = O(logn)