#include<iostream>
using namespace std;

class Bank{

    public:
    string name;
    int branchCode;

    //Default constructor
    Bank(){
        cout<<"Constructor is called and object created in memory."<<endl;
    }

    Bank(string name, int branchCode){
        cout<<"Parameteraised Constructor is called and object created in memory and all the values are stored."<<endl;

        this->name = name;
        this->branchCode = branchCode;
    }

    void PrintDetails(){
        cout<<"Bank Name: "<<name<<endl;
        cout<<"Branch Code: "<<branchCode<<endl;
    }
};

int main(){
    Bank bank("Prashant Bank",8773);

    bank.PrintDetails();
    return 0;
}