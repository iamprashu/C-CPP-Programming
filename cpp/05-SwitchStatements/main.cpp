#include<iostream>
using namespace std;
int main(){
    while (1)
    {
        int trigger;
        cout<<"Please Choose :"<<endl<<"1. Addition"<<endl<<"2. Difference"<<endl;
        cout<<"3. Product"<<endl<<"4. Division"<<endl<<"5. Exit"<<endl;
        cout<<"Select Any One :> ";
	    cin>>trigger;

		//checking tracker to exit 
        if(trigger==5)
            break;
        int number1,number2;
        cout<<"Please Enter Number 1 :>";
        cin>>number1;
        cout<<"Please Enter number 2 :>";
        cin>>number2;

        switch(trigger){
		 case 1: cout<<"Answer is :>" <<number1+number2<<endl;cout<<endl;
			break;
		 case 2: cout<<"Answer is :>"<<number1-number2<<endl;cout<<endl;
			break;
		 case 3: cout<<"Answer is :>"<<number1*number2<<endl;cout<<endl;
			break;
		 case 4: cout<<"Answer is :>"<<number1/number2<<endl;cout<<endl;
			break;
		 case 5: exit(0);
 
		 default:cout<<"Check input"<<endl;
        }

    }
    return 0;
}
 