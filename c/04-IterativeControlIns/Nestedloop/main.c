#include<stdio.h>

int main (){
    int number;
    printf("Please Enter number :> ");
    scanf("%d",&number);

    for(int i=1; i<=number; i++){
        printf("Printing Table of %d .\n",i);
            for(int j=1; j<=10; j++){
                printf("%d x %d = %d\n",i,j,i*j);
            }
            printf("\n");
    }

    return 0;
}