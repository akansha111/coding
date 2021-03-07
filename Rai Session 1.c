#include<stdio.h> //In headerfile, include printf() and scanf()
int main(){    //This is the start and main function
int x=0,y=0,result=0,sub=0;  //the values of variables

printf("enter first number:");  //show first number to user
scanf("%d",&x);  //input value provided by user
printf("enter second number:");  //show second number to user
scanf("%d",&y);  //input value provided by user

x=y;  //Variable x is equal to variable y.Value of x will change the value of y
y=x;  //Variable y is equal to variable x.Value of y will change the value of x
printf("The new value of x is: %d",x); //Show the value of x to user
printf("The new value of y is: %d",y); //Show the value of y to user
return 0;  //return to main
}
