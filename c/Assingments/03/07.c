#include<stdio.h>

int main(){
    int a = 10, b=20;
    printf("Before Swaping A = %d , B = %d\n",a,b);
    a=a+b; //30
    b=a-b; //10
    a=a-b; //20

    printf("After swaping A = %d and B = %d \n",a,b);

    return 0;

}