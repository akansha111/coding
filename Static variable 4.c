#include <stdio.h>  //this headerfile contains the printf
int main ()  //this is the main function
{
int g=101;  //this is the value of variable g
int k=g+(++g)*3;  //this is how to make the variable k. g++ is the post increment which means it increases the value first and then initialises.
printf("%d",k);  //show the value of variable k to user
return 0;
}
