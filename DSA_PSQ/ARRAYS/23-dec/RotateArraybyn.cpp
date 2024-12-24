/*Given an array arr[]. Rotate the array to the left (counter-clockwise direction) by d steps, where d is a positive integer. Do the mentioned change in the array in place.*/

#include<bits/stdc++.h>
using namespace std;

void Reverse(vector<int>& arr,int start,int end){
    while(start<end){
        //swapping elements
        arr[start] = arr[start] ^ arr[end];
        arr[end] = arr[end] ^ arr[start];
        arr[start] = arr[start] ^ arr[end];

        //moving pointers
        start++;
        end--;
    }
}

void rotateArr(vector<int>& arr,int d) {
        int array_size = arr.size();
        int finalRotation = d % array_size;

        //step reverse first d-1 elements
        Reverse(arr,0,finalRotation-1);
        //step 2 reverse remainig all
        Reverse(arr,finalRotation,array_size-1);
        // reverse whole array
        Reverse(arr,0,array_size-1);
}

int main(){

    vector<int>arr = {1,2,3,4,5,6};
    int rotation = 7;

    rotateArr(arr,rotation);

    for(auto element:arr){
        cout<<element<<" ";
    }
    return 0;
}