#include<iostream>
using namespace std;

void SortThem(int arr[], int count){

    int zero=0;
    int one=0;

    for (int i = 0; i < count; i++)
    {
        if(arr[i]==0){
            zero++;
        }else{
            one++;
        }
    }

    for (int i = 0; i < count; i++)
    {
        if(i<zero){
            arr[i]=0;
        }else{
            arr[i]=1;
        }
    }

    for (int i = 0; i < count; i++)
    {
       cout<<arr[i]<<endl;
    }
    
}

int main(){
    int arr[]={0,0,1,1,1,0,1,0,1};
    int siz = size(arr);

    SortThem(arr,siz);

    return 0;


}