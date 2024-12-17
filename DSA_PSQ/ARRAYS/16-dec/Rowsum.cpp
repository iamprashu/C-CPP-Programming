#include<iostream>
using namespace std;

int RowSum(int arr[][4]){
    int sum = 0;

    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            sum += arr[i][j];
        }
    }

    return sum;
}

int ColSum(int arr[][4]){
    int sum = 0;

    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            sum += arr[j][i];
        }
    }

    return sum;
}

int main(){
    int arr[][4] = {
        {1,2,3,4},{5,6,7,8},{9,10,11,12},{34,67,111,48}};

        int Sum;
        Sum = RowSum(arr);
        // Sum = ColSum(arr);
        

        cout<<Sum<<endl;


        return 0;
}
