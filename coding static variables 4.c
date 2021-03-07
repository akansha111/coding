#include<stdio.h>
#include<conio.h>
void main()
{
int x,a,b,c;
a = 2;
b = 4;
c = 5;
x = a-- + b++ - ++c;   //a-- is a post decrement so it remains the same as the previous value but carries -1 for the next variable.
//So a=2. b++ is a post increment so it remains the same as the previous value but carries 1 for the next variable.So b=4.
//++c is a pre increment so it increases by 1 first and doesn't carry anything.c=6
printf("x: %d",x);    //show the value if x. x = 2+4-6 =6-6=0
getch();
}
