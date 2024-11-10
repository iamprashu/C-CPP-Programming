#include<stdio.h>

void Pnum(int n){

    if(n>0){
        Pnum(n-1);

        printf("%d",n);
    }else{
        return;
    }
}

int main(){
    int n;
    scanf("%d",&n);
    Pnum(n);

    return 0;
}