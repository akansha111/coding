//Program to find the average of two numbers
#include<stdio.h>
int main()
{
    float num1, num2, avg;
    printf("Enter the first number: ");
    scanf("%f",&num1);
    printf("Enter the second number: ");
    scanf("%f",&num2);
    avg=(num1+num2)/2;
    printf("The average of the 2 numbers is %f",avg);
}
