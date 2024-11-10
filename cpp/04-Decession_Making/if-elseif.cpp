#include<iostream>
using namespace std;

int main(){
    int marks;
    cout<<"Enter Marks :> ";
    cin>>marks;

    if(marks>90){
        cout<<"A Grade.";
    }else if (marks>80)
    {
        cout<<"B Grade";
    }else if(marks > 70){
        cout<<"C Grade";
    }else{
        cout<<"Fail.";
    }
    
    return 0;

}