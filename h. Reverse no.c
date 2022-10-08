#include <stdio.h>

int main() {
    int no,n1,n2,n3,n4,n5/*,sap*/; // 'sap' variable is for while loop
    printf("Enter a 5 digit no. : ");
    scanf("%d", &no);
    /*using while loop
    while(no > 0)
    {
        sap = no%10;
        printf("%d", sap);
        no = no/10;
    }
    */
    n5 = no%10;
    no = no/10;
    n4 = no%10;
    no = no/10;
    n3 = no%10;
    no = no/10;
    n2 = no%10;
    no = no/10;
    n1 = no%10;

    printf("Reverse of entered no. is : %d%d%d%d%d", n5,n4,n3,n2,n1);

    return 0;
}