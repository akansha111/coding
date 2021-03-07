//Write a program in c to perform the below operation:
//you have to deposit in the Bank the amount Rs. 45678
//And you have Denominations notes are 2000,500,200,20,1
//you have to deposit in the Bank the amount Rs. 45678


#include <stdio.h>  //headerfile includes printf and scanf
int main ()    //this is the main function
{
int Rs45678,Rs2000,Rs500,Rs200,Rs20,Rs1,total;   //these are the variables provided
printf("you have to deposit Rs45678 in the bank \n");    //show the amount to be deposited to the bank in a new line
printf("you have Rs2000 denomination note \n");  //show the denomination notes in a new line
scanf("%d",&Rs2000);   //input the value from the user
printf("you have Rs500 denomination note \n");    //show the denomination notes in a new line
scanf("%d",&Rs500);   //input the value from the user
printf("you have Rs200 denomination note \n");    //show the denomination notes in a new line
scanf("%d",&Rs200);   //input the value from the user
printf("you have Rs20 denomination note \n");    //show the denomination notes in a new line
scanf("%d",&Rs20);    //input the value from the user
printf("you have Rs1 denomination note \n");    //show the denomination notes in a new line
scanf("%d",&Rs1);   //input the value from the user
total=Rs2000+Rs500+Rs200+Rs20+Rs1;   //this is how to create the total variable
printf("the sum of total number of notes is Rs2000,Rs500,Rs200,Rs20,Rs1 is %d \n",total);  //show the total of all the denomination notes in a new line
return 0;   //return to the main function successfully






}
