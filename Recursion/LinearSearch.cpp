#include<iostream>
using namespace std;
bool searching(int arr[], int size, int key){
    if (size == 0)
    {
        return 0;
    }

    if (arr[0] == key)
    {
        return true;
    }
    else{
        bool remainingpart = searching(arr + 1, size - 1, key);
        return remainingpart;
    }
    
    
}
int main(){
    int arr[] = {2, 4, 1, 8, 9};
    int size = 5;
    int key;
    cout << "Enter the element to find ";
    cin >> key;
    bool ans = searching(arr, size, key);
    if (ans)
    {
        cout << "Found" << endl;
    }
    else{
        cout << "Not Found" << endl;
    }

    
}
