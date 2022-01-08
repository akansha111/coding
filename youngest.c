//If the ages of Ram and Ajay are input through the keyboard, write a program to determine the youngest
#include<stdio.h>
int main()
{
int ram,ajay;
printf("Enter the age of Ram: ");
scanf("%d",&ram);
printf("Enter the age of Ajay: ");
scanf("%d",&ajay);
if (ram>ajay)
    printf("Ajay is the youngest");
if (ajay>ram)
    printf("Ram is the youngest");
if (ajay==ram)
    printf("They are both the same age");
}
