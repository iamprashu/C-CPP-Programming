#include<iostream>
using namespace std;

void WithoutRef(int number){
    number = 1000000;
}

void WithRef(int &number){
    number=10222;
}

int main(){
    int number=10;

    WithoutRef(number);

    cout<<"After No reference :> "<<number<<endl;

    WithRef(number);

    cout<<"After Reference :> "<<number<<endl;

    return 0;
}