#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* prev;
    Node* next;

    Node(int data){
        this->data = data;
        prev=NULL;
        next=NULL;
    }
};
void Insert(int data,int position,Node* &head,Node* &tail){
    Node* newNode = new Node(data);
    if(head == NULL && tail == NULL){
        head = newNode;
        tail = newNode;
    }
    else if(position == 1){
        newNode->next = head;
        head = newNode;
        tail = newNode;
    }else{
        Node* temp = head;
        for(int i=1; i<position-1; i++){
            temp = temp->next;
        }
        newNode->next = temp->next;
        newNode->prev = temp;
        temp->next = newNode;
        tail = newNode;
    }
}

void Print(Node* &head){
    Node* temp = head;

    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }cout<<"NULL"<<endl;
}

void RevPrint(Node* &tail){
    Node* temp = tail;

    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp = temp->prev;
    }cout<<"NULL"<<endl;
}

int main(){
    Node* head = NULL;
    Node* tail = NULL;

    Insert(12,1,head,tail);
    Insert(13,2,head,tail);
    Insert(14,3,head,tail);
    Insert(15,4,head,tail);
    
    Print(head);
    RevPrint(tail);

    return 0;
}