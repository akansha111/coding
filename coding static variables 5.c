#include<stdio.h>

int main()
{
    int x = 12, y = 1;

    printf("Initial value of x = %d\n", x); // print the initial value of x
    printf("Initial value of y = %d\n\n", y); // print the initial value of y

    y = ++x; // increment the value of x by 1 then assign this new value to y.
    //++x is a pre increment so it increases by 1 first and doesn't carry anything.y =12+1=13. x=13

    printf("After incrementing by 1: x = %d\n", x);  //show the value of x after incrementing to user in a new line.x=13
    printf("y = %d\n\n", y);  //show the value of y to user in a new line. y=13

    y = --x; // decrement the value of x by 1 then assign this new value to y

    printf("After decrementing by 1: x = %d\n", x);
    printf("y = %d\n\n", y);

    // Signal to operating system everything works fine
    return 0;
}
