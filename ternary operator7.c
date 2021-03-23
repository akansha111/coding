// program1
#include<stdio.h>
int main()
{
  int a, num=500;
  a = (num>10?(num<=100?100:420):900);  //if number is more then 10 then number<=100 which is 420.Otherwise,it is 900
  printf("%d",a);  //show the value of a to user
  return 0;
}

