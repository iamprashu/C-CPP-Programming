#include<iostream>
#include<queue>

using namespace std;


int main(){
    deque<int>deq;

    deq.push_back(10);
    deq.push_back(20);
    deq.push_back(30);
    deq.push_back(40);
    deq.push_back(50);
    deq.push_front(90);

    deque<int>::iterator it = deq.begin();

    while(it != deq.end()){
        cout<< *it <<" ";
        it++;
    }

    deq.pop_back();
    deq.pop_front();
    

    return 0;
}