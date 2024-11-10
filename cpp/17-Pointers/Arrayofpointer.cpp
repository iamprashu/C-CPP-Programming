#include<iostream>
using namespace std;


int main(){
    int* p_arr[5];

    int a[]={1,2,3,4,5};

    for(int i=0; i<5; i++){
        p_arr[i] = &a[i];
    }

    cout<<"Printing Array with Address : \n"<<endl;

    for(int i=0; i<5; i++){
        cout<<"Address of arr["<<i<<"] is :> "<<p_arr[i]<<endl;
        cout<<"Value At that address is :> "<<**(p_arr + i)<<endl;
    }

    cout<<endl<<endl<<endl;

    int ab =10;

    cout<<&ab<<endl;

    int *p = &ab; //level1

    cout<<p<<endl;

    int **q = &p; //level2 pointer

    cout<<**q<<endl;

}