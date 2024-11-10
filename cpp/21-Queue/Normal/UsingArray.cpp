#include<iostream>
#include<stdio.h>
using namespace std;

class Queue{
    public:
    int size;
    int* arr;
    int front;
    int rear;

    Queue(int size){
        this->size = size;
        this->front = -1;
        this->rear = -1;
        arr = new int[size];
    }

    void Push(int data){
        //if empty
        if(isFull()){
            printf("Stack Overflow\n");return;
        }
        if(this->isEmpty()){
            this->arr[++rear] = data;
            front++;
            printf("Pushed Element.\n");
        }else{
            this->arr[++rear] = data;
            printf("Pushed Element new.\n");
        }
    }

    bool isEmpty(){
        if(front==-1 && rear == -1){
            return true;
        }else{
            return false;
        }
    }
    
    bool isFull(){
        if(rear == size-1){
            return 1;
        }else{
            return 0;
        }
    } 

    void Pop(){
        if(isEmpty()){
            printf("Queue Underflow\n");
            return;
        }
        printf("Popped %d\n",this->arr[front]);
        front++;
        if(front > rear){
            front = -1;
            rear = -1;
        }
    }

    ~Queue(){
        delete[] arr;
        cout<<"Flushed Memory.\n";
    }

};

void PrintQueue(Queue q){
    for(int i=q.front; i<=q.rear; i++){
        printf("%d|",q.arr[i]);
    }
    cout<<endl;
}

int main(){
    Queue n(5);

    n.Push(3490);
    n.Push(2390);
    n.Push(290);
    n.Push(91);
    n.Push(94);
    n.Push(93);
    n.Pop();
    n.Pop();
    n.Pop();
    PrintQueue(n);

}