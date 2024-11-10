#include<iostream>
#include<stack>
#include<vector>

using namespace std;


int main(){
    //Stack is last in first out data structure
    //creation
    stack<int>dsstack;

    dsstack.push(10);
    dsstack.push(20);
    dsstack.push(30);
    dsstack.push(40);
    dsstack.push(50);
    dsstack.push(60);

    cout<<"Size of Stack is -> "<<dsstack.size()<<endl;

    cout<<"Top Element that will pop first is :> "<<dsstack.top()<<endl;
    cout<<"Printing Element with method other :"<<endl;

    while (dsstack.empty() == 0)
    {
       cout<<dsstack.top()<<endl;
       dsstack.pop();
    }
    

}

