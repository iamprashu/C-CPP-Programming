#include<stdio.h>

int main (){

    int number;
    printf("Please Enter any Number :> ");
    scanf("%d",&number);

    if(number<=0){
        printf("Number is Non-Positive.");
    }if(number>0){
        printf("Number is Positive.");
    }

    return 0;
}