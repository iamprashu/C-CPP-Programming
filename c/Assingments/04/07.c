#include<stdio.h>

int main(){
    int number;
    printf("Enter any Three digit number :> ");
    scanf("%d",&number);

    int last = number%10;
    number=number/10;
    number=last*100+number;

    printf("Result is :> %d",number);

    return 0;
}