#include<bits/stdc++.h>
using namespace std;

int Pow(int number,int k){
    int result = 1;
    for(int i=0; i<k; i++){
        result *= number;
    }

    return result;
}

int getArms(int number){
    int sum = 0;
    int k = to_string(number).length();

    while(number>0){
        int temp = number % 10;
        sum += Pow(temp,k);
        number = number / 10;
    }
    return sum;
}

int main(){
    int number;
    cout<<"Please Enter Number :> ";
    cin>>number;

    getArms(number) == number ? cout<<"Yes It is An Armstrong Number"<<endl : cout<<"No it is not armstrong Number"<<endl;

    return 0;
}