#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<vector<int>> arr(4,vector<int>(3,5555));
    int row_size= arr.size();
    int col_size= arr[0].size();

    //printing vector

    for(int row=0; row<row_size; row++){
        for(int col=0; col<col_size; col++){
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    }
    return 0;

}