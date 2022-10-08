#include <stdio.h>
int main()
{
    int no,n1,n2,n3,n4,n5/*,sap, sum = 0*/; //sap and sum variables are for while loop
    printf("Enter any 5 digit no : ");
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

    printf("Sum of the digits of entered no. is = %d", (n1+n2+n3+n4+n5));
    
    /*
    int initial_no = no;
    
    using while loop
    while(no > 0)
    {
        sap = no%10;
        no = no/10;
        sum = sum+sap;
    }
    
    printf("Sum of digits of %d is = %d ",initial_no, sum);

   */

    return 0;
    
}