#include<bits/stdc++.h>
using namespace std;


int main(){
    char arr[100];
    cin.getline(arr,100);

    cout<<"Calculating Length"<<endl;
    int count=0;
    for(int i=0; arr[i]; i++){
        count++;
    }

    cout<<"Length is "<<count<<endl;
    return 0;
}
