//Area of a triangle
#include<stdio.h>
int main()
{
    int base,height,area;
    printf("Enter the base of a triangle: ");
    scanf("%d",&base);
    printf("Enter the height of a triangle: ");
    scanf("%d",&height);
    area=(base*height)/2;
    printf("The area is %d",area);
}
