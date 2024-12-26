#include<iostream>
using namespace std;

int reversed(int number){
    int reversed = 0;

    while(number){
        reversed *= 10;
        reversed += number%10;

        number /= 10; 
    }

    return reversed;
}

int main(){

    int number;
    cout<<"Please Enter Number :> ";
    cin>>number;

    reversed(number) == number ? cout<<"Yes"<<endl : cout<<"No"<<endl;

    return 0;

}