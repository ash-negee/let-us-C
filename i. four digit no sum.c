#include <stdio.h>
int main()
{
    int no,n1,n2,n3,n4;
    printf("Enter 4 digit no. here : ");
    scanf("%d", &no);

    //if entered no is 1234

    n4 = no%10; //n4 = 1234%10 = 4
    no = no/10; //no = 1234/10 = 123 (.4 is ignored bcoz we are using int datatype)
    n3 = no%10; //n3 = 123%10 = 3
    no = no/10; //no = 123/10 = 12
    n2 = no%10; //n2 = 12%10 = 2
    no = no/10; //no = 12/10 = 1
    n1 = no%10; //n1 = 1%10 = 1

    printf("Sum of 1at and last digits is = %d", n1+n4);

    return 0;
    
}