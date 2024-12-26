#include<iostream>
using namespace std;

void MoveNegetive(int arr[],int size){
    int leftptr = 0;
    int i=0;

    while(i < size){
        if(arr[i] < 0){
            // arr[i] = arr[i] ^ arr[leftptr];
            // arr[leftptr] = arr[i] ^ arr[leftptr];
            // arr[i] = arr[i] ^ arr[leftptr];
            swap(arr[i],arr[leftptr]);
            leftptr++;
        }

        i++;
    }
}

int main(){

    int arr[] = {0,1,2,3,0,-112,-12,3423,-554433};
    int size = sizeof(arr) / sizeof(arr[0]);

    MoveNegetive(arr,size);

    for(auto i : arr){
        cout<<i<<" ";
    }

    return 0;
}