#include<stdio.h>

int main (){
    int number1, number2, number3;
    printf("Enter 3 Numbers (Seperated by enter):> ");
    scanf("%d %d %d",&number1,&number2,&number3);

    if(number1>number2){
         if(number1>number3){
            printf("Number 1 Ir Greatest.");
         }else{
            printf("Number 3 is Greatest.");
         }
    }else if(number2>number3){
        printf("Number 2 is greater.");
    }else{
        printf("Number 3 is Greater.");
    }

    return 0;
}