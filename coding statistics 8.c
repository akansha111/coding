#include <stdio.h>

int main()
{
 int x = 10,y = 20;

 printf("----INCREMENT OPERATOR EXAMPLE---- \n");
 printf("Value of x : %d \n", x); //Original Value. x=10
 printf("Value of x : %d \n", x++); // Using increment Operator. x=10
 printf("Value of x : %d \n", x); //Incremented value. x=11

 printf("----DECREMENT OPERATOR EXAMPLE---- \n");
 printf("Value of y : %d \n", y); //Original Value. y=20
 printf("Value of y : %d \n", y--); // using decrement Operator. y=20
 printf("Value of y : %d \n", y); //decremented value. y=19

 return 0;
}
