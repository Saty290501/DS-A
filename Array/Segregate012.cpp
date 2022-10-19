#include<iostream>
using namespace std;

void printArray(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    
}


// void sort012(int arr[], int n){
//     int lo = 0, hi = n-1, mid=0;
//     while (mid <= hi) {
//         switch (arr[mid]) {
 
//         // If the element is 0
//         case 0:
//             swap(arr[lo++], arr[mid++]);
//             break;
 
//         // If the element is 1 .
//         case 1:
//             mid++;
//             break;
 
//         // If the element is 2
//         case 2:
//             swap(arr[mid], arr[hi--]);
//             break;
//         }
//     }
// }

// Time Complexity: O(n). 
// Only one traversal of the array is needed.
// Space Complexity: O(1). 
// No extra space is required.

void UsingCount(int arr[], int n)
{
    int i, cnt0 = 0, cnt1 = 0, cnt2 = 0;
 
    // Count the number of 0s, 1s and 2s in the array
    for (i = 0; i < n; i++) {
        switch (arr[i]) {
        case 0:
            cnt0++;
            break;
        case 1:
            cnt1++;
            break;
        case 2:
            cnt2++;
            break;
        }
    }
 
    // Update the array
    i = 0;
 
    // Store all the 0s in the beginning
    while (cnt0 > 0) {
        arr[i++] = 0;
        cnt0--;
    }
 
    // Then all the 1s
    while (cnt1 > 0) {
        arr[i++] = 1;
        cnt1--;
    }
 
    // Finally all the 2s
    while (cnt2 > 0) {
        arr[i++] = 2;
        cnt2--;
    }

}
    
    

int main(){
    int arr[10]={2,0,1,0,2,0,2,1,0,1,};
    // sort012(arr, 10);
    UsingCount(arr, 10);
    printArray(arr, 10);

    return 0;
}

