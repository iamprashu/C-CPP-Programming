#include<stdio.h>

int length(char *p){
    int i;
    for(i=0;*(p+i); i++){
        
    }
    return i-1;
}

int main(){
    char str[10];
    fgets(str,10,stdin);

    int l = length(str);

    printf("%d",l);

    return 0;
}