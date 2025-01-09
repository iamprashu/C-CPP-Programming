#include<bits/stdc++.h>
using namespace std;
// Koko loves to eat bananas. There are n piles of bananas, the ith pile has piles[i] bananas. The guards have gone and will come back in h hours.

// Koko can decide her bananas-per-hour eating speed of k. Each hour, she chooses some pile of bananas and eats k bananas from that pile. If the pile has less than k bananas, she eats all of them instead and will not eat any more bananas during this hour.

// Koko likes to eat slowly but still wants to finish eating all the bananas before the guards return.

// Return the minimum integer k such that she can eat all the bananas within h hours.

bool CanEatAtKTime(vector<int>&arr,int k, int h){
    int TotalTimeTakenToEatAllBanana = 0;

    for(auto banana : arr){
        TotalTimeTakenToEatAllBanana += ceil(banana / (double)k);
    }

    return TotalTimeTakenToEatAllBanana <= h;
} 
int main(){
    vector<int>arr = {30,11,23,4,20};
    int h = 5; //hours
    int start = 1;
    int end = *max_element(arr.begin(), arr.end());
    // as the highest pile as speed can eat all the banana 
    int answer = end; // will do store and compute

    while(start<=end){
        int mid = start + (end-start)/2;

        if(CanEatAtKTime(arr,mid,h)){
            answer = mid;
            end = mid-1;
        }else{
            start = mid+1;
        }
    }


    cout<<"Answer is "<<answer<<endl;
    return 0;
}