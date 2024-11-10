#include<stdio.h>

void input(int *p,int size){
    for(int i=0; i<size; i++){
        scanf("%d",p+i);
    }
}

void display(int *p,int size){
   for(int i=0; i<size; i++){
     printf(" %d |",*(p+i));
   }
}

int main(){
    int a[10];
    input(a,10); 
    display(a,10);

    return 0;
}