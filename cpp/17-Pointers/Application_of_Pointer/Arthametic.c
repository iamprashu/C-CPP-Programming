#include<stdio.h>

int main(){
    int a[5] = {1,2,3,4,5};
    int* point = &a[4];
    (*point)++;

    printf("%d",*point);

    return 0;
}