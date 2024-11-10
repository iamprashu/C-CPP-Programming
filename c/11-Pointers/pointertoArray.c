#include<stdio.h>

int main(){
    int arr[3][3]={
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    int (*pointer)[3];

    pointer = (*&arr);

    printf("%d",pointer[0][0]);
    printf("\n%d\n",*(*(pointer+1)+2));

    int (*p)[3]=NULL;

    p=pointer;

    printf("%d",*((*p+0)+1));

}