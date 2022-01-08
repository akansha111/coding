/*
The length & breadth of a rectangle and radius of a circle are
input through the keyboard. Write a program to calculate the
area & perimeter of the rectangle, and the area & circumference of the circle.
*/
#include <stdio.h>
int main()
{
      float length, breadth, perimeter, radius, cirarea,circumference;
      float recarea;
      printf("Enter the length of the rectangle: ");
      scanf("%f",& length);
      printf("Enter the breadth of the rectangle: ");
      scanf("%f",& breadth);
      recarea = (2*length)+(2*breadth);
      perimeter = length*breadth;
      printf("The area of rectangle is %f",recarea);
      printf("\nThe perimeter of area is %f",perimeter);
      printf("\nEnter the radius of a circle: ");
      scanf("%f ",&radius);
      cirarea = 3.14*radius*radius;
      circumference = 2*3.14*radius;
      printf("\nThe area of circle is %f",& cirarea);
      printf("\nThe circumference of circle is %f",& circumference);
}
