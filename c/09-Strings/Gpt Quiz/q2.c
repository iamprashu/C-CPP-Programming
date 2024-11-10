#include<stdio.h>

int main(){
    char name[]="prashant";
    int i;
    for(i=0; name[i]; i++);

    printf("%d",i);

}