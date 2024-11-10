#include<stdio.h>

int main(){
    int n=0;
    printf("Enter the Value of N :> ");
    scanf("%d",&n);
    int counter=1;
    
    while (counter<=n)
    {
        printf("%d\n",counter);
        counter++;
    }
    
    return 0;
}