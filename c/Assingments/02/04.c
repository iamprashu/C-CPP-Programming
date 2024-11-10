#include<stdio.h>

int main(){
    int length,breadth,hight;

    printf("Enter Length, Breadth, Hight (Seperated by comma) :> ");
    scanf("%d,%d,%d",&length,&breadth,&hight);

    int answer = length*breadth*hight;

    printf("Volumne of cuboid :> %d",answer);
    return 0;

}