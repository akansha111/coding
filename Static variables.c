#include <stdio.h>
int main ()
{
    int m=10;
    int n= ++m;  //++m is pre-increment because post-increment increases first and then initialises
    int z = ++m;  //++m is pre-increment because post-increment increases first and then initialises
    int c = m++;  //m++ is post-increment because pre-increment initialises first and then increases
    printf("m=10\n");
    printf("%d\n",n);
    printf("%d\n",z);
    printf("%d\n",c);
    return 0;
}
