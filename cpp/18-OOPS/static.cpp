#include<iostream>
using namespace std;

class King{
    public:
    static int num;   
};

int King :: num = 90;

int main(){
    King k;
    cout<<King::num;
}