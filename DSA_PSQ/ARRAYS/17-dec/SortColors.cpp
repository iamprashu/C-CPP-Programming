#include<iostream>
using namespace std;

void SortColor(int arr[],int size){
    int start=0,mid=0,end=size-1;

    while(mid<=end){
        switch(arr[mid]){
            case 0: swap(arr[mid],arr[start]);
            start++;mid++;
            break;

            case 1:
            mid++;
            break;

            case 2: swap(arr[end],arr[mid]);
            end--;
            break;
        }
    }
}
int main(){
    int arr[] = {0};
    int size = sizeof(arr)/sizeof(arr[0]);

    SortColor(arr,size);

    for(auto i:arr){
        cout<<i<<" ";
    }

    return 0;
}