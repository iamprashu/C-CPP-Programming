#include<stdio.h>

int main(){
    int p,r,t;
    float simple_intrest;
    printf("Please Enter Principal,Rate,Time seperated by comma :> ");
    scanf("%d,%d,%d",&p,&r,&t);

    simple_intrest = p*r*t / 100.0;

    printf("Simple Intrest is  :> %.2f",simple_intrest);

    return 0;

}