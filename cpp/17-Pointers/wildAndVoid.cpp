#include<iostream>
using namespace std;

int main(){
    //cout<<*ptr;//wild pointer

    void* ptr;

    int number=10;

    ptr = &number;

    // int *iptr = static_cast<int*>(ptr);

    int* iptr = (int*)ptr;

    cout<<*iptr;
    
    return 0;
}