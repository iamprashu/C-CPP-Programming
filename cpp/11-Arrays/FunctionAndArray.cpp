#include<iostream>
using namespace std;

void Multiply(int arr[], int size){
    for(int i=0; i<size; i++){
        arr[i]=arr[i]*10;
    }
}

int main(){
    int arr[]={10,4,5,6,2};
    int size=5;

    Multiply(arr,size);

    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}