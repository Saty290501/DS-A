// #include<iostream>
// using namespace std;

// void reverse(int arr[], int size){
//     int start = 0;
//     int end = size-1;
//     while (start<=end)
//     {
//         swap(arr[start], arr[end]);
//         start++;
//         end--;
//     }
// }

// // void reverse(int arr[], int size){
// //     for (int i = size-1; i >= 0; i--)
// //     {
// //         cout << arr[i]<<" ";
// //     }
// // }

// void swapalternate(int arr[],int size){
    
//     for (int i = 0; i < size; i+=2)
//     {
//         if(i+1<size)
//         {
//             swap(arr[i], arr[i+1]);
//         }
//     } 
// }

// void print(int arr[], int size){
//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i]<<" ";
//     }

// }

// int main(){
//     int arr[5] = {-3, 4, 1, 9, 8};
//     int even[] = {2, 5, 7, 4, 1, 3, 8, 6};
//      // int odd[] = {4,2,7,9,3,1,5};

//     int size1 = sizeof(arr) / sizeof(arr[0]);
//     // int size2 = sizeof(odd) / sizeof(odd[0]);
   
//     reverse(arr, size1);
//     cout << endl;
    
//     cout << "Reverse array is: ";
//     print(arr, size1);

//     cout << endl;
//     swapalternate(even, size1);

//     cout << "Alternate swapping array is: ";
//     print(even, size1);

//     return 0;
// }

// using STL

#include<iostream>
#include<vector>
using namespace std;
vector<int> reverse(vector<int> v){
    int start = 0;
    int end = v.size()-1;
    while (start<=end)
    {
        swap(v[start], v[end]);
        start++;
        end--;
    }
    return v;
}
void print(vector<int> v){
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
int main(){
    vector<int> v;
    v.push_back(4);
    v.push_back(8);
    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    print(v);
    vector<int> ans = reverse(v);
    print(ans);
    return 0;
}
