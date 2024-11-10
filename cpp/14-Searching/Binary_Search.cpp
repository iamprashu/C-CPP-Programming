#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>nums{10,11,15,67,89,91,99};
    int size = nums.size();
    int search =91;

    int start = 0, end = nums.size()-1;

    while(start<=end){
        int mid = start + (end-start)/2;

        if(nums[mid] ==search){
            cout<<"Found"<<endl;
            break;
        }
        else if(nums[mid]<search)
        {
            start = mid+1;
        }

        else if(nums[mid] > search)
        {
            end = mid-1;
        }
    }

    return 0;
}