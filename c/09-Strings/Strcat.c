#include<stdio.h>
#include<string.h>

int main(){
    char fname[20];
    char lname[20];

    printf("Enter First Name :> ");
    fgets(fname,20,stdin);
    fname[strlen(fname)-1] = ' ';
    printf("Enter Last name :> ");
    fgets(lname,20,stdin);

    strcat(fname,lname);


    printf("%s",fname);

    return 0;
}