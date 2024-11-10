#include<stdio.h>

void f1(){
    printf("Hello i am f1.\n");
    f1();
    printf("--------------\n");
}

int main(){
   
    f1();

    return 0;
} 