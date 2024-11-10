//Write a C program to accept two integers and check whether they are equal or not.
#include<stdio.h>

int main (){
    int num1,num2;
    printf("Please Enter number 1 :> ");
    scanf("%d",&num1);
    printf("Please Enter Number 2 :> ");
    scanf("%d", &num2);

    if(num1==num2){
        printf("Hey numbers are same.");
    }else{
        printf("nope.");
    }

    return 0;
}