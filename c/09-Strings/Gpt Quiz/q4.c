#include<stdio.h>

int main(){
    char fname[]="Prashant";
    char lname[]="Joshi";

    char fullname[14];
    int i=0; 

    while (fname[i] != '\0')
    {
        fullname[i] = fname[i];
        i++;
    }

    int j=0;

    while (lname[j] != '\0')
    {
        fullname[i] = lname[j];
        i++;
        j++;
    }

    fullname[i] = '\0';

    printf("%s",fullname);
}