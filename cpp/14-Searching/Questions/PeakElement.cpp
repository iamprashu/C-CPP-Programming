#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector <int>arr{1,20,50,35,32,21,20,12,4,3};
    int start=0,mid=0,end=arr.size()-1,answer=-1;
    // cout<<end;

    // while (start<end)
    // {
    //     mid = start +(end-start)/2;
    //     //checking answer 
    //     if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
    //             cout<<"Answer hai :> "<<arr[mid]<<endl;
    //             break;
    //     } 

    //     if(arr[mid] < arr[mid+1]){

    //         start = mid +1;
    //     }else if(arr[mid] > arr[mid+1])
    //     {
    //         end = mid;
    //     }
       
    // }

    while(start<=end){
        mid = start + (end-start)/2;

        if(arr[mid]<arr[mid+1]){
            start = mid +1;
        }else{
            answer = arr[mid];
            end = mid-1;
        }
    }
    cout<<answer<<endl;

    return 0;
    
}