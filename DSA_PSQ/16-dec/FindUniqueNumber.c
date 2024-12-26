#include<stdio.h>

int findUnique(int arr[],int size){
    int element = 0;

    // for(auto i:arr){
    //     element = element ^ i;
    // }

    for(int i=0; i<size; i++){
        element = element ^ arr[i];
    }

    return element;
}

int main(){
    int arr[] = {1,2,3,1,2,3,4,6,7,7,6,8,9,9,8};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Unique Element in Array is :> %d",findUnique(arr,size));

    return 0;
}