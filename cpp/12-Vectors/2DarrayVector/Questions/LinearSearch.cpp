#include<iostream>
#include<vector>
using namespace std;

bool Linear2DVector(vector<vector<int>>arr,int target){
    int row_size=arr.size();
    int col_size=arr[0].size();

    for(int row=0; row<row_size; row++){

        for(int col=0; col<col_size; col++){
            int current_value=arr[row][col];
            //this will return true if get the data
            if(current_value==target)
                return 1;
        }

    }
    //When the loops are completed it means that no return means no 
    //data found;
    return 0;
}

int main(){
    vector<vector<int>>arr={
        {1,2,3,4,5},
        {11,22,33,44,55},
        {121,123,1111,1123,1245}
    };

int target;
cout<<"Please Enter Number to Search :> "<<endl;
cin>>target;

bool answer =   Linear2DVector(arr,target);

  if(answer){
    cout<<target<<" is Present is the array ."<<endl;
  }else{
    cout<<target<<" is Not Present is the array ."<<endl;
  }

  return 0;
}