#include <stdio.h>
int main()
{
    float sub1,sub2,sub3,sub4,sub5,aggregate,percentage;
    printf("Enter marks for sub1 - sub5 respectively :\n");
    scanf("%f %f %f %f %f", &sub1,&sub2,&sub3,&sub4,&sub5);

    aggregate = sub1+sub2+sub3+sub4+sub5;
    percentage = (sub1+sub2+sub3+sub4+sub5)/5;
    
    printf("Aggregate is = %.2f",aggregate);
    printf("\nPercentage is = %.2f",percentage);

    return 0;

    
}