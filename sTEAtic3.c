#include <stdio.h>
int main ()
{
    int a=10,b;
    b=a++;
    printf("b=%d\n\n",b);  //a++ is a post increment value so it remains the same as the previous value but carries a 1 for the next variable.
    //b=10. Show the value of b to user in a new line.
    printf("a=%d\n",a);  //a=11. Show the value of a to user in a new line.
    return 0;
}
