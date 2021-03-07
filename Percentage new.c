#include <stdio.h>   //this headerfile contains the printf and the scanf
int main ()      //this is the main function
{
int subject_1,subject_2,subject_3,total;   //these are the provided variables
printf("enter the marks for subject_1 \n");   //show the variable of subject_1 to user in a new line
scanf("%d",&subject_1);         //input the value for variable subject_1 provided by user
printf("enter the marks for subject_2 \n");   //show the variable of subject_2 to user in a new line
scanf("%d",&subject_2);         //input the value for variable subject_2 provided by user
printf("enter the marks for subject_3 \n");   //show the variable of subject_3 to user in a new line
scanf("%d",&subject_3);         //input the value for variable subject_3 provided by user
total=subject_1+subject_2+subject_3;   //this shows how to create the variable total
float percent=total/300;     //this shows how to find the value of variable percent
printf("subject_1 marks is %d",subject_1);   //show the value of subject_1 to user
printf("\n subject_2 marks is %d",subject_2);  //show the value of subject_2 to user
printf("\n subject_3 marks is %d",subject_3);   //show the value of subject_3 to user
printf("\n total of the three subjects is %d",total);  //show the total value of all the subjects to user
printf("\n percentage is %f",percent);   //shoe the percentage of the total value of all the subjects to user
return 0;   //return to the main function
}










