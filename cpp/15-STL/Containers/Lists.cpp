#include<iostream>
#include<list>

using namespace std;

// int main(){
//     //creation
//     list<int>mylist;
    
//     mylist.push_back(10);
//     mylist.push_back(20);
//     mylist.push_back(30);
//     mylist.push_back(40);
//     mylist.push_back(30);mylist.push_back(30);mylist.push_back(30);mylist.push_back(30);mylist.push_back(30);
//     mylist.push_back(30);
//     mylist.push_back(30);
//     mylist.push_back(30);
//     mylist.push_back(30);
//     mylist.push_back(10);
//     mylist.push_back(20);
//     mylist.push_back(30);
//     mylist.push_back(40);


//     mylist.push_front(1011);

//     mylist.pop_front();
//     mylist.pop_back();

//     cout<<"Size "<<mylist.size()<<endl;

//     cout<<"Front Element :> "<<mylist.front()<<endl;
//     cout<<"End Element :> "<<mylist.back()<<endl;

//     //iterator in lists

//     list<int> ::iterator runner = mylist.begin();

//     //this will remove all occurance of 30;
//     mylist.remove(30);

//     while (runner != mylist.end()){
//         cout<<*runner<<" ";
//         runner++;
//     }
//     cout<<endl;

//     mylist.remove(30);
    
    

//     return 0;

// } 

int main(){
    list<int>list1;
    list1.push_back(10);list1.push_back(11);list1.push_back(40);list1.push_back(30);

    list<int>list2;
    list2.push_back(11);list2.push_back(22);list2.push_back(33);list2.push_back(4444);

    //swapping lists 

    list1.swap(list2);

    list<int>::iterator runner1 = list1.begin();

    while (runner1 != list1.end())
    {
       cout<<*runner1<<" ";
       runner1++;
    }

    cout<<endl;
    
}