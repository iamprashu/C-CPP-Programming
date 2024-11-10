#include<iostream>
using namespace std;

class Bank{

    public:
    string name;

    //Default constructor
    Bank(){
        cout<<"Constructor is called and object created in memory."<<endl;
    }
};

int main(){
    Bank bank;
    return 0;
}