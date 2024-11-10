//Write a C program that calculates the product of numbers from 1 to 5 using a while loop.

#include<stdio.h>

int main (){
    int i=1, product=1;


    while (i<=5)
    {
        product = product * i;
        i++;
    }

    printf("Wow, Product is :> %d",product);
    

    return 0;
}