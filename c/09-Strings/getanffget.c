#include<stdio.h>
#include<string.h>

int main(){
    char name[20];

    //gets(name);//this has no bound check

    fgets(name,20,stdin);

    int size = strlen(name);
    size -= 1; //as one extra new line character is there
    name[strlen(name)-1]='\0'; //adding null value in last

    printf("The name is :> %s and Lenght is :> %d",name,size);

    return 0;
}