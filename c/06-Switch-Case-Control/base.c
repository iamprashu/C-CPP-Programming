#include<stdio.h>

int main(){
    int number;
    printf("Please Enter Number :>");
    scanf("%d",&number);

    switch(number){
        case 10:
            printf("Ten\n");
            break; //this will exit switch 
        case 15:
            printf("Pandra\n");
        case 100 ... 200: //to check between
            printf("Zero\n");
        default:
            printf("Check Input.\n");
    }

    printf("Outside loop.\n");

    return 0;
}