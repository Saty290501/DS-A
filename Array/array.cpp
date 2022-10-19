//https://www.youtube.com/watch?v=nvsknU8Rpqc&list=PL4gu8xQu0_5JvQP-8Z48Is6CUm64YBgOg
#include<iostream>
using namespace std;    // namespace is a new concept introduced by the ANSI C++ standards committee.
                       //namespace is introduced to avoid name clashes (global name conflicts)  
                      //like re-declaration of variables, method names, class, and structure names.
                     //“std” is the namespace where ANSI C++ standard class libraries are defined.
                    //If one wants to use functions like cout, cin, endl etc, 
                   //he has to include std namespace in his program. Otherwise compiler flag an compile time error.


void printArray(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        cout << arr[i]<<" ";
    }
    cout << endl;
}

int arraySum(int arr[], int size){
    int result = 0;
    for (int i = 0; i < size; i++)
    {
        result+= arr[i];
    }
    return result;
} 

int main(){
    int arr0[5] = {};
    printArray(arr0, 5);

    int arrt1[5] = {1};
    printArray(arrt1, 5);

    int arrt2[5];  // output will be garbage value
    cout << "Garbage value ";
    printArray(arrt2, 5);

    int arr3[15] = {1, 4};
    int arr3_size = sizeof(arr3) / sizeof(int);
    cout << "Size of arr3 is " << arr3_size << endl;

    char chr[6] = {'a','g','s','u','e','f'};
    for (int i = 0; i < 6; i++)
    {
        cout << chr[i]<<" ";
    }
    cout << endl;

    int arr[] = {2, -5, 3, 8,12};
    cout << "Sum of the array is: " << arraySum(arr, 5);

    cout <<endl<< "Succesful"<<endl;

    return 0;
}