//Given an array nums containing n distinct numbers in the range [0, n], return the only number in the range that is missing from the array.
#include<bits/stdc++.h>
using namespace std;

int missingNumber(vector<int>arr){
    int size = arr.size();
    int sumofn = size*(size+1)/2;

    int arraySum = 0;

    vector<int>:: iterator it;

    for(it = arr.begin(); it != arr.end(); it++){
        arraySum += *it;
    }

    return sumofn - arraySum;
}

int main(){
    vector<int>arr = {0,1,2,4,8,6,5,7};
    cout<<"Missing Element is :> "<<missingNumber(arr)<<endl;

    return 0;

}