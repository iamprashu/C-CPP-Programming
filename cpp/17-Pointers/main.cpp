#include<iostream>
using namespace std;

void update(int *pointer){
    for(int i=0; i<10; i++){
        cout<<"Value of i:> "<<i<<endl;
        cout<<"Value of pointer :> "<<*(pointer+i)<<endl;
        *(pointer+i) = *pointer+4;
    }

    cout<<"Updation Complete"<<endl;
}

int main(){
    int a=5;
    int *p = NULL;
    p = &a;
    cout<<"Address of Variable a is stored in pointer p as :> "<<p<<endl;
    //incrementing value
    p++;
    cout<<"Incremented p++ so it will goto +4 memory address :> "<<p<<endl;

    //if there is and array 
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int *pointer = NULL;
    //as the pointer 
    pointer = arr;

    int i=0;
    cout<<"Printing Before Updation \n";

    while(i<10){
        cout<<"Printing the "<<i<<"st value that is :> "<<*(pointer+i)<<endl;
        i++;
    }

    //pointer and function

    update(pointer);

    i=0;

    while(i<10){
        cout<<"Printing the "<<i<<"st value that is :> "<<*pointer+i<<endl;
        i++;
    }

    return 0;
}
