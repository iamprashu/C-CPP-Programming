#include<bits/stdc++.h>
using namespace std;

vector<int> GetDivisors(int number){
    int n = sqrt(number);
    vector<int>arr;

    for(int i=1; i<=n; i++){
        if(number % i == 0){
            arr.push_back(i);

            if(i != (number / i)){
                arr.push_back(number/i);
            }
        }
    }

    return arr;
}

int main(){

    int number=36;
    vector<int>ans = GetDivisors(number);

    for(auto element : ans){
        cout<<element<<" ";
    }
    return 0;
}