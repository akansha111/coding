#include<stdio.h>

int main()
{
    int x = 12, y = 13;

    printf("x = %d\n", x);  //show the value of x to user in a new line.The value of x is 12
    printf("y = %d\n\n", y);  //show the value of y to user in a new line.The value of y is 13

    // Is x is greater than y?
    printf("x > y : %d\n", x > y);  //x>y means 12>13 which is false.This is 0

    // Is x is greater than or equal to y?
    printf("x >= y : %d\n", x >= y);  //x>=y means 12>=13 which is false.This is 0

    // Is x is smaller than y?
    printf("x < y : %d\n", x < y);  //x<y means 12<13 which is true.This is 1

    // Is x is smaller than or equal to y?
    printf("x <= y : %d\n", x <= y);  //x<=y means 12<=13 which is true.This is 1

    // Is x is equal to y?
    printf("x == y : %d\n", x == y);  //x==y means 12==13 which is false.This is 0

    // Is x is not equal to y?
    printf("x != y : %d\n", x != y);  //x!=y means 12!=13 which is true.This is 1

    // Signal to operating system everything works fine
    return 0;
}
