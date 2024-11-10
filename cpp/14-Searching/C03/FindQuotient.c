//Question -> Get the quotient withoud using % and / oprator .... using any integer value

#include<stdio.h>

int GetQuotient(int divident, int divisor){
    int return_value = 0; // this variable for store and compute 
    int start = divident * -1; // as of now i am using search space logic here from -Divident to +Divident
    int end = divident;
    

    while(start <= end){
        int mid = start + (end - start )/2; // Getting mid with int overflow protection
        int guess = mid * divisor; //checking answers using mid;

        //Happy Condition
        if(guess == divident){
            return mid; // as we need quotient i am considering mid as quotient 
        }
        if(guess < divident) //in such case i need to get more accurate answer i will get store and compute
        {
            // store then compute
            return_value = mid ; //as the mid is the quotient i am comparing
            //and compute as if we had shorter value i need to go right 
            start = mid + 1;

        }
        //final case
        else
        {
            end = mid - 1;
        }
    }
    return return_value;
}

int main(){
    int dividend , divisor;
    printf("Please Enter the Dividend :>");
    scanf("%d",&dividend);

    printf("Please Enter the Divisor :> ");
    scanf("%d",&divisor);

    //getting quotient
    int Quotient = GetQuotient(dividend,divisor);

    printf("The Quotient of Divident %d and Divisor %d is :> %d",dividend,divisor,Quotient);


    return 0;
}