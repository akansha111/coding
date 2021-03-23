// Write a C program for performing below task.
// Given an integer n, perform the following conditional actions:
// If n is odd, print Weird
// If n is even and in the inclusive range of 2 to 5, print Not Weird
// If n is even and in the inclusive range of 6 to 20, print Weird
// If n is even and greater than 20, print Not Weird
#include <stdio.h> //this is the headerfile, which contains the printf and the scanf
int main() //this is the main function
{
    int n; //these is the provided variable
    printf("Enter the value of n\n"); //show to user enter the value of n in a new line
    scanf("%d",&n); //input the value for variable n provided by user
    if(n%2 != 0) //if modulus 2 of variable n is not equal to 0 ...
    {
    printf("Weird"); //show Weird to user
    }

else if(!(n%2) && n >= 2 && n <= 5) //if modulus 2 of variable and n is greater then equal to 2 and n is less then equal to 5 ...
    printf("Not Weird"); //show Not Weird to user
    else if(!(n%2) && n >= 6 && n <= 20) //if modulus 10 of variable n is equal to 0 ...
    printf("Weird"); //show Weird to user
    else if(!(n%2) && n > 20) //if modulus 10 of variable n is equal to 0 ...
    printf("Not Weird"); //show Not Weird to user
    return 0; //return to main function
}

