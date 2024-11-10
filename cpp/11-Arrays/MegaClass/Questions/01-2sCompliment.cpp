#include<iostream>
#include<vector>
using namespace std;

vector<int>GetComp(vector<int> arr){
    //one's compliment
    int n = arr.size();
    vector<int> towscomp(n, 0);

    for(int i = n-1; i>=0; i--){
        // towscomp[i] = arr[i] == 0 ? 1 : 0;
        if(arr[i]==0){
            towscomp[i]=1;
        }
        
        else if (arr[i]==1)
        {
            towscomp[i]=0;
        }
        
    }

    // adding one

    int carry=1;

    for(int i=towscomp.size()-1; i>=0; i--){
        int sum = towscomp[i] + carry;
        towscomp[i] = sum % 2;
        carry = sum/2;
    }

    if(carry){
        towscomp[0]=carry;
    }

    return towscomp;
}

int main(){
    vector<int>arr={1,1,1,0,1,0,1,1,0};

    vector<int>TowsComp = GetComp(arr);

    for(int i=0; i<TowsComp.size(); i++){
        cout<<TowsComp[i]<<" ";
    }
    cout<<endl;

    return 0;
}