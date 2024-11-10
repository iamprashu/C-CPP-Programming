#include<iostream>
#include<vector>
using namespace std;

void KadaneAlgo(vector<int>nums){

    int answer = INT16_MIN;
    int sum = 0;
    for(int i=0; i<nums.size(); i++){
        sum = nums[i]+sum;
        if(answer<sum){
            answer = sum;
        }
        if(sum<0){
            sum = 0;
        }
    }
    cout<<answer;
}


int main(){ 
    vector<int>nums={-2,1,-3,4,-1,2,1,-5,4};

    KadaneAlgo(nums);

    return 0;
}