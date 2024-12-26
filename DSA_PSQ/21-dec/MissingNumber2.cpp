#include<bits/stdc++.h>
using namespace std;

    
int missingNumber(vector<int>arr){
   int start=0,mid=0,end=arr.size()-1;

   sort(arr.begin(),arr.end());
   int answer = -1;

   while(start <= end){
        mid = start+(end-start)/2;

        if(arr[mid] != mid){
            answer = mid;
            
            end = mid-1;
        }

        if(arr[mid] == mid){
            start = mid+1;
        }
   }

   if(answer == -1){
    answer = arr.size();
   }

   return answer;

}

int main(){
    vector<int>arr = {0,1};
    cout<<"Missing Element is :> "<<missingNumber(arr)<<endl;

    return 0;

}