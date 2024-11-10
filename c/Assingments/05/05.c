#include<stdio.h>

int main(){
    int number;
    printf("Enter Number to Check :> ");
    scanf("%d",&number);

    if(number&1){
        printf("Odd Number");
    }else{
        printf("Even Number.");
    }

    return 0;

}