//Two numbers are entered through the keyboard. Write a program to find the value of one number raised to the power of another.
#include<stdio.h>
int main()
{
    int num1,num2;
    printf("Enter the first number: ");
    scanf("%d",&num1);
    printf("Enter the second number: ");
    scanf("%d",&num2);
    printf("%f",pow(num1,num2));
}
