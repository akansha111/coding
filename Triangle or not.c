//Write a program to check whether a triangle is valid or not,
//when the three angles of the triangle are entered through the keyboard. A triangle is valid if the sum of all the three angles is equal to 180 degrees.
#include<stdio.h>
int main()
{
    int angle1, angle2, angle3, sum;
    printf("Enter the first angle: ");
    scanf("%d",&angle1);
    printf("\nEnter the second angle: ");
    scanf("%d",&angle2);
    printf("\nEnter the third angle: ");
    scanf("%d",&angle3);
    sum=angle1+angle2+angle3;
    printf("The sum of the angles is %d",sum);
    if (sum==180)
        printf("\nThis is a triangle");
    else
    printf("\nThis is not a triangle");
}
