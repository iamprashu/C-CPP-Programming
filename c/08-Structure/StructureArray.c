#include<stdio.h>
#include<string.h>


struct Student {
    int id;
    char name[30];
};

int main(){
    struct Student arr[5];

    arr[0].id=112;
    strcpy(arr[1].name,"Prashant");

    for(int i=0; i<5; i++){
        printf("%d \n",arr[i].id);
    }


    return 0;

}