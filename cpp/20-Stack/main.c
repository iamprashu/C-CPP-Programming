#include<stdio.h>

#define MAX = 10;
 int arr[10];

    int top = -1;
 void Push(int element){
        if(top==9){
            printf("Stack overflow..... \n");
        }else{
            top++;
            arr[top] = element;
        }
    }

    void pop(){
        if(top == -1){
            printf("Stack Underflow......");
        }else{
            arr[top] = 0;
            top--;
        }
    }

    void PrintStack(){
        for(int i=0; i<10; i++){
            printf("%d ",arr[i]);
        }
    }

int main(){
    Push(12);
    Push(13);
    Push(14);
    Push(15);
    printf("\n");
    pop();
    PrintStack();
}