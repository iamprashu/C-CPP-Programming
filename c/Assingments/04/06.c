#include<stdio.h>

int main(){
    float usd=84.23;
    int user;
    printf("Enter usd to Convert into INR :> ");
    scanf("%d",&user);
    
    float inr = user * usd;

    printf("The %d USD = %.2f INR. ",user,inr);

    return 0;

}