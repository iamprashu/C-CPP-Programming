#include<bits/stdc++.h>
using namespace std;

int PeekElement(vector<int> &arr){
    int n = arr.size();
    int start=0,end = n-1;
     while(start<=end){
        mid = start + (end - start) / 2;

        if(arr[mid]>arr[mid+1] && arr[mid]> arr[mid-1]){
            return mid;
        }
        else if(arr[mid] < arr[mid+1]){
            start = mid + 1;
        }else{
            end = mid-1;
        }
    }

    return -1;
}

int main(){
    vector<int>arr={10,20,30,33,44,39,32,10,2};

    cout<<"Finding the peak ......"<<endl;
    cout<<"Peak found : "<<PeekElement(arr);

    return 0;
}