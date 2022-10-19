#include<iostream>
using namespace std;

void reverse(string& s, int i, int j){
    //Base Case
    if (i>j)
    {
        return ;
    }

    swap(s[i], s[j]);
    i++;
    j--;

    reverse(s, i, j);
}
int main(){
    string s = "Satyen";
    reverse(s, 0, s.length()-1);
    cout << s << endl;
    return 0;
}