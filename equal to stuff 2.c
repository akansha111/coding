#include <stdio.h>

int main()
{
int a = 9;
int b = 4;
printf(" a >  b: %d \n", a > b);  //a>b means 9>4 which is correct.Therefore, this is 1.

printf("a >= b: %d \n", a >= b);  //a>=b means 9>=4 which is correct.Therefore, this is 1.

printf("a <= b: %d \n", a <= b);  //a<=b means 9<=4 which is incorrect.Therefore, this is 0.

printf("a <  b: %d \n", a < b);   //a<b means 9<4 which is incorrect.Therefore, this is 0.

printf("a == b: %d \n", a == b);  //a==b means 9==4 which is incorrect.Therefore, this is 0.

printf("a != b: %d \n", a != b);  //a!=b means 9!=4 which is correct.Therefore, this is 1.
}
