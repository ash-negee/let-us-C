#include<stdio.h>
int main()
{
    int no,n1,n2,n3,n4,n5;
    printf("Enter a 5 digit no. : ");
    scanf("%d", &no);
   
    n5 = no%10;
    no = no/10;
    n4 = no%10;
    no = no/10;
    n3 = no%10;
    no = no/10;
    n2 = no%10;
    no = no/10;
    n1 = no%10;

    printf("Reverse of entered no. is : %d%d%d%d%d",
          (n1+1)%10, (n2+1)%10, (n3+1)%10, (n4+1)%10, (n5+1)%10);
    
    //in case od 9 we have to print 0 insted of 10 so we'r using %10

    return 0;


}