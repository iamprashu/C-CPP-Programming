#include<stdio.h>

int main(){
    int number;
    printf("Please Enter A Number :> ");
    scanf("%d",&number);

    if(number%2==0 && number%3==0){
        printf("Yes Number is Divisible by 2 and 3");
    }else{
        printf("Not Divisible .");
    }

    return 0;
    
}