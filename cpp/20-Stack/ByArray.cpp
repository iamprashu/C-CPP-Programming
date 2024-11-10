#include<iostream>
using namespace std;
# define MAXSIZE 10

class Stack{

    int top;

    public:
    int data[MAXSIZE];

    Stack(){top = -1;}

    void Push(int data);
    int Pop();
    int Peek();
    bool isEmpty();
};

void Stack::Push(int data){
    if(top >= (MAXSIZE-1) ){
        cout<<"Stack Overflow."<<endl;
    }else{
        this->data[++top] = data;
        cout<<"Pushed Data."<<endl;
    }
}

int Stack::Pop(){
    if(top < 0){
        printf("Stack Underflow.\n");
    }else{
       int x = this->data[top--];
        return x;
    } 
}

int Stack::Peek(){
    if(top < 0){
        cout<<"Stack Underflow\n";
    }else{
        return this->data[top];
    }
}

bool Stack::isEmpty(){
    if(top<0){
        return true;
    }else{
        return false;
    }
}

int main(){
    Stack s;
    s.Push(9);
    s.Push(9);
    s.Push(9);
    s.Push(9);
    s.Push(9);
    s.Push(9);
    s.Push(9);
    s.Push(9);
    s.Push(9);
    s.Push(78);
    s.Push(9);
    s.Push(9);
    cout<<s.Pop()<<endl;
    cout<<s.Peek()<<endl;
    Stack k;
    cout<<k.isEmpty();
}