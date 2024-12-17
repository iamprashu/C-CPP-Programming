#include<iostream>
using namespace std;

class Queue{
    public:
    int* data;
    int size;
    int front,rear;

    Queue(int size){
        this->size = size;
        data = (int* ) malloc(size * sizeof(int));
        front = -1;
        rear = -1;
    }

    ~ Queue(){
        delete[] data;
    }

    bool isFull(){
        return (rear+1) % size == front;
    }

    bool isEmpty(){
        return front == -1;
    }
     bool toReset(){
        return front == rear;
    }

    void Reset(){
        front = rear = -1;
    }

    void PushBack(int element){
        if(isFull()){
            cout<<"Queue Overflow"<<endl;
            return;
        }
        if(isEmpty()){
            rear = front = 0;
        }else{
            rear = (rear+1) % size;
        }

        data[rear] = element;
        cout<<"Pushed "<<element<<endl;
    }

    void PushFront(int element){
        if(isFull()){
            cout<<"Overflow Queue"<<endl;
            return;
        }else if(isEmpty()){
            front = rear = 0;
        }else {
            front = (front-1 + size) % size;
        }

        data[front] = element;
        cout<<"Pushed "<<element<<endl;    
    }

    void PopFront(){
        if(isEmpty()){
            cout<<"Underflow Queue"<<endl;
            return;
        }
        cout<<"Popped "<<data[front]<<endl;

        if(toReset()){
            Reset();
        }else{
            front = (front+1) % size;
        }
    }

    void PopBack(){
        if(isEmpty()){
            cout<<"Queue Underflow"<<endl;
            return;
        }
        cout<<"Popped "<<data[rear]<<endl;

        if(toReset()){
            Reset();
        }else{
            rear = (rear-1 + size) % size;
        }
    }

    void Print() {
        if (isEmpty()) {
            cout << "Queue is Empty" << endl;
            return;
        }

        cout << "Queue elements: ";
        int i = front;
        while (true) {
            cout << data[i] << " ";
            if (i == rear) break;
            i = (i + 1) % size;
        }
        cout << endl;
    }

};

int main(){
    Queue q(10);
    q.PushBack(89);
    q.Print();
    q.PushFront(82);
    q.Print();
    q.PopBack();
    q.Print();
    return 0;
}