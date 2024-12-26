#include<bits/stdc++.h>
using namespace std;

int GetGcd(int a,int b){
    while(a > 0 && b > 0){
        if(a < b){
            b = b - a;
        }else{
            a = a - b;
        }
    }
    return a>b ? a : b;
}

int main(){
    int a,b;
    cout<<"Please Enter 2 Numbers :> ";
    cin>>a>>b;

    cout<<"Answer is :> "<<GetGcd(a,b)<<endl;

    return 0;
}