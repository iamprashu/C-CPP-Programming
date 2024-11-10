#include<iostream>
using namespace std;

bool BinarySearch(int arr[],int size, int target){
        int start=0,end=size-1,mid=0; 

        while(start<=end){
            mid = start+(end-start)/2;

            if(arr[mid]==target){
                return 1;
            }
            
            else if (arr[mid]<target)
            {
                start=mid+1;
            }
            else if(arr[mid]>target)
            {
                end=mid-1;
            }
            
        }

        return 0;

}

int main(){
    int arr[]={10,20,30,40,50,60,70,80,90,100,121,145};
    int target=145;
    int size=12;

    bool answer = BinarySearch(arr,size,target);

    answer ? cout<<"Found" : cout<<"Not Found";
    cout<<endl;

    return 0;
}