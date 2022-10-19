#include<iostream>
#include<string>
#include<vector>
using namespace std;

void solve(string str, string output, int index, vector<string> &ans){
    if (index>=str.length())
    {
        if (output.length()>0)
        {
            ans.push_back(output);
        }
        return;
    }

    solve(str, output, index+1, ans); //Exclude

    //include
    output.push_back(str[index]);
    solve(str, output, index+1, ans);
}

int main(){
    string str = "abc";
    vector<string> ans;
    string output = "";
    int index = 0;
    solve(str, output, index, ans);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i]<<" ";
    }
    return 0;
}

