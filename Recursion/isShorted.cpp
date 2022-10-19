#include<iostream>
using namespace std;

bool isshorted(int arr[],int size){
    if (size==0 || size==1)
    {
        return true;
    }

    if (arr[0]>arr[1])
    {
        return false;
    }
    else{
        bool remainingpart = isshorted(arr + 1, size - 1);
        return remainingpart;
    }
    
    
}
int main(){
    int arr[] = {2, 4, 1, 8, 9};
    int size = 5;
    bool ans=isshorted(arr,size);
    if (ans)
    {
        cout << "Array is shorted" << endl;
    }
    else{
        cout << "Array isn't shorted" << endl;
    }
    
}