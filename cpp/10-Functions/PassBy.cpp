#include<iostream>
using namespace std;

int main(){
    //reference
    int number;
    number=100;
    int &prashu=number;

    prashu=190;
    cout<<number;
    cout<<prashu;
}