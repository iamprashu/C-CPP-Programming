#include<stdio.h>

int main(){
    int a=10,b=20;
    printf("Before swaping :> A = %d and B = %d \n",a,b);
    int temp=b;
    b=a;
    a=temp;

    printf("Values after swaping A = %d and B = %d",a,b);
    return 0;
}