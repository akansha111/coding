#include<stdio.h>
int main()
{
  int num;
  printf("Enter a number: ");//show the value of num to user
  scanf("%d", &num);  //input the value of num from user
  (num%2==0)? printf("Even"): printf("Odd");  //if num%2 is 0,then print even.Otherwise,it is odd.
  return 0;
}
