#include<iostream>
using namespace std;

pair<int,int> count(int array[], int size){
    int z = 0, o=0;

    for(int i=0; i<size; i++){
        if(array[i] == 1){
            o++; //incrementing o if one there
        }
        if(array[i]==0){
            z++;
        }
    }
    pair<int,int>ans;
    ans.first = z;
    ans.second = o;
    return ans;
}

int main(){
    int array[] = {1,2,3,0,1,0,1,0,0,0,1,1,1,1,1,1,2,2,0,0};

    int size = sizeof(array) / sizeof(array[0]);

    pair<int,int>ans;

    ans = count(array,size);

    printf("The number of Zeros in array are: %d\nAnd Number of ones are :%d..",ans.first,ans.second);

    return 0;
}