#include<stdio.h>

int main (){
    int num1,num2,num3;
    printf("Please Enter three numbers :> ");
    scanf("%d %d %d",&num1,&num2,&num3);

    float average = (num1+num2+num3)/3.0;

    printf("Average is :> %.2f",average);
    return 0;
}