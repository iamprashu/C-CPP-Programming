#include<iostream>
using namespace std;

int main(){
    int number;
    cout<<"Please Enter Number :> ";
    cin>>number;

    int Fectorial=1;

    for(int i=number; i>0; i--){
        Fectorial = Fectorial*i;
    }

    cout<<"The Fectorial of"<< number<< " is :> "<<Fectorial<<endl;
}