#include<bits/stdc++.h>
using namespace std;

int findFirstOccurance(int arr[],int element,int size){
    int start=0,mid=0,end=size-1;
    int answer = -1;

    while(start<=end){
        mid = start + (end-start)/2;

        if(arr[mid] == element){
            answer = mid;
            end = mid-1;
        }else if(arr[mid] > element){
            end = mid - 1;
        }else{
            start = mid + 1;
        }
    }

    return answer;
}

int main(){

    int arr[] = {1,2,3,3,3,4,4,5,5,6,6,6,7,7};
    int element = 70;
    int size = sizeof(arr) / sizeof(arr[0]);

    cout<<findFirstOccurance(arr,element,size);

    return 0;
}