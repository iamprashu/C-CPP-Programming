#include<iostream>
using namespace std;


void prashu(){
    cout<<"Hello Prashu "<<endl;
}

namespace prashant{
    void prashu(){
        cout<<"Namespace Prashu"<<endl;
    }
}

int main(){

    prashu(); //calling global 

    prashant::prashu(); //calling from prashant namespace

    return 0;

}