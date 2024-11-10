#include<stdio.h>

int main(){
    int number;
    printf("Enter any number :> ");
    scanf("%d",&number);

    printf("The number %d without last digit is :> %d",number,number/10);


    return 0;
}