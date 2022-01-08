#include <stdio.h>
int main()
{
  int num, i,multiply;
  printf("Enter a number: ");
  scanf("%d", &num);
  for (i=1; i<=10; ++i)
  {
      multiply=num*i;
    printf("%d*%d = %d\n",num,i,multiply);
  }
  return 0;
}
