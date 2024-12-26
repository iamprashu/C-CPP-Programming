//Wave print a matrix

#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<vector<int>> arr = {{2,30,7},
                                {3,21,8},
                                {4,23,9},
                                {99,98,76}};
    int n = arr.size();
    int p = arr[0].size();
    cout<<n<<" "<<p<<endl;

    for(int i=0; i<n-1; i++){
        if((i & 1) == 0){
            for(int j=0; j<n; j++){
                cout<<arr[j][i]<<" ";
            }
        }else{
            for(int j=n-1; j>=0; j--){
                cout<<arr[j][i]<<" ";
            }
        }
    }


    return 0;
} 