#include<iostream>
using namespace std;

class CircularDequeue{
    public:
    int* arr;
    int size;
    int front,rear;

    CircularDequeue(int queue_size){
        this->size = queue_size;
        this->arr = new int[size];
        front=-1;
        rear = -1;
    }

    bool isEmpty(){
        if(front==-1 && rear==-1){
            return true;
        }else{
            return false;
        }
    }

    void PrintQueue(){
        for(int i=0; i<size; i++){
            cout<<arr[i]<<" ";
        }cout<<endl;
    }

    void Push_Back(int value){
        if((rear+1)%size == front){
            cout<<"Queue Overflow\n";
        }else if(isEmpty()){
            arr[++rear] = value;
            front++;
        }else if(rear == size-1 && front != 0){
            rear = 0;
            arr[rear] = value;
        }else{
            arr[++rear] = value;
        }
    }

    void Push_Front(int value){
        //cases = 4;
        if((rear+1)%size == front){
            cout<<"Queue Overflow."<<endl;
        }else if(isEmpty()){
            arr[++front] = value;
            rear++;
        }else if(front == 0 && rear != size-1){
            front = size-1;
            arr[front] = value;
        }else{
            //normal case
            arr[--front] = value;
        }
    }

    void Pop_Front(){
        if(isEmpty()){
            cout<<"Queue Underflow"<<endl;
            return;
        }else if(front == rear){
            cout<<"Popped "<<arr[front]<<endl;
            arr[front] = -1;
            front=rear=-1;
        }else if(front == size-1){
            cout<<"Popped "<<arr[front]<<endl;
            arr[front] = -1;
            front = 0;
        }else{
            cout<<"Popped "<<arr[front]<<endl;
            arr[front++] = -1;
        }
    }

    void Pop_Back(){
        if(isEmpty()){
            cout<<"Queue Underflow"<<endl;
            return;
        }else if(front == rear){
            cout<<"Popped "<<arr[rear]<<endl;
            arr[front] = -1;
            front=rear=-1;
        }else if(rear == 0){
            cout<<"Popped "<<arr[rear]<<endl;
            arr[rear] = -1;
            rear = size-1;
        }else{
            cout<<"Popped "<<arr[rear]<<endl;
            arr[rear--] = -1;
        }
    }
};

int main(){
    CircularDequeue q(3);
    q.Push_Back(123);
    q.PrintQueue();
    q.Push_Back(34);
    q.PrintQueue();
    q.Push_Back(43);
    q.PrintQueue();
    q.Pop_Front();//123
    q.PrintQueue();
    q.Push_Front(76);//76.34.43
    q.PrintQueue();
    q.Push_Front(654);
    q.PrintQueue();
    q.Pop_Back();
    q.PrintQueue();
    q.Push_Front(126);
    q.PrintQueue();
    return 0;
}