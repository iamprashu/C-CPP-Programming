#include<stdio.h>

int main(){
    int num1,num2,num3;
    printf("Please Enter three Numbers :> ");
    scanf("%d %d %d",&num1,&num2,&num3);

    if(num1==num2||num3==num1)
        printf("Equal is here %d",num1);
    else if(num2==num3)
        printf("Equal is here %d",num2);
    else if (num1>num2)
    {
        if(num1>num3){
            printf("Number 1 is Greater :> %d",num1);
        }else{
            printf("Number 3 is Greater :> %d",num3);
        }
    }else if (num2>num3)
    {
        printf("Number 2 Is Greatest :> %d",num2);
    }else{
        printf("Number 3 is Greatest :> %d",num3);
    }
    return 0;
}