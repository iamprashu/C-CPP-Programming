//You are given an array arr[] of non-negative integers. Your task is to move all the zeros in the array to the right end while maintaining the relative order of the non-zero elements. The operation must be performed in place, meaning you should not use extra space for another array.
#include<bits/stdc++.h>
using namespace std;

void Mover(int arr[],int size){

    int start = 0, end = 1;;

    while(end < size){
        if(arr[start]>0 && arr[end]>0){
            start++;end++;
        }else if(arr[start] == 0 && arr[end]>0){
            swap(arr[start],arr[end]);
            start++;end++;
        }else if(arr[start]>0 && arr[end]==0){
            end++;
            start++;
        }else{
            end++;
        }
    }
}

int main(){
    int arr[] = {1,0,4,0,6,0,1,0,0,1,0,0};
    int size = sizeof(arr)/sizeof(arr[0]);

    Mover(arr,size);

    for(auto a:arr){
        cout<<a<<" ";
    }

    return 0;
}