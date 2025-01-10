#include<bits/stdc++.h>
using namespace std;


int main(){
    set<int>oset;
    int arr[] = {990,212210,9,2,4,34,4,9,11,90};

    for(int element:arr){
        oset.insert(element);
    }

    set<int> :: iterator it = oset.begin();

    while(it != oset.end()){
        cout<<*it<<" ";
        it++;
    }
    return 0;
}