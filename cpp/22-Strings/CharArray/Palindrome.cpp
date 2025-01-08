#include<bits/stdc++.h>
using namespace std;

int Length(char arr[]){
    int length=0;
    for(int i=0; arr[i]; i++){
        length++;
    }

    return length;
}


bool CheckPelindrom(char arr[]){
    int start=0,end=Length(arr)-1;

    while(start<=end){
        if(arr[start] != arr[end]){
            return false;
        }

        start++;end--;
    }

    return true;
}


int main(){
    char arr[199];
    cout<<"Enter String to check pelindrom :";
    cin.getline(arr,199);

    if(CheckPelindrom(arr)){
        cout<<"Yes it is Palindrom."<<endl;
    }else{
        cout<<"It is not Pelindrom."<<endl;
    }

    return 0;
}