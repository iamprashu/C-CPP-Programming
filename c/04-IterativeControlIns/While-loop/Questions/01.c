//Write a C program to print numbers from 0 to 10 and 10 to 0 using two while loops.
#include<stdio.h>

int main (){
    int end = 10;
    int i = 0;
    while(i<=end){
        printf("%d, ",i);
        i++;
    }
    printf("Printing Reverse.");
    i=0;
    while(end>=i){
        printf("%d, ",end);
        end--;
    }

}