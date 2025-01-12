#include<bits/stdc++.h>
using namespace std;

bool CheckPalindrom(string &s,int start,int end){
    //this is the base case
    cout<<"Start is "<<s[start]<<" -> end is "<<s[end]<<endl;
    if(s[start]!=s[end]){
        return false;
    }

    if(start >= s.length()/2)
        return true;

    return CheckPalindrom(s,start+1,end-1);
}


int main(){
    string s = "asaa";
    int start=0,end=s.length()-1;

    if(CheckPalindrom(s,start,end)){
        cout<<"Yess it is a Palindrom."<<endl;
    }else{
        cout<<"No it's not a Palindrom."<<endl;
    }
}

