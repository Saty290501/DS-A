#include<iostream>
using namespace std;

 long long int SqaureRoot(int num){
    int start = 0, end=num;
     long long int mid = start + (end-start) / 2;
     long long int ans = -1;
    while (start<=end)
    {
        long long int square = mid * mid;      // mid is integer and when multiply 
                                              //it becomes huge num so we can use long
                                             //we can take i/o 1000000 for checking

        if (square==num)
        {
            return mid;
        }
        else if (square<num)
        {
            ans = mid;
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
        mid = start + (end-start) / 2;
    }
    return ans;
}

double morePrecision(int num, int precision, int tempSol){
    double factor = 1;
    double ans = tempSol;
    for (int i = 0; i < precision; i++)
    {
        factor = factor / 10;
        for (double j = ans; j*j < num; j=j+factor)
        {
            ans = j;
        }
        
    }
    return ans;
}

int main(){
    int num;
    cout << "Enter the number" << endl;
    cin >> num;
    int tempSol = SqaureRoot(num);
    cout <<"Square root of given num is "<< morePrecision(num,3,tempSol) << endl;        

    return 0;

}

