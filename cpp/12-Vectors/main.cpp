#include<iostream>
#include<vector>
using namespace std;

int PrintF(int arr[],int size){

}


int main(){
    vector<int>lol;
    

    for (int i = 0; 1 > 0; i++)
    {
      int number;
      cin>>number;
      lol.push_back(number);
      if (number==0)
      {
       break;
      }
    }
    int size=lol.size();
    cout<<"You have filled an vector by :> "<<size<<" values."<<endl;

    for (int i = 0; i < size; i++)
    {
       cout<<lol[i]<<" ";
    }
    
    
} 