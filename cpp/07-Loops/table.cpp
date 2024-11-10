#include<iostream>
using namespace std;

int main(){
    int number;
    cout<<"Please Enter number for Table :> ";
    cin>>number;
    cout<<"Printing Table of "<<number<<endl<<endl;
    
    for(int i=1; i<=10; i++){
        cout<<number<<" x "<<i<<" = "<<number*i<<endl;
    }
    return 0;
}