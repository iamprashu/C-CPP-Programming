#include<bits/stdc++.h>
using namespace std;

void InsertionSortAsec(vector<int>& arr){
    int n = arr.size();

    for(int i=1; i<n; i++){
        int key = arr[i];
        int j = i-1;

        while(j>=0 && arr[j]<key){
            arr[j+1] = arr[j];
            j=j-1;
        }

        arr[j+1] = key;
    }
}


int main(){
    vector<int>arr = {44,55,22,33,11,0};

    InsertionSortAsec(arr);

    for(auto element : arr){
        cout<<element<<" ";
    }

    return 0;
}