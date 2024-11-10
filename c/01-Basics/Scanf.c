#include<stdio.h>

int main(){
    while (1)
    {
    
        int num1,num2,triger;

        printf("Enter Your choise :>\n1. Addition\n2. Substraction\n3. Exit.\nEnter Your Choise :>");
        scanf("%d",&triger);
         if(triger==3){
            break;
        }

        printf("Please Enter Number 1 :> ");
        scanf("%d",&num1);
        printf("Enter Number 2 :> ");
        scanf("%d",&num2);

       

        switch(triger){
            case 1 : printf("Answer is :> %d\n",num1+num2);break;

            case 2 : printf("Answer is :> %d\n", num1 - num2); break;

        }
    }
}