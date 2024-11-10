#include<iostream>
using namespace std;

class Complex{
    public:
    int Real;
    int Imag;
    Complex(){

    }

    Complex(int real,int imag):Real(real),Imag(imag){}

    Complex operator + (Complex &object){
        Complex temp;
        temp.Real = this->Real + object.Real;
        temp.Imag = this->Imag + object.Imag;


        return temp;
    }

    void Print(){
        cout<<Real<<" + "<<Imag<<"i"<<endl;
    }
};

int main(){
    Complex h(90,2);

    // h.Print();
    Complex m(9,3);

    Complex k = m+h;

    k.Print();
    
}