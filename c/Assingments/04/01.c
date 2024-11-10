#include<stdio.h>

int main(){
    int a,b,c,num;
    printf("Please Enter number :> ");
    scanf("%d",&num);

    a=num%10;
    b=(num/10)%10;
    c=(num/100)%10;

    int sum = a+b+c;

    printf("%d",sum);
    return 0;
}