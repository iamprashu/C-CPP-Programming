#include<stdio.h>

int main(){
    int number;
    printf("Enter number to get Unit Digit :> ");
    scanf("%d",&number);

    printf("Unit digit of %d is :> %d.",number,number%10);
}