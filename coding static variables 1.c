#include<stdio.h>
#include<conio.h>
void main()
{
int x,i;
i=10;
x=i++;    //i++ is a post increment so it remains the same as the previous value but carries 1 for the next variable.So x=10
printf("x: %d\n",x);   //show the value of x to user in a new line.x=10
printf("i: %d\n",i);   //show the value of i to user in a new line.i=11
getch();
}
