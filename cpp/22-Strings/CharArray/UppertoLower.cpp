#include<bits/stdc++.h>
using namespace std;

void LowerToUpper(char arr[]){
    for(int i=0;arr[i]; i++){
        if(arr[i] >= 'a' && arr[i]<='z'){
            arr[i] = arr[i] - 'a';
            arr[i] += 'A';
        }
    }
}

void UppertoLower(char arr[]){
    for(int i=0;arr[i]; i++){
        if(arr[i] >= 'A' && arr[i]<='Z'){
            arr[i] = arr[i] - 'A';
            arr[i] += 'a';
        }
    }
}

int main(){
    char arr[100];
    cin.getline(arr,100);

   cout<<"String Before :> "<<arr<<endl;
    //    UppertoLower(arr);
    LowerToUpper(arr);
   cout<<"After Function "<<arr<<endl;

   return 0;
}
