#include<iostream>
using namespace std;

void mergesorted(int arr1[], int m, int arr2[], int n, int arr3[]){
    int i = 0, j = 0;
    int k = 0;
    while (i<m && j<n)
    {
        if (arr1[i]<arr2[j])
        {
            arr3[k++] = arr1[i++];
        }
        else{
            arr3[k++] = arr2[j++];
        }
    }

    while (i<m)
    {
        arr3[k++] = arr1[i++];
    }
    while (j<n)
    {
        arr3[k++] = arr2[j++];
    }
}

int main(){

    int arr1[] = {1, 4, 6, 8, 9, 13};
    int arr2[] = {2, 3, 7, 10};
    int arr3[10] = {0};
    mergesorted(arr1, 6, arr2, 4, arr3);
    for (int i = 0; i < 10; i++)
    {
        cout << arr3[i] << " ";
    }
    return 0;
}