#include<iostream>
using namespace std;

int main(){
    int** arr[10];

    int *lev_1[10];

    int final_arr[10]={990,10,20,30,40,50,60,70,80,90};

    lev_1[0] = final_arr;

    cout<<*(*(lev_1+1)+1)<<endl;

    **arr = lev_1[0];

    cout<<*(*(*(arr+1)+0)+1)<<endl;

}
