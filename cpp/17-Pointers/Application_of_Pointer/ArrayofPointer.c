#include<stdio.h>

int main(){
    int* array[3];

    int a[] = {34,4};
    int b[]={1,3,4};
    int c[] = {6,7,8,9};

    array[0] = a;
    array[1] = b;
    array[2] = c;

    int size[] = {2,3,4};

    for(int i=0; i<3; i++){
        for(int j=0; j<size[i]; j++){
            printf("%d ",*(*(array+i)+j));
        }printf("\n");
    }
    return 0;
}