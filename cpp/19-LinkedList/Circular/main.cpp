#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(){}
    Node(int data) : data(data), next(nullptr){}
};

void Push(int element,Node* &head){
    Node* newNode = new Node(element);

    if(head == nullptr){
        head = newNode;
        newNode->next = head;
    }else{
        Node* temp = head;
        while (temp->next != head) {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->next = head;
    }
}

void Pop(Node* &head){
    //case 01
    if(head == nullptr){
        cout<<"No Nodes"<<endl;
        return ;
    }

    if(head->next == head){
        delete head;
        head = nullptr;
        cout<<"Removed Single Element , Now it is Blank"<<endl;
        return;
    }
    Node* temp = head;
    while (temp->next != head)
    {
       temp = temp->next;
    }
    Node* todel = head;
    temp->next = head->next;
    head = head->next;

    delete todel;
    cout<<"Node Deleted"<<endl;

}

void Print(Node* head){
    Node* temp = head;
    do{
        printf("%d->",temp->data);
        temp = temp->next;
    }while(temp != head);
    cout<<endl;
}

int main(){

    Node* head = nullptr;
    Push(12,head);Print(head);
    Push(13,head);Print(head);
    Push(14,head);Print(head);
    Push(15,head);Print(head);
    Push(16,head);Print(head);
    Pop(head);Print(head);

}