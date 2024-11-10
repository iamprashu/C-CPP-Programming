#include<iostream>
using namespace std;


int main(){
    int *arr[2];

    int a[3];
    int b[5];
    arr[0] = a;
    arr[1] = b;
    int size[2] = {3,5};
    
    for(int i=0;i<2; i++){
        cout<<"Enter Elements for array "<<i+1<<" : "<<endl;
        for(int j=0; j<size[i]; j++){
            cout<<"Enter element "<<j<<" :> ";
            cin>>*(*(arr+i)+j);
        }
    }
    for(int i=0;i<2;i++){
        printf("Values of %d array : ",i);
        for (int j=0; j<size[i]; j++)
        {
            printf("| %d |",*(*(arr+i)+j));
        }cout<<endl;
        
    }
}