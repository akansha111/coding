//Write a C Program to accept three numbers  from the user and print which one is greater using ternary operator.
#include <stdio.h>
int main()
{
    int a,b,c,max;
    printf("Please enter the value for a");
    scanf("\n%d",&a);
    printf("Please enter the value for b");
    scanf("\n%d",&b);
    printf("Please enter the value for c");
    scanf("\n%d",&c);
    max=(a>b)?(a>c?a:c):(b>c?b:c);
    printf("The largest number among a,b and c is %d",max);
    return 0;
}
