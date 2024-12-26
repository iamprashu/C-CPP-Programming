#include<bits/stdc++.h>
using namespace std;

// int getMinDiff(vector<int> &arr, int k) {
//        int minimum = INT_MAX;
//        int maximum = 0;
       
//        for(int i=0; i<arr.size(); i++){
//            if(arr[i] <= (k*k)){
//                arr[i] += k;
//                cout<<"added "<<k<<endl;
//            }else{
//                arr[i] -= k;

//                cout<<"Diducted "<<k<<endl;
//            }
           
//            minimum = min(minimum,arr[i]);
//            maximum = max(maximum,arr[i]);
//        }
       
//        return maximum-minimum;
}

int main(){
    vector<int>arr = {2,4,3,9,9,10,9,7,1,2};

    cout<<getMinDiff(arr,4);
}