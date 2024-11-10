#include<iostream>
using namespace std;

void BubbleSort(int arr[], int size){
    
    for(int i=0; i<size-1; i++){

        for(int j=0; j<size-i-1; j++){

            if(arr[j] > arr[j+1]){ //checking the element is asap
                //swaping elements;
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main(){
    int arr[]={3,2,6,7,0,1};
    int size = sizeof(arr)/sizeof(arr[0]);

    BubbleSort(arr,size);

    //Printing after sorting

    for(auto nums:arr){
        cout<<nums<<" ";
    }

    return 0;
}