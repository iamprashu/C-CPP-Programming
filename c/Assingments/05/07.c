#include<stdio.h>

int main(){
    int a,b;
    printf("Enter two numbers :>");
    scanf("%d %d",&a,&b);

    if(a>b){
        printf("Number A -> %d is Greatest.",a);
    }else if (a==b)
    {
        printf("Shame Shame :) :> %d",a);
    }else{
        printf("number b is Greatest :> %d",b);
    }

    return 0;
    
}