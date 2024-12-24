#include<bits/stdc++.h>
using namespace std;

int SingleNumber(int arr[],int size){
    int element = 0;

    for(int i=0; i<size; i++){
        element ^= arr[i];
    }

    return element;
}

int main(){
    int arr[] = {4,1,2,1,2};
    int size = sizeof(arr)/sizeof(arr[0]);

    cout<<SingleNumber(arr,size)<<endl;


    return 0;

}