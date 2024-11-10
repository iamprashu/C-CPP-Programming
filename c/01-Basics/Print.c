#include<stdio.h>

int main (){
    // printf("Welcome");
    //escape sequense

    // printf("Welcome\tStudents.\n");
    char name = 'A';
    float num = 2.5546;
    printf("%c \n", name);
    printf("%.2f \n", num);
    printf("%d \n",name);

    int a =5, b=6;

    printf("%d %d \n",a,b);
    printf("a=%d and b=%d\n",a,b);
    printf("a=%d & b=%d\n",b,a);
    printf("value of a is %d and value of b is %d\n",a,b);
    printf("sum of %d and %d is %d\n",a,b,a+b);
    printf("%d + %d = %d\n",a,b,a+b);

    return 0;
}