//Given an array of positive integers arr[], return the second largest element from the array. If the second largest element doesn't exist then return -1.
#include<bits/stdc++.h>
using namespace std;

int getSecondLargest(vector<int> &arr) {
    int firstLargest = -1;
    int SecondLargest = -1;
    int size = arr.size();

    for(int i=0; i<size; i++){
        if(arr[i]>firstLargest){
            SecondLargest = firstLargest;
            firstLargest = arr[i];
        }else if(arr[i] > SecondLargest && arr[i] != firstLargest){
            SecondLargest = arr[i];
        }
    }

    return SecondLargest;
}

int main(){
    vector<int>arr={1,2,3,112,1,1,6,90,21};
    cout<<"Second Largest Element is :> "<<getSecondLargest(arr);

    return 0;
}