#include<bits/stdc++.h>
using namespace std;

int FindSubs(string full, string pattern){
        int full_size = full.length();
        int pattern_size = pattern.size();

        for(int i=0; i<full_size; i++){
            if(full[i] == pattern[0]){
                int j=0;
                while(j<pattern_size){
                    if(full[i+j] != pattern[j]){
                        break;
                    }
                    j++;
                }
                
                if(j==pattern_size){
                    return i;
                }
            }
        }
    return -1;
}

string removeOccurrences(string &s, string part) {
       checkPalindrome() 
}


int main(){
    string s = "", part = "abc";
    cout<<FindSubs(s,part);
}