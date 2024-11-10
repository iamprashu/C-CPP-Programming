#include<iostream>
using namespace std;

int main(){
    
    int arr[2][3];
    int row=2, col=3;

    for (int i = 0; i < row; i++)
    {
        for (int  j= 0;  j< col; j++)
        {
            cout<<"Taking Input for row "<<i<<" and col "<<j<<endl;
            int number;
            cin>>number;
           
            arr[i][j]=number;
        }
        
    }
    for (int i = 0; i < row; i++)
    {
       for (int j = 0; j < col; j++)
       { 
            cout<<arr[i][j]<<endl;
       }
       
    }
    
    

}