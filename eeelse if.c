// Write C program to convert a distance entered in metres to kilometres.
#include <stdio.h> //this is the headerfile, which contains the printf and the scanf
int main () //this is the main function
{
int metres,km; //these are the provided variables
printf("enter metres:"); //show to user enter metres
scanf("%f",&metres);  //input the value for variable subject_1 provided by user
km = metres/1000;  //this is how to convert metres to km
printf("km = %f"); //show to user km= %d/1000
return 0; //return to main function

}


