#include<bits/stdc++.h>
using namespace std;

void BubbleSort(vector<int>& arr){
    int n = arr.size();

    bool swapped;

    for(int i=0; i<n; i++){
        swapped = false;
        for(int j=0; j<n-i-1; j++){
            //if current element is greater than next element
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
        }
        // if the above inner loop no swapping done means the whole array is sorted
        if(!swapped){
            break;
        }
    }
}

int main(){
    vector<int>arr={1,7,2,0,3,9};
    BubbleSort(arr);
    for(auto element:arr){
        cout<<element<<" ";
    }
    return 0;
}