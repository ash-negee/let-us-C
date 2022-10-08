#include <stdio.h>
int main()
{
   float degree_celcius,feh;
   printf("Enter the temprature in Fahrenheit : ");
   scanf("%f", &feh);

   degree_celcius = ((feh-32)*5)/9;
   printf("%.4f", degree_celcius);
   
   return 0;
    
}