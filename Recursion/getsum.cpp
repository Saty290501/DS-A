#include<iostream>
using namespace std;

int getsum(int arr[],int size){
    if (size == 0)
    {
        return 0;
    }

    if (size == 0)
    {
        return arr[0];
    }
    int remainingpart = getsum(arr + 1, size - 1);
    int sum = arr[0] + remainingpart;
    return sum;
}
int main(){
    int arr[] = {2, 4, 1, 8, 9};
    int size = 5;
    cout << "sum is " << getsum(arr, size) << endl;

    return 0;
}