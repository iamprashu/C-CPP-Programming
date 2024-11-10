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

void LastOcc(int arr[],int size, int target, int &answer){
    int start =0, end=size-1, mid = 0;

    while(start<=end){

        cout<<"Start = "<<start;cout<<" mid = "<<mid<<" end = "<<end<<endl;
        mid = start + (end-start)/2;


        if(arr[mid]==target){
            answer = mid;

            start = mid + 1;
        }

        if(target < arr[mid]){
            end = mid-1;
        }

        if(target>arr[mid]){
            start = mid+1;
        }

        
    }
}

int main(){
    int arr[]={1,2,3,4,50,50,50,60,70};
    int size=9;
    int target=50;
    int answer = -1; 

    LastOcc(arr,size,target,answer);

    cout<<answer<<endl;

    return 0;
}