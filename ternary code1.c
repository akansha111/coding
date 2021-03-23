//Write a C Program to accept the number  from the user and print whether it is positive or negative using ternary operator.
#include <stdio.h>
int main()
{
int m;
printf("Please enter the value of m");
scanf("%d",&m);
(m>0)?printf("This is a positive number"):printf("This is a negative number");
return 0;
}
