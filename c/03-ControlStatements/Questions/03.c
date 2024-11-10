// Write a C program to check whether a given number is positive or negative.


#include<stdio.h>

int main(){
    int number;
    printf("Enter number :> ");
    scanf("%d",&number);

    number>=0 ? printf("Positive number"): printf("Negetive number .");

    return 0;
}