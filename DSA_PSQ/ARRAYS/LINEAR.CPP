#include<iostream>
using namespace std;

bool FindTarget(int arr[], int size, int target){
    for(int i=0; i<size; i++){
        if(arr[i] == target){
            return true;
        }
    }

    return false;
}

int main(){
    int array[] = {33,22,0,12,46,7,9,2};

    int target = 2;

    FindTarget(array,8,target) ? cout<<"Found" : cout<<"Not Found";

    return 0;

}