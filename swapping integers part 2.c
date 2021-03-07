#include <stdio.h>    //headerfile contains printf
int main ()        //this is the main function
{
int a,b;    //these are the variables
printf("enter the value for a \n");  //show the value for a in a new line
scanf("%d",&a);   //input the value given by the user
printf("enter the value for b \n");  //show the value for b in a new line
scanf("%d",&b);   //input the value given by the user
printf("swap a=%d b=%d",a,b);  //show variable a and variable b swapped to user
a=a+b;    //this shows what variable a is equal to
b=a-b;    //this shows what variable b is equal to
a=a-b;    //this shows what variable a is equal to
printf("\n now swap a=%d b=%d",a,b);     //now show variable a and variable b swapped values to user
return 0;  //return to main function
}
