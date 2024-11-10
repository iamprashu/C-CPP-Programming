#include<stdio.h>
#include<string.h>

int main(){
    char name[20];
    printf("Enter Name :>");
    fgets(name,20,stdin);

    char namec[20];

    //copying to name2
    strcpy(namec,name);

    printf("%s",namec);

    return 0;

}