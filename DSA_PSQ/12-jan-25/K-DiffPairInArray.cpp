/*
Given an array of integers nums and an integer k, return the number of unique k-diff pairs in the array.

A k-diff pair is an integer pair (nums[i], nums[j]), where the following are true:

0 <= i, j < nums.length
i != j
|nums[i] - nums[j]| == k
Notice that |val| denotes the absolute value of val.
*/

#include<bits/stdc++.h>
using namespace std;

int findPairs(vector<int>& arr, int k){
    int size = arr.size();
    int i=0; int j = i+1;
    // as needed unique pairs so i am using a set data structure 
    // so that will make sure the pairs should be unique

    set<pair<int,int>>bucket;
    //sorting the array will make the algorithem works
    sort(arr.begin(),arr.end());

    while(j < size){// as j will always be +1 by i

        int difference = arr[j] - arr[i]; // no need to take abs value as the value at j will > value at i

        //now here is a intresting part that cases can be (negetive,all same,normal case)
        // to handle all case i am using a set of pair to save only unique pair
        // and i != j takes care that if both point to same index so no need to go in
        if(difference == k && i != j){

            bucket.insert({arr[i],arr[j]});
            i++;
            j++;
            
        }else if(difference > k){
            i++; //as i will less than j always
        }else{
            j++; //simple move
        }
    }

    // now we have all unique pairs in set just count and return
    return bucket.size(); // 0 if no element
}

int main(){
    vector<int>arr = {3,1,4,1,5};
    int k = 2;
    int right_answer = 2;

    if(findPairs(arr, k) == right_answer)  cout<<"Yes Correct Answer."<<endl;
    else cout<<"Wrong answer"<<endl;

    return 0;
}