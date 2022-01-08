/*
The distance between two cities (in km.) is input through the
keyboard. Write a program to convert and print this distance  in meters, feet, inches and centimeters.
*/
#include <stdio.h>
int main()
{
   float km,m,feet,inches,cm;
printf("enter the distance between 2 cities:");
scanf("%f",&km);
m = km*1000;
printf("m is %f",m);
feet = km*3280.84;
printf("\nfeet is %f",feet);
inches = km*39370.1;
printf("\ninches is %f",inches);
cm = km*100000;
printf("\ncm is %f",cm);

return 0;
}
