#include<iostream>
using namespace std;

int main(){
    pair<int,int>p;

    p.first = 24;
    p.second =56;

    cout<<p.first<<endl;

    //creating pairs of pair

    pair<int,pair<int,char>>m_pair;

    m_pair.first = 12;
    m_pair.second.first=223;
    m_pair.second.second = 'P';

    cout<<m_pair.first<<" "<<m_pair.second.second<<endl;

    return 0;

}