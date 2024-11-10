#include<iostream>
#include<vector>
using namespace std;

int findPiviot(vector<int>arr){
        int start = 0,mid=0,end=arr.size()-1;

        while(start <= end){
            mid = start + (end-start)/2;

           if(arr[mid]>arr[mid+1] && mid<arr.size()){
            return mid;
           }

           if(mid >= 0 && arr[mid]<arr[mid-1]){
            return mid-1;
           }

            if(arr[mid]<arr[start]){
                end = mid-1;
            }else{
                start = mid+1;
            }
        }

        return -1;
}

int BinarySearch(vector<int>arr, int target, int start, int end){
    while(start<=end){
        int mid = start +(end-start)/2;

        if(arr[mid]==target){
            return mid;
        }

        if(target>arr[mid]){
            start = mid+1;
        }else if(target<arr[mid]){
            end=mid-1;
        }
    }
    return -1;
}

int main(){
    vector<int>arr{1};

    int piviotIndex = findPiviot(arr);
    int target = 0;

    if(target > arr[0] && target<arr[piviotIndex]){
        int answer = BinarySearch(arr,target,0,piviotIndex);
        cout<<answer;
    }else{
        int answer = BinarySearch(arr,target,piviotIndex,arr.size()-1);
        cout<<answer;
    }

    return -1;

    
}