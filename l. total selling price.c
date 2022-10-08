#include <stdio.h>
int main()
{
    float price, profit, costprice;
    printf("Enter the total selling price : ");
    scanf("%f", &price);
    printf("Enter total profit : ");
    scanf("%f", &profit);

    costprice = (price-profit)/15;
    printf("%.2f", costprice);

    return 0;
}