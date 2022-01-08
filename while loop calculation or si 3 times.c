//Calculation of simple interest for 3 sets of p, t and r
#include<stdio.h>
int main()
{
    int p, t, count;
float r, si;
 count=1;
while(count<=3)
 {
 printf("\nEnter the value of principal: ");
scanf("%d",&p);
 printf("Enter the value of time: ");
scanf("%d",&t);
 printf("Enter the value of rate: ");
scanf("%f",&r);
si=(p*t*r)/100;
 printf("Simple interest = RS%f",si);
}
}
