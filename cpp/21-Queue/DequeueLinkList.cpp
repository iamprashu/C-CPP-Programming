#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;
    Node(int value){
        this->data = value;
        this->next = this->prev = nullptr;
    }
};

class Dequeue{
    public:
    Node* front;
    Node* back;

    Dequeue(){
        front = back = nullptr;
    }

    bool isEmpty(){
        if(front == nullptr){
            return true;
        }else{
            return false;
        }
    }

    void Push_Front(int element){
        Node* newNode = new Node(element);
        if(this->isEmpty()){
            front = newNode;
            back = newNode;
        }else{
            front->prev = newNode;
            newNode->next = front;
            front = newNode;
        }        
    }

    void Push_Back(int element){
        Node* newNode = new Node(element);
        if(this->isEmpty()){
            front = newNode;
            back = newNode;
        }else{
            newNode->prev = back;
            back->next = newNode;
            back = newNode;
        }        
    }

    void Pop_front(){
        if(this->isEmpty()){
            printf("Queue underflow.\n");
        }
        Node* temp = front;
        printf("Popped %d.",temp->data);
        front = front->next;
        if(front == nullptr){
            back = nullptr;
        }

        delete temp;
    }
    void Pop_back(){
        if(this->isEmpty()){
            printf("Queue underflow.\n");
        }
        Node* temp = back;
        printf("Popped %d.\n",temp->data);
        back = temp->prev;
        if(front == nullptr){
            back = nullptr;
        }

        delete temp;
    }
};

void Print(Dequeue q){
    Node* temp = q.front;
    while(temp != nullptr){
        printf("%d->",temp->data);
        temp = temp->next;
    }cout<<endl;
}

int main(){
    Dequeue q;

    q.Push_Back(19);
    q.Push_Back(12);
    q.Push_Back(17);
    q.Push_Back(18);
    Print(q);
    q.Push_Front(11);
    q.Push_Front(118);
    Print(q);
    // q.Pop_back();
    // q.Pop_front();
}