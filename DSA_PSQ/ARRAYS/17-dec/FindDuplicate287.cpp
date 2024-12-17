#include<iostream>
using namespace std;

int GetThatBastard(int arr[], int size){
    for(int i=0; i<size; i++){
        int index = abs(arr[i]); //getting absolute index

        if(arr[index] < 0){
            return index;
        }else{
            arr[index] *=-1;
        }
    }

    return -1;
}

int main(){
    int arr[] = {1,3,2,5,4,5};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout<<GetThatBastard(arr,size);

    return 0;

}