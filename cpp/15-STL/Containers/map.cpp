#include<iostream>
#include<unordered_map>
#include<map>

using namespace std;

int main(){
    //Creation unorderd map
    unordered_map<string,string> table;

    //way 1
    table["in"]= "India";

    // way2
    table.insert(make_pair("en", "England"));

    //way3
    pair<string,string>pr;

    pr.first="br";
    pr.second="Brazil";

    table.insert(pr);

    cout<<table.size()<<endl;

    //clearing table

    table.clear();

    cout<<table.size()<<endl;

    //checking empty

    table.empty() ? cout<<"Yes it is Empty"<<endl : cout<<"Not Empty .."<<endl;

    table["in"]= "India";
    table["cn"]= "cndia";
    table["dn"]= "dndia";

    cout<<"Value at :> "<<table.at("in")<<endl;

    //replacing value

    table.at("in")="INDIA";

    cout<<"Value at :> "<<table.at("in")<<endl;

    //print using iterator

    unordered_map<string,string>::iterator runner=table.begin();

    while (runner != table.end())
    {
        string key = runner -> first;
        string value = runner -> second;

        cout<<"Key is -> "<<key<<" and value is "<<value<<endl; 
        runner++;
    }

    //erase
    // table.erase(table.begin(),table.end());

    cout<<table.size()<<endl;

    table.find("in") != table.end() ? cout<<"Found"<<endl : cout<<"Not Found "<<endl;

    table.count("in") ? cout<<"Found by count"<<endl : cout<<"Not Found "<<endl;
    


     

    return 0;
}