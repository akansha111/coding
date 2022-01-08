/*Temperature of a city in Fahrenheit degrees is input through
the keyboard. Write a program to convert this temperature
into Centigrade degrees.
*/
#include<stdio.h>
int main()
{
    float fahrenheit, centigrade;
    printf("Enter the temperature of a city in fahrenheit: ");
    scanf("%f",&fahrenheit);
    centigrade=(fahrenheit-32)/1.8;
    printf("the temperature in centigrade is: %f ",centigrade);

}
