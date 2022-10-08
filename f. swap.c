#include <stdio.h>
int main()
{
    int A,B;
    printf("Enter no A : ");
    scanf("%d", &A);
    printf("Enter no B : ");
    scanf("%d", &B);

    A = A+B;
    B = A-B;
    A = A-B;

    printf("A = %d \n", A);
    printf("B = %d", B);
    
    
    return 0;
    
}