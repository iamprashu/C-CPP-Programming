#include<iostream>
using namespace std;

int main(){
    bool c1=true, c2=true, c3=false;

    if(c1 && c2 && c3){
        cout<<"All condition true";
    }else{
        cout<<"Some Condition are False"<<endl;
    }

    if(c1||c2||c3){
        cout<<"No matter if one true than i am always true"<<endl;
    }

    if(!c3){
        cout<<"Sarkar Palat di";
    }else{
        cout<<"Ha bhai";
    }

    return 0;
}