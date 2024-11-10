#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(){

    }

    Node(int data){
        this->data = data;
        next = NULL;
    }
};

Node* head = NULL;

class Stack{
    public:
    Stack(){
        
    }
    void Push(int element){
        Node* newNode = new Node(element);
        if(head == NULL){
            head = newNode;
        }else{
            head->next = newNode;
            printf("Data Pushed\n");
        }
    }

    void Print(){
        Node* temp = head;

        while(temp != NULL){
            printf("%d->",temp->data);
            temp = temp->next;
        }cout<<"Tail\n";
    }
};

int main(){
    Stack s;
    s.Push(12);
    s.Push(90);
    s.Push(129);
    s.Push(903);
    s.Push(122);
    s.Push(9022);
    s.Push(125);
    s.Push(290);
    s.Print();


    return 0;
}