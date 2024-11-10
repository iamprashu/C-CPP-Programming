#include<iostream>
using namespace std;


int evenOdd(int number){
    if(number&1){
        return 0;
    }else{
        return 1;
    }
}

int main(){
    int number;
    cin>>number;

    if(evenOdd(number)){
        cout<<number<<" is Even."<<endl;
    }else{
        cout<<number<<" is odd."<<endl;
    }


    return 0;


}
