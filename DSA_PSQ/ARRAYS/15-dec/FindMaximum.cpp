#include<iostream>
using namespace std;

int FindMax(int arr[],int size){
    int max = 0;

    for(int i=0; i<size; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }

    return max;
}

int main(){
    int array[] = {1,2,3,4,66,2,1,2,332,1,0};

    int size = sizeof(array) / sizeof(array[0]);

    cout<<"Maximum Number is : "<<FindMax(array,size);

    return 0;
}