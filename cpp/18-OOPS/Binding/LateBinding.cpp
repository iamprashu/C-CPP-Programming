#include<iostream>
using namespace std;

class A{
    public:
    virtual void f1(){
        cout<<"Base f1"<<endl;
    }
};

class B : public A{
    public:
    void f1 () override{
        cout<<"Derrived F1"<<endl;
    }
};

int main(){

    A *a_ptr;
    B b;
    a_ptr = &b;
    a_ptr->f1();

}