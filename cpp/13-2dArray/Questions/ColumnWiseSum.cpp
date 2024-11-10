#include<iostream>
using namespace std;

void ColWiseSum(int arr[][3], int Row_Size,int Col_Size){
    for (int col = 0; col < Col_Size; col++)
    {
        int sum=0;
        for (int row = 0; row < Row_Size; row++)
        {
           sum= sum + arr[row][col];
        }
        cout<<"Sum of Col "<<col<<" = "<<sum<<endl;
        
    }
    
}

int main(){
    int arr[3][3]={
        {10,20,30},
        {100,120,146},
        {98,88,77}
        };
    int Row_Size=3;
    int Col_Sieze=3;

    ColWiseSum(arr,Row_Size,Col_Sieze);

    return 0;
}