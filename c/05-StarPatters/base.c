#include<stdio.h>

int main(){
    int row=1,column=1,count=10;

    for(row=1;row<=count;row++){
        
        for(column=1;column<=count-row+1;column++){
                printf("*");
        }

        printf("\n");
    }

    return 0;
}