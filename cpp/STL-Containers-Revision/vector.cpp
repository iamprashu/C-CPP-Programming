#include<iostream>
#include<vector>
using namespace std;


int main(){
    vector<int>arr;
    vector<int>arr1(10);
    vector<int>arr2(10,200);

    //2d Vector

    vector<vector<int>>Arr2d;
    vector<vector<int>>Arr2d1(10);//2d vector with size 10 row;
    vector<vector<int>>Arr2d2(10,vector<int>(5,901));

    //Iterator in vector
    vector<int>::iterator it = arr1.begin();

    while(it != arr.end()){
        cout<<*it<<endl;
        it ++;
    }

    
    return 0;
}