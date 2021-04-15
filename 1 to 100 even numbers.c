//Write a C program to print all even numbers between 1 to 100. - using while loop

#include <stdio.h> //this is the headerfile which contains the printf and the scanf

int main() //this is the main function
{
int  i; //these are the provided variables

    printf("Even number from 1 to 100:\n "); //show even numbers from 1 to 100 to user in a new line
    scanf("%d",&i); //input the value of i from user

    while(i<=100) //until the value of i is 100, the script will print even numbers and once the value of i is more then 100,the code will stop
    {
        printf("%d\n", i); //show the numbers to the user in a new line
        i=i+2; //the value of i is i+2.The value of i is 2.  2+2 is 4.It will go on.
    }

    return 0; //return to main function
}
