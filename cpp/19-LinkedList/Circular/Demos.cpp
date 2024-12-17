#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(){}
    Node(int data):data(data),next(NULL){}
};

void InsertAtHead(Node* &head,int data){
    Node* newNode = new Node(data);
    //case 1 : if empty
    if(head==NULL){
        head = newNode;
        newNode->next = head;
    }else{
        newNode->next = head;
        Node* temp = head;
        while(temp->next != head){
            temp = temp->next; // pointing last node back to front newNode that is to be added
        }
        temp->next = newNode;
        head = newNode; //then point head to newNode
    }
}

void InsertAtPos(int pos,Node* head,int data_to_Insert){
    pos--;
    
    Node* newNode = new Node(data_to_Insert);
    if(pos <= 1){
        InsertAtHead(head,data_to_Insert);
    }else{
        Node* temp = head;
        for(int i=1; i<pos; i++){
            if(temp == NULL){
                cout<<"Sorry Invalid Position !\n"<<endl;
                exit(0);
            }
            temp = temp->next;
        }//loop is done now to put node;
        newNode->next = temp->next;
        temp->next = newNode;
    }

}

void PrintList(Node* head){
    Node* temp = head;

    do{
        printf("%d->",temp->data);
        temp = temp->next;
    }while(temp != head);
    cout<<endl;
}

int main(){
    Node* head = NULL;
    InsertAtHead(head,12);
    PrintList(head);
    InsertAtHead(head,13);
    PrintList(head);
    InsertAtHead(head,14);
    PrintList(head);
    InsertAtPos(3,head,1400);
    PrintList(head);
    InsertAtHead(head,15);
    PrintList(head);
    InsertAtHead(head,16);
    PrintList(head);
    
}