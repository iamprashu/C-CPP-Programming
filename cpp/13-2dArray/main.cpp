#include<iostream>
using namespace std;

int main(){
    int arr[2][3]={
        {1,2,3},
        {4,5,6},
    };

   
    int row=2, col=3;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
        cout<<"Value in ( "<<i<<","<<j<<" ) = "<<arr[i][j]<<endl;
        }
        
    }

    return 0;
}