#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int>nums={1,2,3,4,5,6,7,8,9};

    vector<int>::iterator runner = nums.begin();

    nums.erase(nums.begin()+2,nums.end()-4);

   //delete complete vector nums.clear();

    while (runner != nums.end())
    {
         cout<<*runner<<" ";
         runner++;
    }
    
}