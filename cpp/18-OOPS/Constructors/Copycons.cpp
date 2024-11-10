#include<iostream>
using namespace std;

class Bank{
    public:
    int Code;
    string name;
    Bank(){

    }

    Bank(Bank &object){
        this->Code = object.Code;
        this->name = object.name;

    }
};

int main(){

    Bank bank;
    bank.Code = 1299903;
    bank.name = "RBID";

    cout<<bank.Code<<endl;

}