#include<stdio.h>

int main(){
    int number;
    printf("Please Enter Number :> ");
    scanf("%d",&number);

    if (number/2*2==number)
    {
       printf("Even Number.");
    }else{
        printf("Odd Number.");
    }
    
    return 0;
}