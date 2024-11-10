#include<iostream>
using namespace std;


int main(){
    int arr[]={-1,2,3,4,5,0,9,120,-1200};
    int size = sizeof(arr)/sizeof(arr[0]);

    for(int i=0; i<size; i++){

        int MiniMumIndex = i;

        for(int j=i+1; j<size; j++){

            if(arr[j]<arr[MiniMumIndex]){
                MiniMumIndex = j;
            }
        }
        //after finding the minimum element swaping it

        if(MiniMumIndex != i){
            //if the minimum index is not equal to the ith index
            //that means we have the minimum element for that position
            int temp = arr[i];
            arr[i] = arr[MiniMumIndex];
            arr[MiniMumIndex] =  temp;
        }
    }

    for(auto element: arr){
        cout<<element<<" ";
    }
    return 0;
}