#include<stdio.h>

int main(){
    int count,number;
    for(count=1;count<=3;count++){
        printf("Please Enter number :>");
        scanf("%d",&number);

        if(number%2==0){
            break;
        }
    }

    if(count<=3){
        printf("You Won !");
    }else{
        printf("You loose.");
    }
    return 0;
}