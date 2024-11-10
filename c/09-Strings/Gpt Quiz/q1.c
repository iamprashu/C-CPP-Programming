#include<stdio.h>


int main(){
    char user[5];

    
    scanf("%s",user);

    for(int i=0; i<5; i++){
        printf("%c ",user[i]);
    }

    return 0;
}