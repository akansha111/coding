#include <stdio.h>    // headerfile contains the printf and scanf
int main(){      //this is the main function
int x, y, divides ;    //these are the variable provided already
printf("enter the number for x \n");    //show the value of variable x to use in a new line
scanf("%d", &x);     // input the value for variable x provided by Rai
printf("enter the number for y \n");    //show the value of variable y in a new line
scanf("%d", &y);    //input the value for variable y provided by Rai
divides = x / y ;     // this shows the function to be done with variable x and variable y

printf("%d / %d = %d", x, y, divides);     // show the function to be done with variable x and y
return 0;   //return to main function successfully.



}
