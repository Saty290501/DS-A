#include<iostream>
using namespace std;

bool LinearSearch(int arr[],int size, int key){
    for (int i = 0; i < size; i++)
    {
        if(arr[i]==key){
            return 1;
        }
    }
    return 0;
}


int main(){

    int arr[10]={5,2,45,8,-4,3,-5,1,9,-12};
    cout << "Enter the element to be search: ";
    int key;
    cin >> key;
    bool found = LinearSearch(arr, 10, key);
    if(found){
        cout << "key is found";
    }
    else{
        cout << "key is not found";
    }

    return 0;
}