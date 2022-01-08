//Write a program to read 10 times of p, r, t & si
#include<stdio.h>
int main()
{
    int p,t,count;
    float r,si;
    count=1;
    while(count<=10)
    {
        printf("\nEnter the principal: ");
    scanf("%d",&p);
    printf("\nEnter the rate: ");
    scanf("%f",&r);
    printf("\nEnter the time: ");
    scanf("%d",&t);
    si=(p*r*t)/100;
    printf("The simple interest is %f",si);
    }
}
