#include<iostream>
using namespace std;

pair<int,int> GetFact(int num1,int num2){
            int fact1=1,fact2=1;

        for(int i=1; i<=num1; i++){
            fact1 = fact1 * i;
        }

        for(int i=1; i<=num2; i++){
            fact2 = fact2 * i;
        }


        return {fact1,fact2};
}


int main(){
    int number_1;
    int number_2;
    cout<<"Please Enter Number1 :";
    cin>>number_1;
    cout<<"Please Enter number2 :";
    cin>>number_2;

    pair<int,int> answer = GetFact(number_1,number_2);

    cout<<answer.first<<" \n"<<answer.second<<endl;


    return 0;
}