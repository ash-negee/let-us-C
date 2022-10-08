#include <stdio.h>
int main()
{
    int total_pop, total_men, total_women, total_literacy,
    literate_men, literate_women, illiterate_men, illiterate_women;

    total_pop = 80000;
    total_men = 800*52; // 41600
    total_women = total_pop-total_men; // 38400
    
    total_literacy = 800*48; //38400 (given 48% of total population)
   
    literate_men = total_pop/100*35; // 28000 (given 35% of total population)
    literate_women = total_literacy-literate_men; //10400
    
    illiterate_men = total_men - literate_men; // 13600
    illiterate_women = total_women - literate_women; // 28000 

    printf("Total no. of illiterate Men = %d \n", illiterate_men);
    printf("Total no. of illiterate Women = %d \n", illiterate_women);

    return 0;
    
}