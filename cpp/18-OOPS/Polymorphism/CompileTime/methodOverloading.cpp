#include<iostream>
using namespace std;

class Complex{
    public:
    int a;
    int b;

    void Add(int a, int b){
        cout<<"Addition of ab is :> "<<a+b<<endl;
    }

    void Add(int a, int b,int c){
        cout<<"Addition of abc is :> "<<a+b+c<<endl;
    }

    // int Add(int a, int b){//error
    //     cout<<"Addition of ab is :> "<<a+b<<endl;
    // }



};

int main(){
    Complex h;
    h.Add(90,12);
}