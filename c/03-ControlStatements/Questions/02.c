//Write a C program to check whether a given number is even or odd.

#include<stdio.h>

int main(){
    int number;

    printf("Please Enter a Number :> ");
    scanf("%d",&number);

    if(number%2){
        printf("odd number.");
    }else{
        printf("Even Number.");
    }
    return 0;
}