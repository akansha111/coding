#include<stdio.h>
int main()
{
  float a,b,result;
  printf("Enter two number: ");  //ask user to enter two numbers
  scanf("%f %f", &a, &b);  //input the value of two numbers( a and b) from user
  result = (a>b)? a/b : a*b;  //if a>b then a/b.Otherwise a*b
  printf("Result: %.2f",result);  //show the result to user
  return 0;
}
