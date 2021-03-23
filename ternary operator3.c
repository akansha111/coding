#include<stdio.h>
void main()
{
 float x,y;
  printf("Enter x: ");  //show the value of x to user
 scanf("%f", &x);  //input the value of x from user
 y = x < 0 ? x*x+4 : x*x-4;  //y=if x<0 then x*x+4.Otherwise x*x-4
 printf("f(%f) = %f", x, y);  //show the value of x and y to user
 getch();
}
