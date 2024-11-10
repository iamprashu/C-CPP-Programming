#include<stdio.h>

int main(){
    int sum=0,number;

    while(1){
        printf("Enter number :> ");
        scanf("%d",&number);
        //Checking Number
        if(number==0){
            break;
        }
        sum=sum+number;
        
    }
    printf("Sum is :> %d",sum);

    return 0;
}