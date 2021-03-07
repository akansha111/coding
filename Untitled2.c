#include <stdio.h>    //headerfile contains printf
int main ()        //this is the main function
{
int a=40,b=60;    //these are the variables and their values
printf("swap a=%d b=%d",a,b);  //show variable a and variable b swapped to user
a=a+b;    //this shows what variable a is equal to
b=a-b;    //this shows what variable b is equal to
a=a-b;    //this shows what variable a is equal to
printf("\n now swap a=%d b=%d",a,b);     //now show variable a and variable b swapped values to user
return 0;   //return to main function

