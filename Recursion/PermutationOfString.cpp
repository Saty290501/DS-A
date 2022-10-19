#include<iostream>
#include<string>
#include<vector>
using namespace std;

void solve(string str, int index, vector<string> &ans){
    if (index>=str.length())
    {
        ans.push_back(str);
        return;
    }

    for (int i = index; i < str.length(); i++)
    {
        swap(str[index], str[i]);
        solve(str, index+1, ans); 
        swap(str[index], str[i]); // Backtrack

    }
}

int main(){
    string str = "ABC";
    vector<string> ans;
    int index = 0;
    solve(str, index, ans);
    cout << "The permutation of given string is ";
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i]<<" ";  //The permutation of given string is ABC ACB BAC BCA CBA CAB 
    }
    return 0;
}

