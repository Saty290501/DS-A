// Given an array of length ‘N’, where each element denotes the position of a stall. 
// Now you have ‘N’ stalls and an integer ‘K’ which denotes the number of cows that are aggressive. 
// To prevent the cows from hurting each other, you need to assign the cows to the stalls, 
// such that the minimum distance between any two of them is as large as possible. 
// Return the largest minimum distance.

// 5 2
// 4 2 1 3 6 
// In this test case, the largest minimum distance will be 5 when 2 cows are placed at positions {1, 6}.




#include<iostream>
#include <climits>
#include<algorithm>
using namespace std;

bool ifPossible(int arr[], int size, int k, int mid){
    int cowCnt = 1;
    int lastpos = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i]-lastpos>=mid)
        {
            cowCnt++;
            if (cowCnt==k)
            {
                return true;
            }
            lastpos = arr[i];
        }
        
    }
    return false;
}


int AggresiveCow(int arr[],int size,int k){  // k = no. of cows
    int s = 0;
    sort(arr, arr + size);
    int maxi = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        maxi = max(maxi, arr[i]);
    }
    int end = maxi;
    int ans = -1;
    int mid = s + (end-s) / 2;
    while (s<=end)
    {
        if (ifPossible(arr,size,k,mid))
        {
            ans = mid;
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
    // int arr[] = {4, 2, 3, 1, 6}; //cow=2
    // int arr[] = {1, 5, 8, 11, 13, 16}; // cow=4   
    int arr[] = {1, 2, 4, 8, 9}; // cow=3

    cout <<"The largest minimum distance will be "<< AggresiveCow(arr, 5, 3);
}