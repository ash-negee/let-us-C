#include <stdio.h>
int main()
{
    float dist,meter,feet,inch,centimeter;
    printf("Enter distance in KM : ");
    scanf("%f", &dist);
   
    meter = dist*1000;
    feet = dist*1000*3.281;
    inch =  dist*1000*39.37;
    centimeter = dist*1000*100;

    printf("%.2f KM is equal to %.2f meter. \n",dist,meter );
    printf("%.2f KM is equal to %.2f feet. \n",dist,feet );
    printf("%.2f KM is equal to %.2f inches. \n",dist,inch );
    printf("%.2f KM is equal to %.2f centimeter. \n",dist,centimeter );

    return 0;
}