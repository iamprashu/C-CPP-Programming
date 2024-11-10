#include<iostream>
#include<vector>
using namespace std;


int main(){
    //Creation
    vector<int>marks;

    //length
    vector<int>miles(10);

    //length with values
    vector<int>distance(10,15);

    vector<int>check;
    check.reserve(10);

   // cout<<*(distance.begin())<<endl;

    marks.push_back(10);
    marks.push_back(20);
    marks.push_back(30);
    marks.push_back(40);

    cout<<"Size :> "<<marks.size()<<endl;

    //Remove

    marks.pop_back();
    cout<<"removed"<<endl;

    cout<<"Size :> "<<marks.size()<<endl;

    cout<<"Front "<<marks.front()<<endl;
    cout<<"End "<<marks.back()<<endl;

    //check empty

    if(marks.empty()){
        cout<<"Yes Empty"<<endl;
    }else{
        cout<<"Not Empty "<<endl;

    }

    cout<<"At 2 -> "<<marks.at(2)<<endl;

    cout<<"Capacity -> "<<marks.capacity()<<endl;

    cout<<"Reserving Capacity -> "<<check.capacity()<<endl;

    cout<<"Maximum Size -> "<<marks.max_size()<<endl;

    // marks.clear();
 
    // cout<<"Size After Clear :> "<< marks.size()<<endl;

   // marks.erase(marks.begin(),marks.end()-1);

    for(int i:marks){
        cout<<i<<endl;
    }

    return 0; 

    //2d Vectors

    vector<vector<int>> dual(5, vector<int>(5));

} 