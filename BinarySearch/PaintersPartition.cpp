#include<iostream>
using namespace std;

bool ispossible(int arr[],int n, int k, int mid){
    int studentcnt = 1;
    int pagesum = 0;
    for (int i = 0; i < n; i++)
    {
        if (pagesum+arr[i]<=mid)
        {
            pagesum += arr[i];
        }
        else{
            studentcnt++;
            if (studentcnt>k || arr[i]>mid)
            {
                return false;
            }
            pagesum = arr[i];
        }
       
    }
    return true;
    
}

int painterspartition(int arr[], int n, int k){
    int s = 0, sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    int end = sum;
    int mid = end + (s - end) / 2;
    int ans = -1;
    while (s<=end)
    {
        if (ispossible(arr,n,k,mid))
        {
            ans = mid;
            end=mid-1;
        }
        else{
            s = mid + 1;
        }
        mid = end + (s - end) / 2;
        
    }
    return ans;
}


int main(){
    int arr[100],n;
    cout << "No. of test cases" <<endl;
    cin >> n;
    int num, k; // k= no. of painters
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the no. of element" <<endl;
        cin >> num;
        cout << "Enter the no. of painters" << endl;
        cin >> k;
        for (int i = 0; i < num; i++)
        {
            cin >> arr[i];
        }
        cout << "print the minimum time required to get the job done:- " << painterspartition(arr, num, k) << endl;
    }
    

    return 0;

}

