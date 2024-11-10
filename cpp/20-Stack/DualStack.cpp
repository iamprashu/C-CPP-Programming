#include<iostream>
using namespace std;

class Stack{
public:
    int* arr;
    int size;
    int top1;
    int top2; 

    Stack(int Capacity){
        arr = new int[Capacity];
        this->size=Capacity;
        top1= -1;
        top2=size;
    }

    void push1(int element){
        if(top2-top1 == 1 ){
            cout<<"Stack overflow"<<endl;
        }else{
            top1++;
            arr[top1] = element;
        }
    }

    void push2(int element){
        if(top2-top1==1){
            cout<<"Stack overflow.."<<endl;
        }else{
            top2--;
            arr[top2] = element;
        }
    }

    void pop1(){
        if(top1==-1){
            cout<<"StackUnderflow"<<endl;
        }else{
            arr[top1] = 0;
            top1--;
        }
    }
    void pop2(){
        if(top2==size){
            cout<<"StackUnderflow"<<endl;
        }else{
            arr[top2] = 0;
            top2++;
        }
    }

    void Printdel(){
        for(int i=0;i<size; i++){
            cout<<arr[i]<<" ";
        }
    }

};

int main(){
    Stack s(5);
    // s.pop2();
    s.push1(90);
    //cout<<"top1 : "<<s.top1<<" "<<" top2: "<<s.top2<<endl;
    s.push1(89);
    //cout<<"top1 : "<<s.top1<<" "<<" top2: "<<s.top2<<endl;
    s.push2(88233);
    //cout<<"top1 : "<<s.top1<<" "<<" top2: "<<s.top2<<endl;

    s.push2(23);
    //cout<<"top1 : "<<s.top1<<" "<<" top2: "<<s.top2<<endl;

    s.push2(100);
    //cout<<"top1 : "<<s.top1<<" "<<" top2: "<<s.top2<<endl;

    s.pop1();
    s.pop1();
    s.pop1();
    s.Printdel();


    


    return 0;
}