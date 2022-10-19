#include<iostream>
#include<climits>
using namespace std;

int trading(int price[],int n){
    int curr_p = INT_MAX;
    int profit = 0;
    for (int i = 0; i < n; i++)
    {
        if (price[i]<curr_p)
        {
            curr_p = price[i];
        }
        else if(price[i]-curr_p>profit){
            profit = price[i] - curr_p;
        }
    }
    return profit;
}

int main(){
    int price[] = {7, 1, 3, 2, 6, 19, 65, 34, 16};
    cout<<"max profit is "<<trading(price, 9);

    return 0;
}