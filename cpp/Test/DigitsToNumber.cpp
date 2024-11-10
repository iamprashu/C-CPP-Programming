#include<iostream>
using namespace std;

int main(){
    int number=0;int length;
    cout<<"Enter Length of number"<<endl;
    cin>>length;
    int runner = 1;

    while (runner<=length)
    {
        int digit ;
        cout<<"Enter Digit :> " ;
        cin>>digit;

        number = number * 10 + digit;

        runner++;

    }

    cout<<"The Number is >> "<<number<<endl;

    return 0;
    
}