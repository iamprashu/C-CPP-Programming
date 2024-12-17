#include<iostream>
using namespace std;

void Searchi2D(int arr[][4],int target){

    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            if(arr[i][j] == target){
                printf("Found At :> Row %d and Col %d.",i,j);
            }
        }
    }
    cout<<"Not found"<<endl;

}

int main(){
    int target = 5;
    int arr[][4] = {
        {1,2,3,4},{5,6,7,8},{9,10,11,12},{34,67,111,48}};
        Searchi2D(arr,target);
        return 0;
}