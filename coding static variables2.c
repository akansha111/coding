#include<stdio.h>
#include<conio.h>
void main()
{
int x,i;
i=10;
x=--i;    //--i is a pre decrement so it decreases by -1 first and doesn't carry anything.x=10-1=9
printf("x: %d\n",x);   //show the value of x to user in a new line.x=9
printf("i: %d\n",i);    //show the value of i to user in a new line.i=9
getch();
}
