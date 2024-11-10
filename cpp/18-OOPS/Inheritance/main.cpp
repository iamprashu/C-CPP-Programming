#include<iostream>
using namespace std;


class Bank{
    protected:

    int id;

    public:
    Bank(){

    }
    Bank(int id){
        this->id = id;
    }
};

class hdfc : public Bank{
    public:
    string name;
    int BranchCode;
    int cash;

    hdfc(){

    }

    hdfc(int id, string name, int BranchCode, int cash):Bank(id){
        this->id = id;
        this->BranchCode = BranchCode;
        this->name = name;
        this->cash = cash;
    }


    void Print(){
        cout<<"Id: "<<id<<endl;
        cout<<"Branch Code: "<<BranchCode<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Cash: "<<cash<<endl;

    }
};


int main(){
    hdfc hd(12,"HDFC",12990,12874);

    
    hd.Print();
    return 0;
}