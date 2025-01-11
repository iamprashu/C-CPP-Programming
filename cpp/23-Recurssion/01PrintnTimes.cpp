#include<bits/stdc++.h>
using namespace std;

void PrintNTime(int n){
    if(n==0){
        // the base condition
        return;
    }else{
        PrintNTime(n-1);
        cout<<"Prashant "<<n<<endl;
    }
}


int main(){
    PrintNTime(8);

}