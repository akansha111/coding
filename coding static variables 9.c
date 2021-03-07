#include<stdio.h>

int main()
{

 int x = 10,y = 20, a = 5, b= 4;

 printf("---- PRE INCREMENT OPERATOR EXAMPLE---- \n");
 printf("Value of x : %d \n", x); //Original Value. x=10
 printf("Value of x : %d \n", ++x); // using Pre increment Operator. x=11
 printf("Value of x Incremented : %d \n", x); //Incremented value. x=11

 printf("----POST INCREMENT OPERATOR EXAMPLE---- \n");
 printf("Value of y : %d \n", y); //Original Value. y=20
 printf("Value of y : %d \n", y++); // using Post increment Operator. y=20
 printf("Value of Incremented y : %d \n", y); //Incremented value. y=21

 printf("----PRE DECREMENT OPERATOR EXAMPLE---- \n");
 printf("Value of a : %d \n", a); //Original Value. a=5
 printf("Value of a : %d \n", --a); // using Pre decrement Operator. a=4
 printf("Value of decremented y : %d \n", a); //decremented value. a=4

 printf("----POST DECREMENT OPERATOR EXAMPLE---- \n");
 printf("Value of b : %d \n", b); //Original Value. b=4
 printf("Value of b : %d \n", b--); // using Post decrement Operator. b=4
 printf("Value of decremented b : %d \n", b); //decremented value. b=3

 return 0;
 }
