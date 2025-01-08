#include<bits/stdc++.h>
using namespace std;

void ReplaceChar(char a, char b,char arr[]){
    for(int i=0; arr[i]; i++){
        if(arr[i] == a){
            arr[i] = b;
        }
    }
}

int main(){
    char arr[100];
    cin.getline(arr,100);

    ReplaceChar('a','c',arr);

    for(int i=0; arr[i]; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}