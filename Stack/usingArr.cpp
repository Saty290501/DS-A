#include<iostream>
using namespace std;
int top = -1;

bool isempty(){
    if(top==-1){
        return true;
    }
    else{
        return false;
    }
}

void push(int arr[],int ele, int size){
    if (top==size)
    {
        cout << "FULL" << endl;
    }
    else{
        top++;
        arr[top] = ele;
        
    }
}

void pop(int arr[],int n){
    if (isempty())
    {
        cout << "Empty";
    }
    else{
        top = top - 1;
    }
}

void display(int arr[],int top){
    if (isempty())
    {
        cout << "empty" << endl;
    }
    else{
        for (int i = top; i>=0; i--)
        {
            cout << arr[i] << " ";
        }
        
    }
}


int main()
{
    // int arr[10] = {1, 2, 3, 4, 5};
    // int front = 0, rear = 4;
    int arr[10];
    push(arr, 1, 10);
    push(arr, 2, 10);
    push(arr, 3, 10);
    push(arr, 4, 10);
    push(arr, 5, 10);

    display(arr, top);
    
    cout << endl;
    pop(arr, 10);
    display(arr, top);


    return 0;
}