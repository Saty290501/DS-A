#include<iostream>
#include <climits>
using namespace std;

int getmax(int arr[], int size){
    int maxi = INT_MIN;
    for(int i = 0; i < size;i++){

        maxi = max(maxi, arr[i]);

        // if(arr[i]>max){
        //     max = arr[i];
        // }
    }
    return maxi;
}

int getmin(int arr[], int size){
    int mini = INT_MAX;
    for(int i = 0; i < size;i++){
        mini = min(mini, arr[i]);

        // if(arr[i]<min){
        //     min = arr[i];
        // }
    }
    return mini;
}

int main(){
    // int size;
    // cout << "Enter the size: ";
    // cin >> size;
    int arr[] = {4,6,2,8,-4,-6};

    // for (int i = 0; i < size; i++)
    // {
    //     cin >> arr[i];
    // }
    
    cout<<"maximum value: "<<getmax(arr, 6)<<endl;
    cout << "minimum value: " << getmin(arr, 6) << endl;

    return 0;
}