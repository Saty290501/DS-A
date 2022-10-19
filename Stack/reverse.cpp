#include<iostream>
#include<stack>
using namespace std;

int main(){
    string s = "Satyen";
    stack<char> ch;
    for (int i = 0; i < s.size(); i++)
    {
        ch.push(s[i]);
    }

    cout << "ans is ";
    while (!ch.empty())
    {
        cout << ch.top();
        ch.pop();
    }

    return 0;
}

// T.C = O(n)
// S.C = o(n)