// Write a C program that prompts the user to input a series of integers until the user stops entering 0 using a while loop. Calculate and print the sum of all the positive integers entered.

#include<stdio.h>

int main (){
    int user=5,sum=0;
    printf("Enter number as much as you want till zero :> ");

    while (user !=0 )
    {
        scanf("%d",&user);
        if(user>0){
            sum = sum + user;
        }
    }
    printf("Oh the sum is :> %d .",sum);
    
    return 0;

}

