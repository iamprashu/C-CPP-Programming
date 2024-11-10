#include<iostream>
using namespace std;


int main(){
    int arr[]={1,2,3,4,5};
    int *p_arr = arr;

    cout<<*(arr+0)<<" "<<*(arr+1)<<*(arr+2)<<endl;
}