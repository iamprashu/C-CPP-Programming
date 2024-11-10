#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

void Doubleup(int arr){
    cout<<(2 * arr)<<" ";
}

bool FindEven (int ans){
    return ans % 2 == 0;
}

int main(){
    vector<int>arr={10,20,30,40,50,60,70,80,90,90,100,100};

    

    //for each algo

    //for_each(arr.begin(),arr.end(),Doubleup);

    //Find Algo

    //  int target = 5;

    // vector<int>::iterator it = find(arr.begin(),arr.end(),target);

    // cout<<*it<<endl;
    // //------------------------------------------------------------------------------------

    // //find_if algo

    // vector<int>::iterator it2 = find_if(arr.begin(),arr.end(),FindEven);

    // cout<<*it2<<endl;

    // //-----------------Count-----------------------

    // int answer = count(arr.begin(),arr.end(),target);

    // cout<<answer<<endl; 

    //---------------------------Sort----------------------------

    // sort(arr.begin(),arr.end());

    // for(int ind:arr){
    //     cout<<ind<<" ";
    // }

    //reverse--------------------------
    cout<<endl;
    // reverse(arr.begin(),arr.end());

    // for(int rem:arr){
    //     cout<<rem<<" ";
    // }

    //Rotate Right----------------------
    // rotate(arr.begin(),arr.begin()+3, arr.end());
    
    // for(int run:arr){
    //     cout<<run<<" ";
    // }

    auto it = unique(arr.begin(),arr.end());

    //erase after itrator elements
    arr.erase(it,arr.end());

    for(int q :arr){
        cout<<q<<" ";
    }
    

    return 0;
} 

