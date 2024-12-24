#include<bits/stdc++.h>
using namespace std;

void SortThat(int arr[], int size){
    int start=0,end=size-1;

   while (start<=end)
        {
           if(arr[start] == 1){
                swap(arr[start],arr[end]);
                end--;
           }else if(arr[end] == 0){
                swap(arr[start],arr[end]);
                start++;
           }
           if(arr[start]==0){
               start++;
              
           }else if(arr[end] == 1){
               end--;
           }
        }
}

int main(){
    int arr[] = {0,0,1,1,0};
    int size = sizeof(arr) / sizeof(arr[0]);

    SortThat(arr,size);

    for(auto element : arr){
        cout<<element<<" ";
    }

    return 0;
}