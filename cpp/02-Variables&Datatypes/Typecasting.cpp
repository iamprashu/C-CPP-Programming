#include<iostream>
using namespace std;

 int main(){
    cout<<"Implicit Type Conversion (Automatic) "<<endl;
    int num1;
    float num2=6.5;
    int ans = num1+num2;
    cout<<ans<<endl;

    cout<<"-----------Char to int-----------"<<endl;
    int num = 5;
    char ch = 'A';

    int answer = ch + num;

    cout<<answer<<endl;

    cout<<"---------------------Int to Char-----------"<<endl;
    cout<<"Enter Number to get Character :> "<<endl;
    int number;
    cin>>number;

    char get_character=number;
    cout<<"The Character for Integer "<<number<<" is :> "<<get_character<<endl;

    cout<<"____________________________________________________________________"<<endl;
    cout<<"Explicit Type Casting"<<endl;

    int num11=10;
    float num12=15.6;

    float get = num11+ (int)num12;

    cout<<"Answer is "<<get<<endl;

    double pi =98.3322234;
    int pirt = (int)pi;

    cout<<pirt<<endl;

    float abc=65.78+13;
    char abcd = (char)abc;
    cout<<abcd<<endl;

    int s=10;
    int t = 3.0;

    float ram= s/(float)t;

    cout<<ram<<endl;

    cout<<float(3.45)<<endl;

    cout<<float(3)<<endl;


    return 0;
 } 