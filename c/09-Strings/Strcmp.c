#include<stdio.h>
#include<string.h>

int main(){
    
    char a1[10]="Prashant";
    char a2[10]="Joshi";

    int l = strcmp(a1,a2);

    printf("%d",l);
    

    return 0;
}