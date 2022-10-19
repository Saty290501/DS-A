#include<iostream>
#include<set>
using namespace std;

int main(){
    set<int> s;
    s.insert(1);
    s.insert(6);
    s.insert(5);
    s.insert(2);
    s.insert(8);
    s.insert(23);
    s.insert(5);

    s.erase(23);

    cout << "The element of set is ";
    for (auto i:s)
    {
        cout << i << " ";
    }

    return 0;
}