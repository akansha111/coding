//Write a program to calculate overtime pay of 10 employees.
//Overtime is paid at the rate of Rs. 12.00 per hour for every
//hour worked above 40 hours. Assume that employees do not work for fractional part of an hour
#include<stdio.h>
int main()
{
    int time,pay;
    int count=1;
    while(count<=10)
    {
        printf("\n How many hours overtime did you work?: ");
        scanf("%d",&time);
        pay=time*12;
        if (time>40)
            printf("You will receive RS %d",pay);
        if (time<40)
            printf("You won't receive pay");
    }

}
