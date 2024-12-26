#include<iostream>
using namespace std;

void ExtremePrints(int array[],int size){
    int i=0,j=size-1;

    while(i<=j){
        if(i==j){
            printf("%d ",array[j]);
        }else{
            printf("%d %d ",array[i],array[j]);
        }
        i++;j--;
    }
}

int main(){
    int array[] = {10,20,30,40,50,60,70,80};

    int size = sizeof(array) / sizeof(array[0]);

    ExtremePrints(array,size);

    return 0;

}