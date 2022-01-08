//Swap Two Numbers
#include<stdio.h>
int main()
{
  int a, b;
  a=24, b=12;
  printf("a = %d",a);
  printf("\nb = %d",b);
  a= a-b;
  b= a+b;
  a= b-a;
  printf("\nAfter swapping a = %d\n",a);
  printf("nAfter swapping b = %d ",b);
}
