#include<stdio.h>

int f1(int number){

   if(number<=0){
    return 0;
   }

    return number+f1(number-1);
}

int main(){
    int number = 10;
    int sum = 0;

    sum = f1(number);

    printf("%d",sum);
    return 0;
}