#include<iostream>
using namespace std;


int main(){
    int number=12345678;

    while(number!=0){
        int digit = number %10;
        cout<<digit<<" ";
        number/=10;
    }

    return 0;
}