#include<stdio.h>

int main(){
    int number,digit;
    printf("PLease Enter the Number :> ");
    scanf("%d",&number);
    printf("Enter digit to append :> ");
    scanf("%d",&digit);

    number = number * 10;
    number = number + digit;

    printf("Appended Number is :> %d",number);

    return 0;
}