//Write a C program to find sum of all odd numbers between 1 to n.

#include <stdio.h> //this is the headerfile which contains the printf and the scanf
int main () //this is the main function
{
  int i, n, sum = 0; //these are the provided variable
  printf ("Enter the value of n:"); //show to user enter the value of n
  scanf ("%d", &n); //input the value of n from user

  for (i=1; i <= n; i+=2,i++);

  sum += i; //the value of sum+ is i
i++; //i++ is the incremented value of i
  printf ("The sum of all odd numbers from 1 to n is:%d", sum); //show to user enter the value of n

  return 0; //return to main function

}
