#include<bits/stdc++.h>
using namespace std;

void SelectionSort(vector<int>&arr){
        for(int i=0; i<arr.size()-1; i++){
            int minIndex = i;
            for(int j = i+1; j<arr.size(); j++){
                if(arr[j] < arr[minIndex]){
                    minIndex = j;
                }
            }
            swap(arr[i],arr[minIndex]);
        }
}

int main(){
    vector<int>arr={0,2,1,3,4,9,2,2,10,2};
    SelectionSort(arr);

    for(auto element:arr){
        cout<<element<<" ";
    }
    
    return 0;
}