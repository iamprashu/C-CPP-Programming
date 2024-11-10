#include<iostream>
using namespace std;

class Colony{
    public:
    int houseno;
    int floors;
    string owner;
    void FamilyCount(int number){
        this->familycount = number;
    }

    void Details(){
        cout<<"House no:> "<<houseno;
    }

private:
    int familycount;
};
int main(){
    Colony *n = new Colony();
    n->FamilyCount(12);
    n->floors=12;
    n->houseno = 98;
    n->Details();


    
    return 0;
}