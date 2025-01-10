#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1,2,1,1,2,2,2,123,1,231,4,1234,12,34,1234,1234,12};
    unordered_set<int>sets;

    for(int element:arr){
        sets.insert(element);
    }

    // for(int element :sets){
    //     cout<<element<<" ";
    // }

    // finding in set
    if(sets.find(2) != sets.end()){
        cout<<"Yes it is in set"<<endl;
    }
    return 0;
}