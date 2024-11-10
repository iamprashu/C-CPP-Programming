#include<stdio.h>

int main(){
char string1[20]="Prashant";
char string2[20];

    for(int i=0; i<20; i++){
        string2[i] = string1[i];
    }

    return 0;
}