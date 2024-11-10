#include<iostream>
using namespace std;

int main(){
    int height;
    int weight;

    cout<<"Enter Hight in Feet :> ";
    cin>>height;
    cout<<"Enter Weight in KG :> ";
    cin>>weight;

    if(height>5.5){
        if(weight<80){
            cout<<"Well and fit";
        }else{
            cout<<"Na hoga";
        }
    } 


    return 0;
} 