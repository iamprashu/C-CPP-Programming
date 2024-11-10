#include<stdio.h>

int main(){
    int radius;
    printf("Please Enter Radius of Circle. :>");
    scanf("%d",&radius);
    float answer = 3.14159265359 * radius * radius;

    printf("Area of Circle is %.2f having the radius %d",answer,radius);

}