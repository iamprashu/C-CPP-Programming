#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int element):data(element),next(nullptr){}
};

class Queue{
    public:
    Node* front;
    Node* rear;

    Queue(){front = rear = nullptr;}

    bool isEmpty(){
        if(front == nullptr){
            return true;
        }else{
            return false;
        }
    }

    //pushing code
    void Enqueue(int value){
        Node* newNode = new Node(value);

        if(this->isEmpty()){
            front = newNode;
            rear = newNode;
            return;
        }
        rear->next = newNode;
        rear = newNode;
    }

    void Dequeue(){
        if(this->isEmpty()){
            printf("Queue Underflow\n");
            return;
        }

        Node* temp = front;
        printf("Popped %d.\n",temp->data);
        front = front->next;

        //if front keep triversiong and get null means list is empty
        if (front == nullptr)
            rear = nullptr;


        delete temp;
    }

    int GetFront(){
        if(this->isEmpty()){
            printf("Queue Underflow\n");
            return -1;
        }
        return this->front->data;
    }

    int GetBack(){
        if(this->isEmpty()){
            printf("Queue Underflow\n");
            return -1;
        }
        return this->rear->data;
    }
};


int main(){
    Queue q;
    q.Enqueue(12);
    q.Enqueue(122);
    q.Enqueue(121);
    q.Enqueue(1);
    q.Enqueue(102);
    q.Dequeue();
    q.Dequeue();
    q.Dequeue();
    q.Dequeue();
    q.Dequeue();
    q.Dequeue();
    q.Dequeue();
    return 0;
}

