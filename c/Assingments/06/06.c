#include<stdio.h>
int main(){
    int number;
    printf("Please Enter number :> ");
    scanf("%d",&number);

    if(number%7==0 || number%3==0){
        printf("Yes!, Number is Divisible by 7 or 3");
    }else{
        printf("Not divisible.");
    }

    return 0;
    
}