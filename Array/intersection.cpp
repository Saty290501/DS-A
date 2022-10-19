#include<iostream>
#include<array>
#include<vector>
#include<unordered_map>
using namespace std;

void print_vector(vector<int> v){
   cout << "[";
   for(int i = 0; i<v.size(); i++){
      cout << v[i] << ", ";
   }
   cout << "]"<<endl;
}
class Solution {
public:
   vector<int> intersection(vector<int>& nums1, vector<int>& nums2){
      unordered_map<int, int> mp1, mp2;
      vector<int> res;
      for (auto x : nums1)
         mp1[x]++;
      for (auto x : nums2)
         mp2[x]++;
      for (auto x : mp1) {
         int cnt = 0;
         cnt = min(x.second, mp2[x.first]);
         if (cnt > 0)
            res.push_back(x.first);
         }
         return res;
      }
};
int main(){
   Solution ob;
   vector<int> v = {1,5,3,6,9}, v1 = {2,8,9,6,7};
   print_vector(ob.intersection(v, v1));
}



// #include<iostream>
// using namespace std;

// void intersection(int arr[], int arr1[]){
//     int m = 5, n = 5;  // lenght of the array
//     int ans[100], k=0;
//     for (int i = 0; i < m; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             if(arr[i]==arr1[j]){
//                 ans[k] = arr[i];
//                 k++;
//             }
//         }
//     }
//     for (int i = 0; i < k; i++)
//     {
//         cout<<ans[i]<<" ";
//     }
// }
// int main(){
//     int arr[] = {1, 5, 3, 6, 9}, arr1[] = {2, 8, 9, 6, 7};
//     intersection(arr, arr1);
//     return 0;

// }

// #include<iostream>
// #include<vector>
// using namespace std;

// class Solution {
// public:
//    vector<int> intersection(vector<int>& arr1, vector<int>& arr2){
//         int i = 0, j = 0;
//         int m = 5, n = 5;
//         vector<int> ans;

//         while (i<m && j<n){

//             if(arr1[i]==arr2[j]){
//                 ans.push_back(arr1[i]);
//                 i++;
//                 j++;
//             }
//             else if(arr1[i]<arr2[j]){
//                 i++;
//             }
//             else{
//                 j++;
//             }
//         }
//         return ans;

//     }
// };
// void print_vector(vector<int> v){
//    for(int i = 0; i<v.size(); i++){
//       cout << v[i] << ", ";
//    }
// }
// int main(){
//    Solution ob;
//    vector<int> v = {1, 5, 3, 6, 9}, v1 = {2, 8, 9, 6, 7};
//    print_vector(ob.intersection(v, v1));
//    return 0;
// }