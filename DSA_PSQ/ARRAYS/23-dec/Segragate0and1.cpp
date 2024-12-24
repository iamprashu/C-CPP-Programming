#include<bits/stdc++.h>
using namespace std;

void segregate0and1(vector<int> &arr) {
    int start = 0, end = arr.size()-1;
        
    while(start < end){
        if(arr[start]==1 && arr[end]==0){
            //swaping
            swap(arr[start],arr[end]);
            start++;end--;
        }else if(arr[start]==1 && arr[end]==1){
            end--;
        }else{
            start++;
        }
    }
}


int main(){
    vector<int>arr = {0,1,0,1,0,0,0,0,1,1,1,1,1,1,1,1,0,0,0,1,0,0};
    segregate0and1(arr);

    for(auto element: arr){
        cout<<element<<" "; 
    }

    return 0;
}