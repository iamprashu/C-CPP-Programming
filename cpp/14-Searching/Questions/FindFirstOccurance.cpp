#include<iostream>
using namespace std;

void FirstOcc(int nums[],int size, int target,int &index){
    int start=0;
    int end=size-1;
    int mid=0;
    

    while(start<=end){

        mid=start+(end-start)/2;
        //cout<<mid<<endl;

        if(nums[mid]==target){
            index = mid;

            //as we are looking for first occ so it will always be in the left of mid
            end = mid - 1;
        }

        if(target>nums[mid]){
            start  = mid +1 ;
        }

        if(nums[mid]>target){
            end = mid -1;
        }

    }
}


int main(){
    int nums[]={20,20,30,20,20,20,20,50,67};
    int size=9;
    int target=20;
    int indexOfF=-1;//this is for store and compute 

    FirstOcc(nums,size,target,indexOfF);

    cout<<indexOfF<<endl;

    return 0;
}