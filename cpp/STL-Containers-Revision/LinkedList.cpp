#include<iostream>
#include<list>
using namespace std;

int main(){
    list<int>new_list;

    //inserting data;
    new_list.push_back(10);
    new_list.push_back(20);
    new_list.push_back(30);
    new_list.push_back(40);

    //insertion in front
    new_list.push_front(100);

    //size
    cout<<new_list.size()<<endl;

    //removing elements
    new_list.pop_back(); //removes element from last

    new_list.pop_front(); //removes element from front

    // checking list if empty or not 
    if(new_list.empty() == true){
        cout<<"Yes it is empty !..."<<endl;
    }else
    {
        cout<<"No it is not empty.."<<endl;
    }

    //acceing the first and last element
    cout<<"Front element is :> "<<new_list.front()<<endl;
    cout<<"Last Element is :> "<<new_list.back()<<endl;

    
    
    new_list.push_back(90);
    new_list.push_front(90);

    list<int>::iterator it = new_list.begin();

    //new_list.erase(new_list.begin(),new_list.end());


    while (it != new_list.end())
    {
        cout<<*it<<endl;
        it ++;
    }
    //remove perticular element;

    new_list.remove(90);

    list<int>::iterator it1 = new_list.begin();

    //new_list.erase(new_list.begin(),new_list.end());

    cout<<"Removed 90"<<endl;

    while (it1 != new_list.end())
    {
        cout<<*it1<<endl;
        it1 ++;
    }

    //erase
    new_list.clear();

    cout<<"List Erased Completely."<<endl;

    new_list.push_back(20);

    for(auto i : new_list){
        cout<<i<<endl;
    }
    list<int>listA;
    listA.push_back(10);
    listA.push_back(20);
    listA.push_back(30);

    list<int>ListB;
    ListB.push_back(101);
    ListB.push_back(102);

    listA.swap(ListB);

    cout<<"Swapping Lists............"<<endl;

    cout<<"Printing list A"<<endl;
    for(auto p:listA){
        cout<<p<<endl;
    }
    cout<<"Printing List B"<<endl;

    for(auto s:ListB){
        cout<<s<<endl;
    }
    return 0;
}