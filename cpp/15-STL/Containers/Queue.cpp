#include<iostream>
#include<queue>
#include<vector>

using namespace std;

int main(){
    //Queue is a first in First out Data Structure

    queue<int>dsq;

    //insertion
    dsq.push(10);
    dsq.push(12);
    dsq.push(13);
    dsq.push(15);
    dsq.push(16);
    dsq.push(18);

    cout<<"Size of Queue is -> "<<dsq.size()<<endl;

    cout<<"Front Element is -> "<<dsq.front()<<endl;

    cout<<"End Element is -> "<<dsq.back()<<endl;

    cout<<"poping an item using pop ......."<<endl;

    dsq.pop();

    cout<<"As it pop from front check front is -> "<<dsq.front()<<endl;


}