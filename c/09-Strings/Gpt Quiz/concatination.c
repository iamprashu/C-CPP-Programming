#include<stdio.h>
#include<string.h>

int main(){
    char fname[20];
    char lname[20];

    printf("Please Enter Name :> ");
    fgets(fname,20,stdin);
    fname[strlen(fname)-1]='\0';

    printf("Please Enter Last Name :> ");
    fgets(lname,20,stdin);
    lname[strlen(lname)-1]='\0';//inserting null character

    strcat(fname,lname);

    printf("Your full name is %s",fname);
}