#include<stdio.h>

int main(){
    int cost_price,selling_price;
    printf("welcome to P&L Calculator.\n");
    printf("Enter Cost Price of Product :> ");
    scanf("%d",&cost_price);
    printf("Please Enter Selling Price :> ");
    scanf("%d",&selling_price);

    if(selling_price>cost_price){
        printf("Wohoo!, You made a profit of %d rs.",selling_price-cost_price);
    }else if(cost_price>selling_price){
        printf("Fuck!, You did a loss of %d rs.",cost_price-selling_price);
    }else{
        printf("No Profit No Loss");
    }

    return 0;
}