#include<bits/stdc++.h>
using namespace std;

int factoaial(int number){
    if(number<1){
        return 1;
    }else{
        return number *= factoaial(number-1);
    }
}

int main(){
    cout<<factoaial();
}