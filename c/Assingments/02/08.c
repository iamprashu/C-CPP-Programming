#include<stdio.h>

int main(){
    char ch1,ch2,ch3;
    printf("Enter three Character :> ");
    scanf("%c %c %c",&ch1,&ch2,&ch3);

    printf("ASCII Codes Are :\n For %c -> %d\n For %c -> %d\n For %c -> %d.",ch1,ch1,ch2,ch2,ch3,ch3);

    return 0;

}