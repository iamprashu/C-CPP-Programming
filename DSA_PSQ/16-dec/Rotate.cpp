#include<iostream>
using namespace std;

void RotateByN(int arr[],int size, int rotation){
    int pin = rotation % size;
    if(pin==0){
        return;
    }
    //copy array to other
    int* temp = new int[size+1];
    //copy element
    int index = 0; //for new array temp
    for(int i=size-pin; i<size; i++){
        temp[index] = arr[i];
        index++;
    }
    //shifting element
    for(int i=size-1;i>=pin; i--){
        arr[i] = arr[i-pin];
    }
    for(int i=0; i<pin; i++){
        arr[i] = temp[i];
    }
}


int main(){
    cout<<"Please Enter Number of rotation :>";
    int rotation;
    cin>>rotation;

    int arr[] = {1,2,3,4,5,6};
    int size = sizeof(arr) / sizeof(arr[0]);

    RotateByN(arr,size,rotation);

    for(auto i:arr){
        cout<<i<<" ";
    }
    return 0;
}