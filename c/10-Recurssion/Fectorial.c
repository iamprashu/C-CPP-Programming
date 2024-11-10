#include<stdio.h>

int fectorial(int number){
    if(number==0){
        return 1;
    }
    return (number*fectorial(number-1));
}

int main(){
    int number;
    printf("Please Enter number Here :> ");
    scanf("%d",&number);

    int answer = fectorial(number);

    printf("Factorial of %d is :> %d ",number,answer);
    return 0;
}