//digits counter

#include<stdio.h>

int main(){
    int count=0,number;
    printf("Enter Number :>");
    scanf("%d",&number);

    while (number!=0)
    {
        number=number/10;
        count++;
    }

    printf("Total Digits in number :> %d ",count);
    return 0;
    
}