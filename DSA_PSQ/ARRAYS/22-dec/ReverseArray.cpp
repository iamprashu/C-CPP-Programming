// Given an array arr[]. Rotate the array to the left (counter-clockwise direction) by d steps, where d is a positive integer. Do the mentioned change in the array in place.
#include<bits/stdc++.h>
using namespace std;

void GetReversed(vector<int>&arr,int start,int end){
    while(start<end){
        arr[start] = arr[start]^arr[end];
        arr[end] = arr[end]^arr[start];
        arr[start] = arr[start]^arr[end];
        start++;end--;
    }
}

int main(){
    vector<int>arr = {1,4,3,2,5};
    int rotateBy=2;
    int size = arr.size();

    int finalRotation = rotateBy % size;

    GetReversed(arr,0,finalRotation-1);// starting n reverse
    GetReversed(arr,finalRotation,size-1);
    GetReversed(arr,0,size-1);



    for(auto i:arr){
        cout<<i<<" ";
    }


    return 0;
}