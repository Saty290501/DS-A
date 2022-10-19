#include<iostream>
#include<string>
#include<vector>
using namespace std;

void solve(vector<int> arr, int index, vector<vector<int>> &ans){
    if (index>=arr.size())
    {
        ans.push_back(arr);
        return;
    }

    for (int i = index; i < arr.size(); i++)
    {
        swap(arr[index], arr[i]);
        solve(arr, index+1, ans); 
        swap(arr[index], arr[i]); // Backtrack

    }
}

int main(){
    vector<int> arr = {1, 2, 3};
    vector<vector<int>> ans;
    int index = 0;
    solve(arr, index, ans);
    cout << "The permutation of given Array is ";
    for (int i = 0; i < ans.size(); i++)
    {
        cout << "{" ;
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << ",";
        }
        cout <<"} ";
    }
    return 0;
}

