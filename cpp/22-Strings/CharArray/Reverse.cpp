#include<bits/stdc++.h>
using namespace std;

int Length(char arr[]){
    int count=0;
    for(int i=0; arr[i]; i++){
        count++;
    }

    return count;
}

void ReverseString(char arr[]){
    int start = 0; int end = Length(arr)-1;

    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}


int main(){
    char arr[100];
    cout<<"Enter String to be Reversed :"<<endl;
    cin.getline(arr,100);

    ReverseString(arr);
    cout<<"Reversed String is : "<<arr<<endl;
    return 0;
}