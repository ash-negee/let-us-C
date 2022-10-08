#include <stdio.h>
int main()
{
    int basic_s, dearness, house_rent,  gross_salary;
    printf("Enter basic salary : ");
    scanf("%d", &basic_s);
  
    dearness = basic_s/100*40;
    house_rent = basic_s/100*20;
    gross_salary = (basic_s+dearness+house_rent);
    
    printf("Gross salary = %d", gross_salary); 

    return 0;

}