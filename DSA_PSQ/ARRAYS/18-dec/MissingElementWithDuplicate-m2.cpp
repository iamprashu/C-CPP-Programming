#include<bits/stdc++.h>
using namespace std;

void MissingElement(int arr[], int size){
    int i=0;
    while(i<size){
        int index = arr[i];

        if(arr[i] == arr[index-1]){
            i++;
        }else{
            swap(arr[i],arr[index-1]);
        }
    }

    for(int i=0; i<size; i++){
        if(arr[i] != i+1){
            cout<<i+1<<" ";
        }
    }
}

int main(){
    int arr[] = {3,3,3,3};
    int size = sizeof(arr) / sizeof(arr[0]);

    MissingElement(arr,size);

    // for(int i=0; i<size; i++){
    //     cout<<arr[i]<<" ";
    // }
}