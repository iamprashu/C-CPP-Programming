#include<iostream>
#include<unordered_map>
using namespace std;


int main(){
    unordered_map<int,int>desk_map;

    //insertation of data

    desk_map[1]=53;
    desk_map[2]=54;
    desk_map[3]=55;

    //iterate 
    //we need to create an iterator 
    unordered_map<int, int>::iterator runner; 

    for (runner=desk_map.begin(); runner!=desk_map.end(); runner++)
    {
        int key = runner->first;
        int value=runner->second;
        cout<<"For Key "<<key<<" Value is :> "<<value<<endl;

    }

    //another way to iterate 

    // for(auto runner:desk_map){

    //     int key = runner.first; //first represent key

    //     int value=runner.second; //second represent value; 

    //     cout<<"For Key "<<key<<" Value is :> "<<value<<endl;

    // }
    //===================================================
    //searching
    if(desk_map.find(2) != desk_map.end()){
        //found
        int value = desk_map[2];
        cout<<"Value for Searched key is :> "<<value<<endl;
    }
    
    cout<<endl;
    //deleting 
    cout<<"Deleting A Value ........................"<<endl;
    cout<<endl;cout<<endl;
    desk_map.erase(2);

    cout<<"Printing After Deleting ...."<<endl<<endl;

    cout<<endl;

    //printing after deklete
    unordered_map<int, int>::iterator runner2; 

    for (runner2=desk_map.begin(); runner2!=desk_map.end(); runner2++)
    {
        int key = runner2->first;
        int value=runner2->second;
        cout<<"For Key "<<key<<" Value is :> "<<value<<endl;

    }
    cout<<endl;cout<<endl;
    //searching
    if(desk_map.find(2) != desk_map.end()){
        //found
        int value = desk_map[2];
        cout<<value<<endl;
    }else{
        cout<<"Not Found "<<endl;
    }
    return 0;

 
}