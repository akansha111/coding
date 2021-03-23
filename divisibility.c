//Write a C program to check whether a given number is divisible by 2 and 3 but not divisible by 5.
#include <stdio.h> //this is the headerfile, which contains the printf and the scanf
int main () //this is the main function
{
    int number; //these is the provided variable
    printf("Enter a number:"); //show Enter a number to user
    scanf("%d",&number); //input the value for variable n provided by user
    if(number % 2 == 0) //if modulus 2 of variable number is equal to 0 ...
    printf("\nThis number is divisible by 2"); //show This number is divisible by 2 to user
    else if(number % 3 == 0) //if modulus 3 of variable number is equal to 0 ...
    {
    printf("\nThis number is divisible by 3"); //show This number is divisible by 3 to user
    }

    else(number %5 != 0); //if modulus 3 of variable number is not equal to 0 ...
         {
             printf("\nThis number is not divisible by 5"); //show This number is not divisible by 5 to user
         }

    return 0; //return to the main function

}
