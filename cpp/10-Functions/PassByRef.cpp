#include<iostream>
using namespace std;

void SquareIT(int &lol){
    lol=lol*lol;
}

int main(){
    int number;
    cin>>number;

    cout<<"You Enterd "<<number<<endl;
    cout<<"Sending It to function pass by Reference."<<endl;
    cout<<"Before Function :> "<<number<<endl;
    SquareIT(number);
    cout<<"After Function :> "<<number;

    

    return 0;
}