#include<iostream>
#include<algorithm>
using namespace std;


int main(){
    int arr[]={10,20,30,40,50,60,70,80,90,100,121,145};
    int target=145;
    int size=12;

    bool answer = binary_search(arr,arr+size,target);

    answer ? cout<<"Found" : cout<<"Not Found";
    cout<<endl;

    return 0;
}