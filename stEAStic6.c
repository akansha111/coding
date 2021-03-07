#include <stdio.h>
//int a = 1, b = 2, c = 3, d = 4 ;
//What is the value of this expression?
//++b / c + a * d++
//What are the new values of a, b, c, and d?
int main ()
{
int a=1, b=2, c=3, d=4,x;
x=++b/c+a*d++;    //++b is a pre increment variable so it increases by 1 first and
//doesn't carry anything.The value of ++b is 2+1=3. d++ is a post increment
//variable so it remains the same but carries a 1 for the next variable.The value of d++ is 4.
//x= 3/3+1*4
//x= 1+1*4
//x=1+4
//x=5
printf("%d\n",x);
printf("%d\n",a);
printf("%d\n",b);
printf("%d\n",c);
printf("%d\n",d);
return 0;
//Output=5, b=3, c=3, d=4
}
