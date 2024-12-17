#include<iostream>
using namespace std;

void VReverse(int array[],int size){
    int i=0,j=size-1;

    while(i<j){
        array[i] = array[i] ^ array[j];
        array[j] = array[j] ^ array[i];
        array[i] = array[i] ^ array[j];

        i++;j--;
    }
}

int main(){
    int array[] = {1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(array)/sizeof(array[0]);

    VReverse(array,size);

    for(int i=0 ;i<size; i++){
        cout<<array[i]<<" ";
    }

    return 0;
}