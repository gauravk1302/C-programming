#include<stdio.h>
int main()
{
    float sp,profit,cp,cp_per_item;
    printf("Enter total selling price of 15 item:");
    scanf("%f",&sp);
    printf("Enter total profit of 15 item:");
    scanf("%f",&profit);
    cp=sp-profit;
    cp_per_item=cp/15;
    printf("Cost Price of one item is:%f",cp_per_item);
    return(0);
}