#include<stdio.h>

int main(){
    int number;
    number = 10;

    printf("%d \n",number);
    printf("%d \n",&number);
    printf("%d",*(&number));

    int *number2;

    number2 = &number;

    printf("%d | %d | %d",&number2,number,*number2);

    return 0;
} 