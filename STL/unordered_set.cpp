#include<iostream>
#include<unordered_set>
using namespace std;

int main(){

    unordered_set<int> s;
    s.insert(5);
    s.insert(1);
    s.insert(6);
    s.insert(3);
    s.insert(7);
    s.insert(2);
 
    cout << "Elements of unordered_set: \n";
    for (auto it : s)
        cout << it << " ";
 
    return 0;

    // int a1[] = {1, 2, 3, 4, 5, 6, 5, 2, 8, 5};
    // int a2[] = {1, 2, 4};
    // int n = 10, m = 3;

    // unordered_set<int> hash(a1, a1 + n);
    // unordered_set<int> :: iterator itr;
  
    // // iterator itr loops from begin() till end()
    // for (itr = hash.begin(); itr != hash.end(); itr++)
    //     cout << *itr << " ";
    // cout << endl;
    // for (int i = 0; i < m; i++)
    // {
    //     if (hash.find(a2[i])==hash.end())
    //     {
    //         cout << "NO";
    //     }
        
    // }
    // cout << "YES";

    // return 0;
}