#include<stdio.h>
int main(){
    int number;
    printf("Please Enter a Number :> ");
    scanf("%d",&number);

    if(number>0){
        printf("Number is Positive");
    }else{
        printf("Number is non Positive.");
    }

    return 0;
}