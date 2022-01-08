/*
While purchasing certain items, a discount of 10%
is offered if the quantity purchased is more than 1000. If quantity
and price per item are input through the keyboard, write a program to calculate the total expenses
*/
#include<stdio.h>
int main()
{
int quantity, discount = 0 ;
float rate, total ;
printf("Enter quantity and rate: ") ;
scanf( "%d %f", &quantity, &rate);
if (quantity > 1000)
discount = 10 ;
total = (quantity*rate)-(quantity * rate * discount/100) ;
 printf ("Total expenses = Rs. %f", total);
}
