#include <stdio.h>
int main()
{
    int amount;
    printf("Enter the amount : ");
    scanf("%d", &amount);

    printf("Cashier have to give %d notes of 100 \n", amount/100);
    printf("Cashier have to give %d notes of 50 \n", amount/50);
    printf("Cashier have to give %d notes of 10 \n", amount/10);


    return 0;
}