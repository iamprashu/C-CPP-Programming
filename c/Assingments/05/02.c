#include<stdio.h>
int main(){
    int number;
    printf("Please Enter number :> ");
    scanf("%d",&number);

    if(number%5==0){
        printf("Number is Divisible by 5.");
    }else{
        printf("Number is Not Divisible by 5");
    }

    return 0;
}