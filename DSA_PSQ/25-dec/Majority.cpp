#include<bits/stdc++.h>
using namespace std;


vector<int> findMajority(vector<int>& arr) {
        vector<int>answer;
        unordered_map<int,int>table;
        
        int occurance_should = arr.size() / 3;
        
        for(auto element:arr){
            table[element]+=1;
        }
        
        for(auto row : table){
            if(row.second > occurance_should){
                answer.push_back(row.first);
            }
        }
        
        return answer;
}

int main(){
    vector<int>arr={1,3};

    vector<int>ans = findMajority(arr);

    for(auto p :ans){
        cout<<p<<""
    }
}