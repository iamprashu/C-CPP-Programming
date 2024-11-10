#include<iostream>
using namespace std;

int main(){
    int num=5;

    // pre increment 
    cout<<++num<<endl;

    //Post increment
    num =5;
    cout<<num++;
    cout<<endl<<"After increment :> "<<num;

    return 0;
}