#include<stdio.h>

int main(){
    int number;

    printf("Enter number :> ");
    scanf("%d",&number);
    
    for(int i=1; i<=10; i++){
        // skiping 6 one
        if(i==6)
            continue;
        printf("%d x %d = %d\n",number,i,number*i);

    }

    return 0;
}