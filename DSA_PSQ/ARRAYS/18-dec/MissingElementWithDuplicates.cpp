#include<bits/stdc++.h>
using namespace std;

//marking method
void MissingElement(int arr[],int size){

    for(int i=0; i<size; i++){
        int index = abs(arr[i]);

        if(arr[index-1] > 0){
            arr[index-1] *= -1;
        }
    }

    cout<<"Missing elements : ";
    
    for(int i=0; i<size; i++){
        if(arr[i] > 0){
            cout<<i+1<<" ";
        }
    }
}

int main(){
    int arr[] = {1,1,1,1};
    int size = sizeof(arr) / sizeof(arr[0]);

    MissingElement(arr,size);

    return 0;
}