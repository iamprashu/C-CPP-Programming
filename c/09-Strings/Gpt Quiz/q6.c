#include<stdio.h>
#include<string.h>

int main(){
    // int n=9;
    char name[]="Vaishnavi";

    int p1=0,p2=strlen(name)-1;

    while (p1<=p2)
    {
        char temp = name[p1];
        name[p1] = name[p2];
        name[p2] = temp;

        p1++;p2--;
    }

    printf("%s",name);

    return 0;    
}