#include<stdio.h>

int main(){
    int number;
    printf("Enter Any Number :>");
    scanf("%d",&number);


    if(number<=0){
        printf("Non Positive Number.");
    }else{
        printf("Positive Number");
    }
    return 0;
}