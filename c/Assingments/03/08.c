#include<stdio.h>

int main(){
    int a =23, b=15;
    printf("Before Swaping A = %d and B = %d\n",a,b);

    a=a*b;
    b=a/b;
    a=a/b;

    printf("After swapig A = %d and B = %d",a,b);

    return 0;

}