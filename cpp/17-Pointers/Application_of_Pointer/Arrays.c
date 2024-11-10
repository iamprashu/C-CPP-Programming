#include<stdio.h>

void input(int *p, int size){
    for(int i=0; i<size; i++){
        printf("Enter value for index %d :> ",i);
        scanf("%d",(p+i));
        printf("address at p is :> %d \n ",p+i);
    }
}

void display(int* ptr){
    for(int i=0; i<10; i++){
        printf("%d\n",*(ptr+i));
        
    }
}

int main(){
    int arr[5]={1,2,3,4,5};

    // int* p = &arr[0]; //passing address of 0th block that is 1st index

    // cout<<*p<<endl;
    // cout<<*(2+p)<<endl;


    // cout<<arr[2]<<endl;
    // cout<<*(arr+2)<<endl;

    int a[10];
    printf("checking the address of a  :> %d \n",a);
    input(a,10);

    display(a);

    return 0;
}