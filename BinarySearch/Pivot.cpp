#include<iostream>
using namespace std;

int pivot(int arr[], int size){
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



int main(){
    // int arr[] = {4,5,6,7,8,1,2,3}; // Sorted Rotated Array : 4 5 6 7 8 1 2 3
    // int arr[]={16, 18, 22, 25, 2, 3, 5, 6, 7, 10, 14};   //for Example
    int arr[]={16, 18, 22, 25, 29, 40, 42, 5, 7, 10, 14};  //for Example
    int ans = pivot(arr, 11);
    cout << arr[ans]<<" is the pivot element"<<endl;

    return 0;

}
