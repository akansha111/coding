#include <stdio.h>
int main ()
{
    int a=1,b=2,c=3,x;
    x=++a*b-c--;     //c-- is a post decrement variable so it remains the same but carries a -1 for the next variable. c-- = 3
    //++a is a pre increment variable so it increases by 1 and doesn't carry anything. ++a=2
printf("%d\n",x);  //show the value of x to user
printf("%d\n",a);    //show the value of a to user
printf("%d\n",b);   //show the value of b to user
printf("%d\n",c);    //show the value of c to user
//output=1, a=2, b=2, c=3
return 0;
}
