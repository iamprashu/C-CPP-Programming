#include<stdio.h>

int main(){
    int math,science,hindi,english,social;
    printf("Please Enter Mathematics,Science,Hindi,English,Social Marks :> ");
    scanf("%d,%d,%d,%d,%d",&math,&science,&hindi,&english,&social);

    if (math>=33&&science>=33&&hindi>=33&&english>=33&&social>=33){
        printf("Congratulations You have Passed the exams.");
    }else{
        printf("Sorry you have failed.");
    }

    return 0;

}