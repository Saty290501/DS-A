// Mirko‟s machine works as follows: 
// Mirko sets a height parameter H (in metres), and the machine raises a giant sawblade to that height 
// and cuts off all tree parts higher than H (of course, trees not higher than H meters remain intact). 
// Mirko then takes the parts that were cut off. For example, 
// if the tree row contains trees with heights of 20, 15, 10, and 17 metres, and
// Mirko raises his sawblade to 15 metres,
// the remaining tree heights after cutting will be 15, 15, 10, and 15 metres, respectively, 
// while Mirko will take 5 metres off the first tree and 
// 2 metres off the fourth tree (7 metres of wood in total).

// Input:
// 4 7
// 20 15 10 17

// Output:
// 15

// Input:
// 5 20
// 4 42 40 26 46

// Output:
// 36

#include<iostream>
#include <climits>
#include<algorithm>
using namespace std;

bool ifPossible(int arr[], int size, int k, int mid){
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i]>mid)
        {
            sum = sum + arr[i] - mid;
            if (sum>=k)
            {
                return true;
            }
            
        }
    }
    return false;
}


int Eko(int arr[],int size,int k){  
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
    int arr[] = {20,15,10,17};

    cout <<"The o/p will be "<< Eko(arr, 4, 7);
}

// Time Complexcity:- O(logN)