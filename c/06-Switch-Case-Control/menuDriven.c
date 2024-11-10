#include<stdio.h>
int main(){
    int menu;
    int num1,num2;
        

    while(1){
        printf("\nPlease Choose :>\n1.Addition\n2.Difference\n3.Product\n4.Division\n5.Exit Program.\nEnter Choise :> ");
        scanf("%d",&menu);
        if(menu==5){
            printf("Exiting Program");
            break;
        }

        switch(menu){
            case 1:
                printf("Enter number 1 :>");
                scanf("%d",&num1);
                printf("Enter number 2 :>");
                scanf("%d",&num2);
                printf("Addition is :> %d \n",num1+num2);
                break;
            case 2:
                printf("Enter number 1 :>");
                scanf("%d",&num1);
                printf("Enter number 2 :>");
                scanf("%d",&num2);
                printf("Difference is :> %d \n",num1-num2);
                break;
            case 3:
                printf("Enter number 1 :>");
                scanf("%d",&num1);
                printf("Enter number 2 :>");
                scanf("%d",&num2);
                printf("Product is :> %d \n",num1*num2);
                break;
            case 4:
                printf("Enter number 1 :>");
                scanf("%d",&num1);
                printf("Enter number 2 :>");
                scanf("%d",&num2);
                printf("Division is :> %d \n",num1/num2);
                break;
            default:
                printf("Please Check the Input. \n");
                
            
        }

        
    }
    return 0;
}