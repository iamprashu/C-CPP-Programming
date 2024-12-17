#include<iostream>
using namespace std;

void Sorting(int arr[], int size){
    int o = 0;
    int z = 0;

    for(int i=0; i<size; i++){
        if(arr[i] == 0){
            z++;
        }
    }
    o = size-z;

    // fill(arr,arr+o,0);
    // fill(arr+o-1,arr+z,1);
    cout<<"Zero are :> "<<z;
    cout<<endl<<"one are:> "<<o<<endl;

    for(int i=0; i<z; i++){
        arr[i] = 0;
    }
    for(int i=z; i<size; i++){
        arr[i] = 1;
    }
}

int main(){
    int arr[] = {1,0,1,1,1,1,0,0,1,1,0,0,1,0,1,0};
    int size = sizeof(arr) / sizeof(arr[0]);

    Sorting(arr,size);

    for(auto i:arr){
        cout<<i<<" ";
    }

    return 0;
}