#include<iostream>
using namespace std;

class Queue{
    public:
    int* data;
    static int count;
    int size;
    int rear,front;

    Queue(int size){
        this->size = size;
        data = (int*) malloc(size * sizeof(int));
        rear = -1;
        front  = -1;
    }

    bool isFull(){
        return (rear+1) % size == front;
    }
    bool isEmpty(){
        return front == -1;
    }

    void Push(int element){
        if(isFull()){
            cout<<"Queue Overflow"<<endl;
            return;
        }

        rear = (rear + 1) % size;
        data[rear] = element;
    }

    void Pop(){
        if(isEmpty()){
            cout<<"Queue Underflow"<<endl;
            return;
        }
        cout<<"Popped "<<data[front]<<endl;
        
        if (front == rear) {  // Queue becomes empty after this pop
            front = rear = -1;

        data[front] = -1;
        front = (front+1) % size;
    }
    
    void Print(){
        for(int i=0; i<size; i++){
            cout<<"| "<<data[i]<<" |";
        }cout<<endl;
    }
};

int Queue::count = 0;

int main(){
    Queue q(4);
    q.Push(9);
    q.Push(91);
    q.Push(92);
    q.Push(93);
    q.Print();
    q.Push(9);
    q.Pop();
    q.Print();
    q.Pop();
    q.Print();
    q.Push(113);
     q.Print();
    q.Push(116);
     q.Print();
    q.Push(115);
   


    
}
