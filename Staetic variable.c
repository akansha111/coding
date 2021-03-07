#include <stdio.h>
int main ()
{
int a=10;
printf("a=%d\n\n",++a);  //++a is a pre-increment value so it increases by 1 first and doesn't carry 1 for the next variable.
//The value of ++a is 11.Show the value of ++a to user in a new line.
printf("a=%d\n",a);   //Show the value of a to user in a new line.
return 0;
//++a=11 and a=11
}

