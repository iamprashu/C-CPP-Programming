#include<iostream>
using namespace std;

class CircularQueue{
    private:
    int* arr;
    int size;
    int front,rear;
    public:
    CircularQueue(int size){
        this->size = size;
        this->arr = new int[size];
        this->front = -1;
        this->rear = -1;
    }

    bool isEmpty(){
        if(front==-1 && rear == -1){
            return true;
        }else{
            return false;
        }
    }

    void Push(int value){
        //case 01 overflow
        if((rear+1)%size == front){
            printf("Queue Overflow\n");
        }else if(this->isEmpty()){
            rear++;
            arr[rear] = value;
            front++;
        }else if( rear == size-1 && front != 0){
            rear = 0;
            arr[rear] = value;
        }else{
            arr[++rear] = value;
        }
    }

    int Pop(){
        int elementtemp = -1;
        if(isEmpty()){
            printf("Queue Underflow.");
        }else if(front == rear){
            elementtemp = arr[front];
            arr[front] = -1;
            front=-1;rear=-1;
        }else if(front == size-1){
            elementtemp = arr[front];
            arr[front] = -1;
            front = 0;
        }else{
            elementtemp = arr[front];
            arr[front] = -1;
            front++;
        }

        return elementtemp;
    }

    void Print(){
        for(int i=0; i<size; i++){
            cout<<arr[i]<<" ";
        }cout<<endl;
    }

    int GetSize(){
        if(isEmpty()){
            return 0;
        }
        else if(front <= rear){
            return rear-front+1;
        }else{
            return (size-front) + rear+1;
        }
    }
};

int main(){

    CircularQueue cq(10);
    cq.Push(412);cq.Print();
    cq.Push(512);cq.Print();
    cq.Push(812);cq.Print();
    cq.Push(1652);cq.Print();
    cq.Push(162);cq.Print();
    cq.Push(112);cq.Print();
    cq.Push(1222);cq.Print();
    cq.Push(124);cq.Print();
    cq.Push(123);cq.Print();
    cq.Push(121);cq.Print();
    cout<<cq.Pop()<<endl;
    cq.Push(89);
    cq.Print();
    cout<<cq.Pop()<<endl;cq.Print();
    cout<<cq.Pop()<<endl;cq.Print();
    cout<<cq.Pop()<<endl;cq.Print();
    cout<<cq.Pop()<<endl;cq.Print();
    cq.Push(89);
    cq.Push(89);
    cq.Push(89);
    cq.Print();
    cout<<cq.GetSize();
 
}