#include <stdio.h>
int main()
{
    float len_rec,bre_rec,rad;
    //for rectangle
    printf("Enter the lenght of Rectangle : ");
    scanf("%f", &len_rec);
    printf("Enter the bredth of Rectangle : ");
    scanf("%f", &bre_rec);
    printf("Area of ractangle is : %.3f \n", len_rec*bre_rec);
    printf("Perimeter of rectangle is : %.3f \n\n", 2*(len_rec+bre_rec));

    //for circle
    printf("Enter the radius of circle : ");
    scanf("%f", &rad);
    printf("Area of circle is : %.3f \n", 3.14*rad*rad);
    printf("Circumfrance of circle is : %.3f", 2*3.14*rad);

    return 0;
    
    
}