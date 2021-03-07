#include <stdio.h>
int main ()
{
    int a=10,b;
    b= ++a;   //b=++a. ++a is a pre increment and it increases by 1 first and it doesn't carry 1 for the next variable.This means b=10+1=11.
    printf("b=%d\n\n",b);  //show to user the amount of b in a new line.
    printf("a=%d\n",a);   //show to user the amount of a in a new line.
    return 0;
    //b=11,a=11
}
