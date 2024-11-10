#include<stdio.h>

int main () {
    int i =0;

    while(i<=6){
        if(i%2)
            i=i-3;
        else
            i=i+5;
        printf("%d ",i);
    }
    printf("%d ",i);
    return 0;
}