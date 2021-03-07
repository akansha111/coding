#include <stdio.h>
int main()
{
    int a = 5, b = 5, c = 10;

    printf("%d == %d is %d \n", a, b, a == b);   //a==b means 5 == 5 which is true so it is 1
    printf("%d == %d is %d \n", a, c, a == c);    //a==c means 5==10 which is false so it is 0
    printf("%d > %d is %d \n", a, b, a > b);    //a>b means 5>5 which is false so it is 0
    printf("%d > %d is %d \n", a, c, a > c);     //a>c means 5>10 which is false so it is 0
    printf("%d < %d is %d \n", a, b, a < b);    //a<b means 5<5 which is false so it is 0
    printf("%d < %d is %d \n", a, c, a < c);       //a<c means 5<10 which is true so it is 1
    printf("%d != %d is %d \n", a, b, a != b);    //a!= b means 5 is not equal to 5 which is false so it is 0
    printf("%d != %d is %d \n", a, c, a != c);   //a!=c means 5 is not equal to 10 which is true so it is 1
    printf("%d >= %d is %d \n", a, b, a >= b);     //a>=b means 5 is greater than/equal to 5 so it is true because 5=5 so it is 1
    printf("%d >= %d is %d \n", a, c, a >= c);   //a>=c means 5 is greater than/equal to 10 which is false so it is 0
    printf("%d <= %d is %d \n", a, b, a <= b);   //a<=b means 5 is less than or equal to 5 which is true because 5=5 so it is 1
    printf("%d <= %d is %d \n", a, c, a <= c);   //a<=c means 5 is less than or equal to 10 which is true because 5<10 so it is 1

    return 0;
}
