#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {2,2,3,1,1};
    int size = sizeof(arr)/sizeof(arr[0]);

    int start=0, end = sizeof(arr)/sizeof(arr[0]);

    while(start<=end){
        if(start==end){
            cout<<arr[start]<<endl;
            break;
        }
        int mid = start+(end-start)/2;

        // to check it is single element or not

        if(((mid+1<size) && (arr[mid] != arr[mid+1])) && ((mid-1 >= 0) &&(arr[mid] != arr[mid-1]))){
            cout<<arr[mid]<<endl;
            break;
        }

        // moving conditions
        // if pair found and it's 1st element is at a even index that will be before the odd element as 
        // order will change when a single element came so move right
        if(arr[mid]==arr[mid-1]){
            if((mid-1) % 2 == 0){
                start = mid+1;
            }else{
                end = mid-1;
            }
        }
        else if(arr[mid]==arr[mid+1]){
            if((mid) % 2 == 0){
                start = mid+1;
            }else{
                end = mid-1;
            }
        }
    }

    return 0;
}