#include<iostream>
using namespace std;

int main(){
    int number;
    cin>>number;
    int i=2;
    if(number<=1)
    {
        cout<<"Not Prime."<<endl;
    }
    else if (number==2)
    {
        cout<<"Prime"<<endl;
    }
    else
    {
        for(; i<number; i++)
        {
            if(number%i==0)
            {
                cout<<"Not Prime"<<endl;break;
            }
        }

        if(i==number){
            cout<<"Prime Number";
        }
        
    }
    return 0;   
}