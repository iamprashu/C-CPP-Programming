#include<iostream>
#include<vector>
using namespace std;


int main(){
    //ingeger in stack

    int a = 5;

    cout<<a<<endl;

    // int using heap;

    int* p = new int;

    *p = 5;

    cout<<*p<<endl;

    //de allocate

    delete p;

    // array

    //stack

    int arr[5]={0};
    cout<<arr[0]<<endl;

    //heap

    //int* ptr = new int[50]{2};

    (*ptr)++;

    cout<<*ptr<<endl;

    delete[] ptr;

    //2d array;

    //stack

    int arr[2][3]={0};

    //heap

    int** prr  = new int*[2];

    *prr = new int[5]{90};
    *(prr+1) = new int[5]{890};

    

    for(int i=0; i<2; i++){
        for(int j=0; j<5; j++){
            cin>>*(*(prr+i)+j);
        }
    }

    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            cout<<"| "<<*(*(prr+i)+j)<<" |";
        }
        cout<<endl;
    }

    return 0;
}