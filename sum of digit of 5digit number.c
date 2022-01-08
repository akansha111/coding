/*
If a five-digit number is input through the keyboard, write a
program to calculate the sum of its digits.
*/
#include <stdio.h>
int main()
{
int num;
int sum=0,temp;
printf("Enter the number\n");
scanf("%ld",&num);
while(num!=0)
{
temp=num%10;
sum=sum+temp;
num=num/10;
}
printf("The sum is %d",sum);
}
