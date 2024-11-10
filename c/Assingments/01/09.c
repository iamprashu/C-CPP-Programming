#include<stdio.h>

int main (){
    int length,breadth;
    printf("Enter Length and Bridth seperated by space :> ");
    scanf("%d %d",&length,&breadth);
    int answer = length*breadth;
    printf("Area of Ractangle is :> %d",answer);
    return 0;
}