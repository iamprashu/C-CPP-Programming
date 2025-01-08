#include<bits/stdc++.h>
using namespace std;


int main(){
    char arr[100];
    cout<<"Enter Name: ";
    // cin>>arr;

    cin.getline(arr,100);

    cout<<"Hello "<<arr<<"."<<endl; // only give output for prashant joshi -> Prashant

    cout<<"Checking Ascii Values for String"<<endl;

    for(int i=0; arr[i]; i++){
        cout<<arr[i]<<" ";
    }

    //80 114 97 115 104 97 110 116 0 last space got 0 as it is a null character
    return 0;

}