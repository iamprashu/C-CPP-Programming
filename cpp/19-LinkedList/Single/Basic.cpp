#include<iostream>  
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        next = NULL;
    }
};

void Print(Node* head){
    Node* temp = head;

    while(temp != NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }cout<<"NULL"<<endl;
}

int Length(Node* head){
    Node* temp = head;
    int count=0;
    while(temp != NULL){
        count++;
        temp = temp->next;
    }

    return count;
}
void Delete(int position,Node* &head){
    Node* temp = head;
    for(int i=1; i<position-1; i++){
        temp = temp->next;
    }
    Node* toDel = temp->next;
    temp->next = toDel->next;

    toDel->next=NULL;
    delete(toDel); 
}
bool GetElement(int target,Node* &head){
    Node* temp = head;

    while(temp != NULL){
        if((temp->data) == target){
            return true;
        }
        temp = temp->next;
    }
    return false;
}
void Insert(int data,int pos, Node* &head){
    //3 case 1 empty 2 head 3 tail/pos
    Node* newNode = new Node(data);
    if(head==NULL){
        head = newNode;
    }
    else if(pos == 1){
        newNode->next = head;
        head = newNode;
    }
    else
    {
        Node* temp = head;
        for(int i=1; i<pos-1; i++){
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }
}

int main(){
    Node* head = NULL;
    Node* tail = NULL;
    Insert(12,1,head);
    Print(head);
    Insert(13,2,head);
    Print(head);
    Insert(14,3,head);
    Print(head);
    GetElement(14,head) ? cout<<"Yes\n" : cout<<"No\n";
    Delete(3,head);
    Print(head);
}