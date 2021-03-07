#include <stdio.h>
int main()
{
int a=5;
a++;
printf("%d\n",a);
a=a-(a--)-(--a);
printf("%d\n",a);
return 0;
}

