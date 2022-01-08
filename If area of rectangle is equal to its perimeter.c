//Given the length and breadth of a rectangle, write a program to find whether the area of the rectangle is greater than its perimeter.
#include<stdio.h>
int main()
{
    int length, breadth,area,perimeter;
    printf("Enter the length of a rectangle: ");
    scanf("%d",&length);
    printf("Enter the breadth of a rectangle: ");
    scanf("%d",&breadth);
    area=length*breadth;
    printf("\nThe area is %d",area);
    perimeter=2*(length+breadth);
    printf("\nThe perimeter is %d",perimeter);
    if (area>perimeter)
        printf("\nArea is greater than the perimeter");
    else
        printf("\nArea is not greater than perimeter");
}
