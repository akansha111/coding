#include <stdio.h>   //this headerfile contains the printf and the scanf
int main()  //this is the main function
{
int msub1,msub2,msub3,msub4,msub5,msum,percentage;  //these are the provided variables
printf("Please enter your marks for msub1 \n");  //show the variable of msub1 to user in a new line
scanf("%d",&msub1);  //input the value for variable msub1 provided by user
printf("Please enter your marks for msub2 \n");  //show the variable of msub2 to user in a new line
scanf("%d",&msub2);  //input the value for variable msub2 provided by user
printf("Please enter your marks for msub3 \n");  //show the variable of msub3 to user in a new line
scanf("%d",&msub3);  //input the value for variable msub3 provided by user
printf("Please enter your marks for msub4 \n");  //show the variable of msub4 to user in a new line
scanf("%d",&msub4);  //input the value for variable msub4 provided by user
printf("Please enter your marks for msub5 \n");  //show the variable of msub5 to user in a new line
scanf("%d",&msub5);  //input the value for variable msub5 provided by user
msum = msub1 + msub2 + msub3 + msub4 + msub5;  //the value of variable msum is msub1+msub2+msub3+msub4+msub5
printf("The sum of all your marks is:%d\n ",msum);  //show the sum of all the marks to user
float percent = (msum*100)/500 ;  //the value of variable percent is (msum*100)/500
printf("The percentage of all your marks is:%f ",percent);  //show the percentage of all marks to user
return 0;  //return to the main function
}

