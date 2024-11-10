#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int>arr{0};

    int start=0,mid=0,end=arr.size()-1;


    while(start<=end){
        
        if(start==end){
            cout<<start<<endl;
        }

        mid = start +(end-start)/2;

        if(arr[mid]>arr[mid+1]){
            cout<<"Answer is : "<<arr[mid]<<endl;
            break;
        }

        if(arr[mid]<arr[start]){
            end = mid-1;
        }else{
            start = mid+1;
        }
    }
}