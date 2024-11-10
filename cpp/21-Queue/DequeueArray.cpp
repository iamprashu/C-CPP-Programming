#include<iostream>
using namespace std;

class Dequeue{
    private:
    int* data;
    int size;
    int front;
    int rear;

    public:
    Dequeue(int size){
        this->data = new int[size];
        this->size = size;
        front=-1;
        rear=-1;
    }

    void Push_Front(int element){
        if(front == 0){
            printf("Queue Overflow\n");return;
        }else if(front == -1 && rear == -1){
            data[++front] = element;
            rear++;
        }else{
            data[--front] = element;
        }
        printf("Push Front Done\n");
    }

    int Pop_Front(){
        if(front == -1){
            printf("Stack Underflow\n");
        }else{
            int temp = data[front];
            data[front++] = -1;
            return temp;
        }
    }

    
    void Push_Back(int element){
        if(rear == size -1){
            printf("Queue Overflow\n");
            return;
        }else if(front == -1 && rear == -1){
            data[++rear] = element;
            front++;
        }else{
            data[++rear] = element;
        }

        printf("Push rear Done\n");
    }

    int Pop_Back(){
        if(rear == size-1){
            printf("Stack Overflow\n");
        }else{
            int temp = data[rear];
            data[rear--] = -1;
            return temp;
        }
    }
};

int main(){
    Dequeue q(10);
    q.Push_Back(9012);
    q.Push_Back(901);
    q.Push_Back(902);
    q.Push_Back(903);
    q.Push_Back(9044);
    q.Push_Front(89);
    cout<<q.Pop_Back()<<endl;
    cout<<q.Pop_Front();


    return 0;
}

