#include<stdio.h>

int main(){
    char name[]="Prashant";
    char lname[]="Joshi";

    if(name[0]>lname[0]){
        printf("%s will come after %s ",name,lname);
    }else{
        printf("%s Will come Before %s ",name,lname);

    }

    return 0;
}