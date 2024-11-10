#include<stdio.h>

int main(){
    int a = 3, b=90;
    printf("Before Swaping Values A = %d and B = %d\n",a,b);

    a=a^b;
    b=a^b;
    a=a^b;

    printf("After swaping A = %d and B = %d",a,b);

    return 0;

}