#include<iostream>
using namespace std;

//Declaration of Function
int Sum(int,int); 
void PrintName();


//Main Function

int main(){
    cout<<"Enter Number :>"<<endl;
    int a,b;
    cin>>a;cin>>b;
    cout<<Sum(a,b)<<endl; //calling of function
    PrintName(); // Calling Void Function

    return 0;
} 

// Difining Functions

int Sum(int a ,int b){ 
    return a+b;
}  

void PrintName(){
    cout<<"A void Function is here."<<endl;
}