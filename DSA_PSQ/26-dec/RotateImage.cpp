#include<bits/stdc++.h>
using namespace std;

void RotateImage(vector<vector<int>>& arr){
    int rowSize = arr.size();
    int colSize = arr[0].size();

    //1 transpose

    for(int row=0; row<rowSize; row++){
        for(int col = row; col<colSize; col++){
            swap(arr[row][col],arr[col][row]);
        }
    }

    for(int row = 0; row<rowSize; row++){
        int start=0 , end = rowSize-1;{
            while(start<=end){
                swap(arr[row][start],arr[row][end]);
                start++;
                end--;
            }
        } 
    }
}

int main(){

    vector<vector<int>>arr = {{1,2,3},{4,5,6},{7,8,9}};
    int rowSize = arr.size();
    int colSize = arr[0].size();

    RotateImage(arr);

    for(int i=0; i<rowSize; i++){
        for(int j=0; j<colSize; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;

}