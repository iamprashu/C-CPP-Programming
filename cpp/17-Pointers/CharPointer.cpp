#include<iostream>
using namespace std;

int main(){
    char arr[50]="Prashant Joshi";

    char* cPtr = arr;

    cout<<cPtr<<endl;
    cout<<*cPtr<<endl;
    cout<<*(cPtr+2)<<endl;
    cout<<&cPtr<<endl;

    cout<<cPtr+2<<endl;

    return 0;
} 