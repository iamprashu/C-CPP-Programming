#include<iostream>
using namespace std;

void RowWiseSum(int arr[][3], int Row_Size,int Col_Size){
    for (int i = 0; i < Row_Size; i++)
    {
        int sum=0;
        for (int j = 0; j < Col_Size; j++)
        {
           sum= sum + arr[i][j];
        }
        cout<<"Sum of Row "<<i<<" = "<<sum<<endl;
        
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

    RowWiseSum(arr,Row_Size,Col_Sieze);

    return 0;
}