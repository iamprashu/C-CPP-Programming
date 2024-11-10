#include<stdio.h>

int main(){
    float cost_price,selling_price;
    printf("Enter Cost price :> ");
    scanf("%f",&cost_price);
    cost_price=cost_price/12;
    printf("Buyed at %.2f rs per pc .\n",cost_price);

    printf("Enter Selling Price :> ");
    scanf("%f",&selling_price);
    selling_price=selling_price/12;
    printf("Selling at %.2f rs per pc \n",selling_price);
    selling_price=selling_price*25;
    cost_price=cost_price*25;

    if(selling_price>cost_price){
        printf("You did a Profit of %.2f rs.",selling_price-cost_price);
    }else if (selling_price<cost_price)
    {
        printf("you made a loss of %.2f rs.",cost_price-selling_price);
    }else{
        printf("Free me bant raha.");
    }
    

    return 0;
}