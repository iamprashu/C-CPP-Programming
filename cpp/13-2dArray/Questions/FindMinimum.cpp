#include<iostream>
using namespace std;

int FindMinimum(int arr[][5],int row_size, int col_size){
    int answer = INT32_MAX;
    for(int row=0; row<row_size; row++){

        for(int col=0; col<col_size; col++){
            int current = arr[row][col];
            if(current<answer){
                answer=current;
            }
        }
    }

    return answer;
}


int main(){
    int arr[5][5]={
        {1,2,3,4,5},
        {-12,0,-120,12,1},
        {2,3,4,7,8},
        {12,22,34,53,54},
        {100,222,213,-8,23}
    };
    int row_size=5;
    int col_size=5;

    int answer = FindMinimum(arr,row_size,col_size);
    cout<<"The Minimum Value is :> "<<answer<<endl;
    return 0;
}