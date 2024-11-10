#include<iostream>
using namespace std;

void Func(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}

int main(){
    int n;
    cin>>n;

    int *lol = new int[n];

    Func(lol,n);

    return 0;
}