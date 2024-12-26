#include<bits/stdc++.h>
using namespace std;

int maximumProfit(vector<int> &arr) {
    
    // variables
    int profit = 0 , Stock_bought_at = 0;
    bool hasStock = false;

    int size = arr.size();

    for(int i=0; i <= size - 2; i++){

        // buying condition
        if(!hasStock && arr[i] < arr[i+1]){
            Stock_bought_at = arr[i];
            hasStock = true;
        }

        // selling condition
        if(hasStock && arr[i+1] < arr[i]){
            profit += (arr[i] - Stock_bought_at);
            hasStock = false;
        }
    }

    // if we had a stock till now sell it at size - 1 amount

    if(hasStock){
        profit += (arr[size-1] - Stock_bought_at);
    }


    return profit;
        
}

int main(){
    vector<int>arr = {72,96,57,50,92,3,44, 5, 14, 33, 77, 69, 50, 13, 16, 97, 84, 97, 18, 15, 33, 95, 91, 85, 0, 47};
    cout<<maximumProfit(arr);
    return 0;
}