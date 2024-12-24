#include<bits/stdc++.h>
using namespace std;

vector<int> commonElements(vector<int> &arr1, vector<int> &arr2,vector<int> &arr3) {
        // Code Here
        int i= 0,j =0, k = 0;
        vector<int>answer;
        
        while(i<arr1.size() && j<arr2.size(), k<arr3.size()){ 
            if(arr1[i] == arr2[j] && arr2[j] == arr3[k]){
                answer.push_back(arr1[i]);
                i++;j++;k++;
            }else if(arr1[i]<arr2[j]){
                i++;
            }else if(arr2[j]<arr3[k]){
                j++;
            }else{
                k++;
            }
        }
        
        return answer;
}

int main(){
    vector<int>arr1 = {10,16,21,43,55,57,73,90,95};
    vector<int>arr2 = {22,54,56,63,77,95};
    vector<int>arr3 = {5,9,15,17,40,42,55,71,95};

    vector<int> answer = commonElements(arr1,arr2,arr3);

    // 
    for(auto a: answer){
        cout<<a<<" ";
    }
    cout << endl;
}