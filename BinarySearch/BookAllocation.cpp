#include<iostream>
using namespace std;
bool isPossible(int arr[],int size, int m, int mid){
    int studentcount = 1;
    int pageSum = 0;
    for (int i = 0; i < size; i++)
    {
        if (pageSum+arr[i]<=mid)
        {
            pageSum += arr[i];
        }
        else{
            studentcount++;
            if (studentcount>m || arr[i]>mid)
            {
                return false;
            }
            pageSum = arr[i];
        }
        
    }
    return true;
}
int Bookallocation(int arr[],int size, int m){   // m = no. of student
    int start = 0, sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }
    int end = sum;
    int mid = start + (end-start) / 2;
    int ans = -1;
    while (start<=end)
    {
        if (isPossible(arr,size,m,mid))
        {
            ans = mid;
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
        
        mid = start + (end-start) / 2;
    }
    return ans;
}




int main(){
    int arr[]={10,20,30,40};
    int tempSol = Bookallocation(arr,4,2);
    cout <<tempSol << endl;        

    return 0;

}

